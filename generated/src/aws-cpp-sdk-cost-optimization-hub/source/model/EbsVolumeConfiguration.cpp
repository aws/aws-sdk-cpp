/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/EbsVolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

EbsVolumeConfiguration::EbsVolumeConfiguration() : 
    m_attachmentStateHasBeenSet(false),
    m_performanceHasBeenSet(false),
    m_storageHasBeenSet(false)
{
}

EbsVolumeConfiguration::EbsVolumeConfiguration(JsonView jsonValue) : 
    m_attachmentStateHasBeenSet(false),
    m_performanceHasBeenSet(false),
    m_storageHasBeenSet(false)
{
  *this = jsonValue;
}

EbsVolumeConfiguration& EbsVolumeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attachmentState"))
  {
    m_attachmentState = jsonValue.GetString("attachmentState");

    m_attachmentStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("performance"))
  {
    m_performance = jsonValue.GetObject("performance");

    m_performanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storage"))
  {
    m_storage = jsonValue.GetObject("storage");

    m_storageHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsVolumeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentStateHasBeenSet)
  {
   payload.WithString("attachmentState", m_attachmentState);

  }

  if(m_performanceHasBeenSet)
  {
   payload.WithObject("performance", m_performance.Jsonize());

  }

  if(m_storageHasBeenSet)
  {
   payload.WithObject("storage", m_storage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
