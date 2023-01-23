/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/FileFormatDescriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

FileFormatDescriptor::FileFormatDescriptor() : 
    m_csvFormatDescriptorHasBeenSet(false),
    m_jsonFormatDescriptorHasBeenSet(false)
{
}

FileFormatDescriptor::FileFormatDescriptor(JsonView jsonValue) : 
    m_csvFormatDescriptorHasBeenSet(false),
    m_jsonFormatDescriptorHasBeenSet(false)
{
  *this = jsonValue;
}

FileFormatDescriptor& FileFormatDescriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CsvFormatDescriptor"))
  {
    m_csvFormatDescriptor = jsonValue.GetObject("CsvFormatDescriptor");

    m_csvFormatDescriptorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JsonFormatDescriptor"))
  {
    m_jsonFormatDescriptor = jsonValue.GetObject("JsonFormatDescriptor");

    m_jsonFormatDescriptorHasBeenSet = true;
  }

  return *this;
}

JsonValue FileFormatDescriptor::Jsonize() const
{
  JsonValue payload;

  if(m_csvFormatDescriptorHasBeenSet)
  {
   payload.WithObject("CsvFormatDescriptor", m_csvFormatDescriptor.Jsonize());

  }

  if(m_jsonFormatDescriptorHasBeenSet)
  {
   payload.WithObject("JsonFormatDescriptor", m_jsonFormatDescriptor.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
