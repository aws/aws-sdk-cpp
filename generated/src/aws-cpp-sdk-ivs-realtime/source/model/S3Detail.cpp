/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/S3Detail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

S3Detail::S3Detail() : 
    m_recordingPrefixHasBeenSet(false)
{
}

S3Detail::S3Detail(JsonView jsonValue) : 
    m_recordingPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

S3Detail& S3Detail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recordingPrefix"))
  {
    m_recordingPrefix = jsonValue.GetString("recordingPrefix");

    m_recordingPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Detail::Jsonize() const
{
  JsonValue payload;

  if(m_recordingPrefixHasBeenSet)
  {
   payload.WithString("recordingPrefix", m_recordingPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
