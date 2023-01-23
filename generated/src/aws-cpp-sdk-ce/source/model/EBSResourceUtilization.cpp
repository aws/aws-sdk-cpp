/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/EBSResourceUtilization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

EBSResourceUtilization::EBSResourceUtilization() : 
    m_ebsReadOpsPerSecondHasBeenSet(false),
    m_ebsWriteOpsPerSecondHasBeenSet(false),
    m_ebsReadBytesPerSecondHasBeenSet(false),
    m_ebsWriteBytesPerSecondHasBeenSet(false)
{
}

EBSResourceUtilization::EBSResourceUtilization(JsonView jsonValue) : 
    m_ebsReadOpsPerSecondHasBeenSet(false),
    m_ebsWriteOpsPerSecondHasBeenSet(false),
    m_ebsReadBytesPerSecondHasBeenSet(false),
    m_ebsWriteBytesPerSecondHasBeenSet(false)
{
  *this = jsonValue;
}

EBSResourceUtilization& EBSResourceUtilization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EbsReadOpsPerSecond"))
  {
    m_ebsReadOpsPerSecond = jsonValue.GetString("EbsReadOpsPerSecond");

    m_ebsReadOpsPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsWriteOpsPerSecond"))
  {
    m_ebsWriteOpsPerSecond = jsonValue.GetString("EbsWriteOpsPerSecond");

    m_ebsWriteOpsPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsReadBytesPerSecond"))
  {
    m_ebsReadBytesPerSecond = jsonValue.GetString("EbsReadBytesPerSecond");

    m_ebsReadBytesPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsWriteBytesPerSecond"))
  {
    m_ebsWriteBytesPerSecond = jsonValue.GetString("EbsWriteBytesPerSecond");

    m_ebsWriteBytesPerSecondHasBeenSet = true;
  }

  return *this;
}

JsonValue EBSResourceUtilization::Jsonize() const
{
  JsonValue payload;

  if(m_ebsReadOpsPerSecondHasBeenSet)
  {
   payload.WithString("EbsReadOpsPerSecond", m_ebsReadOpsPerSecond);

  }

  if(m_ebsWriteOpsPerSecondHasBeenSet)
  {
   payload.WithString("EbsWriteOpsPerSecond", m_ebsWriteOpsPerSecond);

  }

  if(m_ebsReadBytesPerSecondHasBeenSet)
  {
   payload.WithString("EbsReadBytesPerSecond", m_ebsReadBytesPerSecond);

  }

  if(m_ebsWriteBytesPerSecondHasBeenSet)
  {
   payload.WithString("EbsWriteBytesPerSecond", m_ebsWriteBytesPerSecond);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
