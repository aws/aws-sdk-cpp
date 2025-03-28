﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

AudioCodecOptions::AudioCodecOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

AudioCodecOptions& AudioCodecOptions::operator =(JsonView jsonValue)
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
