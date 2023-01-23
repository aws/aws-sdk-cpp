/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/Variable.h>
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

Variable::Variable() : 
    m_nameHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_datasetContentVersionValueHasBeenSet(false),
    m_outputFileUriValueHasBeenSet(false)
{
}

Variable::Variable(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_datasetContentVersionValueHasBeenSet(false),
    m_outputFileUriValueHasBeenSet(false)
{
  *this = jsonValue;
}

Variable& Variable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doubleValue"))
  {
    m_doubleValue = jsonValue.GetDouble("doubleValue");

    m_doubleValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datasetContentVersionValue"))
  {
    m_datasetContentVersionValue = jsonValue.GetObject("datasetContentVersionValue");

    m_datasetContentVersionValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputFileUriValue"))
  {
    m_outputFileUriValue = jsonValue.GetObject("outputFileUriValue");

    m_outputFileUriValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Variable::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  if(m_doubleValueHasBeenSet)
  {
   payload.WithDouble("doubleValue", m_doubleValue);

  }

  if(m_datasetContentVersionValueHasBeenSet)
  {
   payload.WithObject("datasetContentVersionValue", m_datasetContentVersionValue.Jsonize());

  }

  if(m_outputFileUriValueHasBeenSet)
  {
   payload.WithObject("outputFileUriValue", m_outputFileUriValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
