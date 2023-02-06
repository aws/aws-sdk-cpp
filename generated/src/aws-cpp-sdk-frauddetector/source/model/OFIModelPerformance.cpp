/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/OFIModelPerformance.h>
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

OFIModelPerformance::OFIModelPerformance() : 
    m_auc(0.0),
    m_aucHasBeenSet(false),
    m_uncertaintyRangeHasBeenSet(false)
{
}

OFIModelPerformance::OFIModelPerformance(JsonView jsonValue) : 
    m_auc(0.0),
    m_aucHasBeenSet(false),
    m_uncertaintyRangeHasBeenSet(false)
{
  *this = jsonValue;
}

OFIModelPerformance& OFIModelPerformance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("auc"))
  {
    m_auc = jsonValue.GetDouble("auc");

    m_aucHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uncertaintyRange"))
  {
    m_uncertaintyRange = jsonValue.GetObject("uncertaintyRange");

    m_uncertaintyRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue OFIModelPerformance::Jsonize() const
{
  JsonValue payload;

  if(m_aucHasBeenSet)
  {
   payload.WithDouble("auc", m_auc);

  }

  if(m_uncertaintyRangeHasBeenSet)
  {
   payload.WithObject("uncertaintyRange", m_uncertaintyRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
