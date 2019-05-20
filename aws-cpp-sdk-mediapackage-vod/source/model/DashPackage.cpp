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

#include <aws/mediapackage-vod/model/DashPackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

DashPackage::DashPackage() : 
    m_dashManifestsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false)
{
}

DashPackage::DashPackage(JsonView jsonValue) : 
    m_dashManifestsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

DashPackage& DashPackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dashManifests"))
  {
    Array<JsonView> dashManifestsJsonList = jsonValue.GetArray("dashManifests");
    for(unsigned dashManifestsIndex = 0; dashManifestsIndex < dashManifestsJsonList.GetLength(); ++dashManifestsIndex)
    {
      m_dashManifests.push_back(dashManifestsJsonList[dashManifestsIndex].AsObject());
    }
    m_dashManifestsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentDurationSeconds"))
  {
    m_segmentDurationSeconds = jsonValue.GetInteger("segmentDurationSeconds");

    m_segmentDurationSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue DashPackage::Jsonize() const
{
  JsonValue payload;

  if(m_dashManifestsHasBeenSet)
  {
   Array<JsonValue> dashManifestsJsonList(m_dashManifests.size());
   for(unsigned dashManifestsIndex = 0; dashManifestsIndex < dashManifestsJsonList.GetLength(); ++dashManifestsIndex)
   {
     dashManifestsJsonList[dashManifestsIndex].AsObject(m_dashManifests[dashManifestsIndex].Jsonize());
   }
   payload.WithArray("dashManifests", std::move(dashManifestsJsonList));

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_segmentDurationSecondsHasBeenSet)
  {
   payload.WithInteger("segmentDurationSeconds", m_segmentDurationSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
