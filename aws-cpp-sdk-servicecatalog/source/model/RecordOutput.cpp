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

#include <aws/servicecatalog/model/RecordOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

RecordOutput::RecordOutput() : 
    m_outputKeyHasBeenSet(false),
    m_outputValueHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

RecordOutput::RecordOutput(JsonView jsonValue) : 
    m_outputKeyHasBeenSet(false),
    m_outputValueHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

RecordOutput& RecordOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputKey"))
  {
    m_outputKey = jsonValue.GetString("OutputKey");

    m_outputKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputValue"))
  {
    m_outputValue = jsonValue.GetString("OutputValue");

    m_outputValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordOutput::Jsonize() const
{
  JsonValue payload;

  if(m_outputKeyHasBeenSet)
  {
   payload.WithString("OutputKey", m_outputKey);

  }

  if(m_outputValueHasBeenSet)
  {
   payload.WithString("OutputValue", m_outputValue);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
