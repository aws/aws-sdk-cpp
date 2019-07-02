/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_state(ImageBuilderState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_enableDefaultInternetAccess(false),
    m_enableDefaultInternetAccessHasBeenSet(false),
    m_domainJoinInfoHasBeenSet(false),
    m_networkAccessConfigurationHasBeenSet(false),
    m_imageBuilderErrorsHasBeenSet(false),
    m_appstreamAgentVersionHasBeenSet(false)
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
    m_state(ImageBuilderState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_enableDefaultInternetAccess(false),
    m_enableDefaultInternetAccessHasBeenSet(false),
    m_domainJoinInfoHasBeenSet(false),
    m_networkAccessConfigurationHasBeenSet(false),
    m_imageBuilderErrorsHasBeenSet(false),
    m_appstreamAgentVersionHasBeenSet(false)
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
    Array<JsonView> imageBuilderErrorsJsonList = jsonValue.GetArray("ImageBuilderErrors");
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
   Array<JsonValue> imageBuilderErrorsJsonList(m_imageBuilderErrors.size());
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

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
