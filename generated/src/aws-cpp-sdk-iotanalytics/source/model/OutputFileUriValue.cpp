/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/OutputFileUriValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

OutputFileUriValue::OutputFileUriValue() : 
    m_fileNameHasBeenSet(false)
{
}

OutputFileUriValue::OutputFileUriValue(JsonView jsonValue) : 
    m_fileNameHasBeenSet(false)
{
  *this = jsonValue;
}

OutputFileUriValue& OutputFileUriValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileName"))
  {
    m_fileName = jsonValue.GetString("fileName");

    m_fileNameHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputFileUriValue::Jsonize() const
{
  JsonValue payload;

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("fileName", m_fileName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
