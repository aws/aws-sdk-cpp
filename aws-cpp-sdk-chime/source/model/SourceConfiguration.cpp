/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/SourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

SourceConfiguration::SourceConfiguration() : 
    m_selectedVideoStreamsHasBeenSet(false)
{
}

SourceConfiguration::SourceConfiguration(JsonView jsonValue) : 
    m_selectedVideoStreamsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceConfiguration& SourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectedVideoStreams"))
  {
    m_selectedVideoStreams = jsonValue.GetObject("SelectedVideoStreams");

    m_selectedVideoStreamsHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_selectedVideoStreamsHasBeenSet)
  {
   payload.WithObject("SelectedVideoStreams", m_selectedVideoStreams.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
