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

#include <aws/mediapackage/model/MssPackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

MssPackage::MssPackage() : 
    m_encryptionHasBeenSet(false),
    m_manifestWindowSeconds(0),
    m_manifestWindowSecondsHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_streamSelectionHasBeenSet(false)
{
}

MssPackage::MssPackage(const JsonValue& jsonValue) : 
    m_encryptionHasBeenSet(false),
    m_manifestWindowSeconds(0),
    m_manifestWindowSecondsHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_streamSelectionHasBeenSet(false)
{
  *this = jsonValue;
}

MssPackage& MssPackage::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestWindowSeconds"))
  {
    m_manifestWindowSeconds = jsonValue.GetInteger("manifestWindowSeconds");

    m_manifestWindowSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentDurationSeconds"))
  {
    m_segmentDurationSeconds = jsonValue.GetInteger("segmentDurationSeconds");

    m_segmentDurationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamSelection"))
  {
    m_streamSelection = jsonValue.GetObject("streamSelection");

    m_streamSelectionHasBeenSet = true;
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

  if(m_manifestWindowSecondsHasBeenSet)
  {
   payload.WithInteger("manifestWindowSeconds", m_manifestWindowSeconds);

  }

  if(m_segmentDurationSecondsHasBeenSet)
  {
   payload.WithInteger("segmentDurationSeconds", m_segmentDurationSeconds);

  }

  if(m_streamSelectionHasBeenSet)
  {
   payload.WithObject("streamSelection", m_streamSelection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
