/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elastictranscoder/model/AudioCodecOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

AudioCodecOptions::AudioCodecOptions() : 
    m_profileHasBeenSet(false),
    m_bitDepthHasBeenSet(false),
    m_bitOrderHasBeenSet(false),
    m_signedHasBeenSet(false)
{
}

AudioCodecOptions::AudioCodecOptions(const JsonValue& jsonValue) : 
    m_profileHasBeenSet(false),
    m_bitDepthHasBeenSet(false),
    m_bitOrderHasBeenSet(false),
    m_signedHasBeenSet(false)
{
  *this = jsonValue;
}

AudioCodecOptions& AudioCodecOptions::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Profile"))
  {
    m_profile = jsonValue.GetString("Profile");

    m_profileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BitDepth"))
  {
    m_bitDepth = jsonValue.GetString("BitDepth");

    m_bitDepthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BitOrder"))
  {
    m_bitOrder = jsonValue.GetString("BitOrder");

    m_bitOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Signed"))
  {
    m_signed = jsonValue.GetString("Signed");

    m_signedHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioCodecOptions::Jsonize() const
{
  JsonValue payload;

  if(m_profileHasBeenSet)
  {
   payload.WithString("Profile", m_profile);

  }

  if(m_bitDepthHasBeenSet)
  {
   payload.WithString("BitDepth", m_bitDepth);

  }

  if(m_bitOrderHasBeenSet)
  {
   payload.WithString("BitOrder", m_bitOrder);

  }

  if(m_signedHasBeenSet)
  {
   payload.WithString("Signed", m_signed);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws