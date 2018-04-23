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

LambdaActivity::LambdaActivity(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_lambdaNameHasBeenSet(false),
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_nextHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaActivity& LambdaActivity::operator =(const JsonValue& jsonValue)
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
