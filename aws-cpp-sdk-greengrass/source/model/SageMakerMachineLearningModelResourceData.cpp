/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/SageMakerMachineLearningModelResourceData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

SageMakerMachineLearningModelResourceData::SageMakerMachineLearningModelResourceData() : 
    m_destinationPathHasBeenSet(false),
    m_ownerSettingHasBeenSet(false),
    m_sageMakerJobArnHasBeenSet(false)
{
}

SageMakerMachineLearningModelResourceData::SageMakerMachineLearningModelResourceData(JsonView jsonValue) : 
    m_destinationPathHasBeenSet(false),
    m_ownerSettingHasBeenSet(false),
    m_sageMakerJobArnHasBeenSet(false)
{
  *this = jsonValue;
}

SageMakerMachineLearningModelResourceData& SageMakerMachineLearningModelResourceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationPath"))
  {
    m_destinationPath = jsonValue.GetString("DestinationPath");

    m_destinationPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerSetting"))
  {
    m_ownerSetting = jsonValue.GetObject("OwnerSetting");

    m_ownerSettingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SageMakerJobArn"))
  {
    m_sageMakerJobArn = jsonValue.GetString("SageMakerJobArn");

    m_sageMakerJobArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SageMakerMachineLearningModelResourceData::Jsonize() const
{
  JsonValue payload;

  if(m_destinationPathHasBeenSet)
  {
   payload.WithString("DestinationPath", m_destinationPath);

  }

  if(m_ownerSettingHasBeenSet)
  {
   payload.WithObject("OwnerSetting", m_ownerSetting.Jsonize());

  }

  if(m_sageMakerJobArnHasBeenSet)
  {
   payload.WithString("SageMakerJobArn", m_sageMakerJobArn);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
