/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StreamProcessingStartSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

StreamProcessingStartSelector::StreamProcessingStartSelector() : 
    m_kVSStreamStartSelectorHasBeenSet(false)
{
}

StreamProcessingStartSelector::StreamProcessingStartSelector(JsonView jsonValue) : 
    m_kVSStreamStartSelectorHasBeenSet(false)
{
  *this = jsonValue;
}

StreamProcessingStartSelector& StreamProcessingStartSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KVSStreamStartSelector"))
  {
    m_kVSStreamStartSelector = jsonValue.GetObject("KVSStreamStartSelector");

    m_kVSStreamStartSelectorHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamProcessingStartSelector::Jsonize() const
{
  JsonValue payload;

  if(m_kVSStreamStartSelectorHasBeenSet)
  {
   payload.WithObject("KVSStreamStartSelector", m_kVSStreamStartSelector.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
