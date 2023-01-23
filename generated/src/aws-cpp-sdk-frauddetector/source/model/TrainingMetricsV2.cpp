/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/TrainingMetricsV2.h>
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

TrainingMetricsV2::TrainingMetricsV2() : 
    m_ofiHasBeenSet(false),
    m_tfiHasBeenSet(false),
    m_atiHasBeenSet(false)
{
}

TrainingMetricsV2::TrainingMetricsV2(JsonView jsonValue) : 
    m_ofiHasBeenSet(false),
    m_tfiHasBeenSet(false),
    m_atiHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingMetricsV2& TrainingMetricsV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ofi"))
  {
    m_ofi = jsonValue.GetObject("ofi");

    m_ofiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tfi"))
  {
    m_tfi = jsonValue.GetObject("tfi");

    m_tfiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ati"))
  {
    m_ati = jsonValue.GetObject("ati");

    m_atiHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingMetricsV2::Jsonize() const
{
  JsonValue payload;

  if(m_ofiHasBeenSet)
  {
   payload.WithObject("ofi", m_ofi.Jsonize());

  }

  if(m_tfiHasBeenSet)
  {
   payload.WithObject("tfi", m_tfi.Jsonize());

  }

  if(m_atiHasBeenSet)
  {
   payload.WithObject("ati", m_ati.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
