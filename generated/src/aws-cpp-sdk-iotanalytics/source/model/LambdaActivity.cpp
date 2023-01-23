/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/LambdaActivity.h>
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

LambdaActivity::LambdaActivity() : 
    m_nameHasBeenSet(false),
    m_lambdaNameHasBeenSet(false),
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_nextHasBeenSet(false)
{
}

LambdaActivity::LambdaActivity(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_lambdaNameHasBeenSet(false),
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_nextHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaActivity& LambdaActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaName"))
  {
    m_lambdaName = jsonValue.GetString("lambdaName");

    m_lambdaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("batchSize"))
  {
    m_batchSize = jsonValue.GetInteger("batchSize");

    m_batchSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("next"))
  {
    m_next = jsonValue.GetString("next");

    m_nextHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaActivity::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_lambdaNameHasBeenSet)
  {
   payload.WithString("lambdaName", m_lambdaName);

  }

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("batchSize", m_batchSize);

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
