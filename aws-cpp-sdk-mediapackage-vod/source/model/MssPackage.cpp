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

#include <aws/mediapackage-vod/model/MssPackage.h>
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

MssPackage::MssPackage() : 
    m_encryptionHasBeenSet(false),
    m_mssManifestsHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false)
{
}

MssPackage::MssPackage(JsonView jsonValue) : 
    m_encryptionHasBeenSet(false),
    m_mssManifestsHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

MssPackage& MssPackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mssManifests"))
  {
    Array<JsonView> mssManifestsJsonList = jsonValue.GetArray("mssManifests");
    for(unsigned mssManifestsIndex = 0; mssManifestsIndex < mssManifestsJsonList.GetLength(); ++mssManifestsIndex)
    {
      m_mssManifests.push_back(mssManifestsJsonList[mssManifestsIndex].AsObject());
    }
    m_mssManifestsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentDurationSeconds"))
  {
    m_segmentDurationSeconds = jsonValue.GetInteger("segmentDurationSeconds");

    m_segmentDurationSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue MssPackage::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_mssManifestsHasBeenSet)
  {
   Array<JsonValue> mssManifestsJsonList(m_mssManifests.size());
   for(unsigned mssManifestsIndex = 0; mssManifestsIndex < mssManifestsJsonList.GetLength(); ++mssManifestsIndex)
   {
     mssManifestsJsonList[mssManifestsIndex].AsObject(m_mssManifests[mssManifestsIndex].Jsonize());
   }
   payload.WithArray("mssManifests", std::move(mssManifestsJsonList));

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
