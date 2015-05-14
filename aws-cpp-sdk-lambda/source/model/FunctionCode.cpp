/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/model/FunctionCode.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

FunctionCode::FunctionCode() : 
    m_zipFileHasBeenSet(false)
{
}

FunctionCode::FunctionCode(const JsonValue& jsonValue) : 
    m_zipFileHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionCode& FunctionCode::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ZipFile"))
  {
    m_zipFile = HashingUtils::Base64Decode(jsonValue.GetString("ZipFile"));

    m_zipFileHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionCode::Jsonize() const
{
  JsonValue payload;

  if(m_zipFileHasBeenSet)
  {
   payload.WithString("ZipFile", HashingUtils::Base64Encode(m_zipFile));
  }

  return std::move(payload);
}