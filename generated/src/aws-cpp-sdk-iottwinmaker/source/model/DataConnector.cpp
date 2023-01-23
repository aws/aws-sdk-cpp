/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/DataConnector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

DataConnector::DataConnector() : 
    m_lambdaHasBeenSet(false),
    m_isNative(false),
    m_isNativeHasBeenSet(false)
{
}

DataConnector::DataConnector(JsonView jsonValue) : 
    m_lambdaHasBeenSet(false),
    m_isNative(false),
    m_isNativeHasBeenSet(false)
{
  *this = jsonValue;
}

DataConnector& DataConnector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambda"))
  {
    m_lambda = jsonValue.GetObject("lambda");

    m_lambdaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isNative"))
  {
    m_isNative = jsonValue.GetBool("isNative");

    m_isNativeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataConnector::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaHasBeenSet)
  {
   payload.WithObject("lambda", m_lambda.Jsonize());

  }

  if(m_isNativeHasBeenSet)
  {
   payload.WithBool("isNative", m_isNative);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
