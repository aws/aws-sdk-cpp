/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/EncodingParametersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

EncodingParametersRequest::EncodingParametersRequest() : 
    m_compressionFactor(0.0),
    m_compressionFactorHasBeenSet(false),
    m_encoderProfile(EncoderProfile::NOT_SET),
    m_encoderProfileHasBeenSet(false)
{
}

EncodingParametersRequest::EncodingParametersRequest(JsonView jsonValue) : 
    m_compressionFactor(0.0),
    m_compressionFactorHasBeenSet(false),
    m_encoderProfile(EncoderProfile::NOT_SET),
    m_encoderProfileHasBeenSet(false)
{
  *this = jsonValue;
}

EncodingParametersRequest& EncodingParametersRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("compressionFactor"))
  {
    m_compressionFactor = jsonValue.GetDouble("compressionFactor");

    m_compressionFactorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encoderProfile"))
  {
    m_encoderProfile = EncoderProfileMapper::GetEncoderProfileForName(jsonValue.GetString("encoderProfile"));

    m_encoderProfileHasBeenSet = true;
  }

  return *this;
}

JsonValue EncodingParametersRequest::Jsonize() const
{
  JsonValue payload;

  if(m_compressionFactorHasBeenSet)
  {
   payload.WithDouble("compressionFactor", m_compressionFactor);

  }

  if(m_encoderProfileHasBeenSet)
  {
   payload.WithString("encoderProfile", EncoderProfileMapper::GetNameForEncoderProfile(m_encoderProfile));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
