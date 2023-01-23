/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ImageBuilder.h>
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

ImageBuilder::ImageBuilder() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_imageArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_platform(PlatformType::NOT_SET),
    m_platformHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_state(ImageBuilderState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_enableDefaultInternetAccess(false),
    m_enableDefaultInternetAccessHasBeenSet(false),
    m_domainJoinInfoHasBeenSet(false),
    m_networkAccessConfigurationHasBeenSet(false),
    m_imageBuilderErrorsHasBeenSet(false),
    m_appstreamAgentVersionHasBeenSet(false),
    m_accessEndpointsHasBeenSet(false)
{
}

ImageBuilder::ImageBuilder(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_imageArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_platform(PlatformType::NOT_SET),
    m_platformHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_state(ImageBuilderState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_enableDefaultInternetAccess(false),
    m_enableDefaultInternetAccessHasBeenSet(false),
    m_domainJoinInfoHasBeenSet(false),
    m_networkAccessConfigurationHasBeenSet(false),
    m_imageBuilderErrorsHasBeenSet(false),
    m_appstreamAgentVersionHasBeenSet(false),
    m_accessEndpointsHasBeenSet(false)
{
  *this = jsonValue;
}

ImageBuilder& ImageBuilder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageArn"))
  {
    m_imageArn = jsonValue.GetString("ImageArn");

    m_imageArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Platform"))
  {
    m_platform = PlatformTypeMapper::GetPlatformTypeForName(jsonValue.GetString("Platform"));

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ImageBuilderStateMapper::GetImageBuilderStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateChangeReason"))
  {
    m_stateChangeReason = jsonValue.GetObject("StateChangeReason");

    m_stateChangeReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableDefaultInternetAccess"))
  {
    m_enableDefaultInternetAccess = jsonValue.GetBool("EnableDefaultInternetAccess");

    m_enableDefaultInternetAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainJoinInfo"))
  {
    m_domainJoinInfo = jsonValue.GetObject("DomainJoinInfo");

    m_domainJoinInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkAccessConfiguration"))
  {
    m_networkAccessConfiguration = jsonValue.GetObject("NetworkAccessConfiguration");

    m_networkAccessConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageBuilderErrors"))
  {
    Aws::Utils::Array<JsonView> imageBuilderErrorsJsonList = jsonValue.GetArray("ImageBuilderErrors");
    for(unsigned imageBuilderErrorsIndex = 0; imageBuilderErrorsIndex < imageBuilderErrorsJsonList.GetLength(); ++imageBuilderErrorsIndex)
    {
      m_imageBuilderErrors.push_back(imageBuilderErrorsJsonList[imageBuilderErrorsIndex].AsObject());
    }
    m_imageBuilderErrorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppstreamAgentVersion"))
  {
    m_appstreamAgentVersion = jsonValue.GetString("AppstreamAgentVersion");

    m_appstreamAgentVersionHasBeenSet = true;
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

JsonValue ImageBuilder::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_imageArnHasBeenSet)
  {
   payload.WithString("ImageArn", m_imageArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", PlatformTypeMapper::GetNameForPlatformType(m_platform));
  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ImageBuilderStateMapper::GetNameForImageBuilderState(m_state));
  }

  if(m_stateChangeReasonHasBeenSet)
  {
   payload.WithObject("StateChangeReason", m_stateChangeReason.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_enableDefaultInternetAccessHasBeenSet)
  {
   payload.WithBool("EnableDefaultInternetAccess", m_enableDefaultInternetAccess);

  }

  if(m_domainJoinInfoHasBeenSet)
  {
   payload.WithObject("DomainJoinInfo", m_domainJoinInfo.Jsonize());

  }

  if(m_networkAccessConfigurationHasBeenSet)
  {
   payload.WithObject("NetworkAccessConfiguration", m_networkAccessConfiguration.Jsonize());

  }

  if(m_imageBuilderErrorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imageBuilderErrorsJsonList(m_imageBuilderErrors.size());
   for(unsigned imageBuilderErrorsIndex = 0; imageBuilderErrorsIndex < imageBuilderErrorsJsonList.GetLength(); ++imageBuilderErrorsIndex)
   {
     imageBuilderErrorsJsonList[imageBuilderErrorsIndex].AsObject(m_imageBuilderErrors[imageBuilderErrorsIndex].Jsonize());
   }
   payload.WithArray("ImageBuilderErrors", std::move(imageBuilderErrorsJsonList));

  }

  if(m_appstreamAgentVersionHasBeenSet)
  {
   payload.WithString("AppstreamAgentVersion", m_appstreamAgentVersion);

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
