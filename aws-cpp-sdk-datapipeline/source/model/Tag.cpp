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
#include <aws/datapipeline/model/Tag.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Tag::Tag()
{
}

Tag::Tag(const JsonValue& jsonValue)
{
  *this = jsonValue;
}

Tag& Tag::operator =(const JsonValue& jsonValue)
{
  m_key = jsonValue.GetString("key");

  m_value = jsonValue.GetString("value");

  return *this;
}

JsonValue Tag::Jsonize() const
{
  JsonValue payload;

  payload.WithString("key", m_key);

  payload.WithString("value", m_value);

  return std::move(payload);
}