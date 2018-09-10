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

#include <aws/iotanalytics/model/DeviceRegistryEnrichActivity.h>
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

DeviceRegistryEnrichActivity::DeviceRegistryEnrichActivity() : 
    m_nameHasBeenSet(false),
    m_attributeHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_nextHasBeenSet(false)
{
}

DeviceRegistryEnrichActivity::DeviceRegistryEnrichActivity(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_attributeHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_nextHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceRegistryEnrichActivity& DeviceRegistryEnrichActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attribute"))
  {
    m_attribute = jsonValue.GetString("attribute");

    m_attributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");

    m_thingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("next"))
  {
    m_next = jsonValue.GetString("next");

    m_nextHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceRegistryEnrichActivity::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_attributeHasBeenSet)
  {
   payload.WithString("attribute", m_attribute);

  }

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_nextHasBeenSet)
  {
   payload.WithString("next", m_next);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
