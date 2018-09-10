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
