/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AppBlockBuilder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

AppBlockBuilder::AppBlockBuilder() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_platform(AppBlockBuilderPlatformType::NOT_SET),
    m_platformHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_enableDefaultInternetAccess(false),
    m_enableDefaultInternetAccessHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_state(AppBlockBuilderState::NOT_SET),
    m_stateHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_appBlockBuilderErrorsHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_accessEndpointsHasBeenSet(false)
{
}

AppBlockBuilder::AppBlockBuilder(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_platform(AppBlockBuilderPlatformType::NOT_SET),
    m_platformHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_enableDefaultInternetAccess(false),
    m_enableDefaultInternetAccessHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_state(AppBlockBuilderState::NOT_SET),
    m_stateHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_appBlockBuilderErrorsHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_accessEndpointsHasBeenSet(false)
{
  *this = jsonValue;
}

AppBlockBuilder& AppBlockBuilder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Platform"))
  {
    m_platform = AppBlockBuilderPlatformTypeMapper::GetAppBlockBuilderPlatformTypeForName(jsonValue.GetString("Platform"));

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableDefaultInternetAccess"))
  {
    m_enableDefaultInternetAccess = jsonValue.GetBool("EnableDefaultInternetAccess");

    m_enableDefaultInternetAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = AppBlockBuilderStateMapper::GetAppBlockBuilderStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppBlockBuilderErrors"))
  {
    Aws::Utils::Array<JsonView> appBlockBuilderErrorsJsonList = jsonValue.GetArray("AppBlockBuilderErrors");
    for(unsigned appBlockBuilderErrorsIndex = 0; appBlockBuilderErrorsIndex < appBlockBuilderErrorsJsonList.GetLength(); ++appBlockBuilderErrorsIndex)
    {
      m_appBlockBuilderErrors.push_back(appBlockBuilderErrorsJsonList[appBlockBuilderErrorsIndex].AsObject());
    }
    m_appBlockBuilderErrorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateChangeReason"))
  {
    m_stateChangeReason = jsonValue.GetObject("StateChangeReason");

    m_stateChangeReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessEndpoints"))
  {
    Aws::Utils::Array<JsonView> accessEndpointsJsonList = jsonValue.GetArray("AccessEndpoints");
    for(unsigned accessEndpointsIndex = 0; accessEndpointsIndex < accessEndpointsJsonList.GetLength(); ++accessEndpointsIndex)
    {
      m_accessEndpoints.push_back(accessEndpointsJsonList[accessEndpointsIndex].AsObject());
    }
    m_accessEndpointsHasBeenSet = true;
  }

  return *this;
}

JsonValue AppBlockBuilder::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", AppBlockBuilderPlatformTypeMapper::GetNameForAppBlockBuilderPlatformType(m_platform));
  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_enableDefaultInternetAccessHasBeenSet)
  {
   payload.WithBool("EnableDefaultInternetAccess", m_enableDefaultInternetAccess);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", AppBlockBuilderStateMapper::GetNameForAppBlockBuilderState(m_state));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_appBlockBuilderErrorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appBlockBuilderErrorsJsonList(m_appBlockBuilderErrors.size());
   for(unsigned appBlockBuilderErrorsIndex = 0; appBlockBuilderErrorsIndex < appBlockBuilderErrorsJsonList.GetLength(); ++appBlockBuilderErrorsIndex)
   {
     appBlockBuilderErrorsJsonList[appBlockBuilderErrorsIndex].AsObject(m_appBlockBuilderErrors[appBlockBuilderErrorsIndex].Jsonize());
   }
   payload.WithArray("AppBlockBuilderErrors", std::move(appBlockBuilderErrorsJsonList));

  }

  if(m_stateChangeReasonHasBeenSet)
  {
   payload.WithObject("StateChangeReason", m_stateChangeReason.Jsonize());

  }

  if(m_accessEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessEndpointsJsonList(m_accessEndpoints.size());
   for(unsigned accessEndpointsIndex = 0; accessEndpointsIndex < accessEndpointsJsonList.GetLength(); ++accessEndpointsIndex)
   {
     accessEndpointsJsonList[accessEndpointsIndex].AsObject(m_accessEndpoints[accessEndpointsIndex].Jsonize());
   }
   payload.WithArray("AccessEndpoints", std::move(accessEndpointsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
