/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/InstanceMetadataOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

InstanceMetadataOptions::InstanceMetadataOptions() : 
    m_httpTokensHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false)
{
}

InstanceMetadataOptions::InstanceMetadataOptions(JsonView jsonValue) : 
    m_httpTokensHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceMetadataOptions& InstanceMetadataOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("httpTokens"))
  {
    m_httpTokens = jsonValue.GetString("httpTokens");

    m_httpTokensHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpPutResponseHopLimit"))
  {
    m_httpPutResponseHopLimit = jsonValue.GetInteger("httpPutResponseHopLimit");

    m_httpPutResponseHopLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceMetadataOptions::Jsonize() const
{
  JsonValue payload;

  if(m_httpTokensHasBeenSet)
  {
   payload.WithString("httpTokens", m_httpTokens);

  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
   payload.WithInteger("httpPutResponseHopLimit", m_httpPutResponseHopLimit);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
