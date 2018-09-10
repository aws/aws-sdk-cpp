﻿/*
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

#include <aws/comprehend/model/InputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

InputDataConfig::InputDataConfig() : 
    m_s3UriHasBeenSet(false),
    m_inputFormat(InputFormat::NOT_SET),
    m_inputFormatHasBeenSet(false)
{
}

InputDataConfig::InputDataConfig(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_inputFormat(InputFormat::NOT_SET),
    m_inputFormatHasBeenSet(false)
{
  *this = jsonValue;
}

InputDataConfig& InputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputFormat"))
  {
    m_inputFormat = InputFormatMapper::GetInputFormatForName(jsonValue.GetString("InputFormat"));

    m_inputFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_inputFormatHasBeenSet)
  {
   payload.WithString("InputFormat", InputFormatMapper::GetNameForInputFormat(m_inputFormat));
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
