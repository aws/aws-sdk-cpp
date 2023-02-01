/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/TFIModelPerformance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

TFIModelPerformance::TFIModelPerformance() : 
    m_auc(0.0),
    m_aucHasBeenSet(false)
{
}

TFIModelPerformance::TFIModelPerformance(JsonView jsonValue) : 
    m_auc(0.0),
    m_aucHasBeenSet(false)
{
  *this = jsonValue;
}

TFIModelPerformance& TFIModelPerformance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("auc"))
  {
    m_auc = jsonValue.GetDouble("auc");

    m_aucHasBeenSet = true;
  }

  return *this;
}

JsonValue TFIModelPerformance::Jsonize() const
{
  JsonValue payload;

  if(m_aucHasBeenSet)
  {
   payload.WithDouble("auc", m_auc);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
