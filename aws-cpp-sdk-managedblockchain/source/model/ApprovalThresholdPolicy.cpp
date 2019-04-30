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

#include <aws/managedblockchain/model/ApprovalThresholdPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

ApprovalThresholdPolicy::ApprovalThresholdPolicy() : 
    m_thresholdPercentage(0),
    m_thresholdPercentageHasBeenSet(false),
    m_proposalDurationInHours(0),
    m_proposalDurationInHoursHasBeenSet(false),
    m_thresholdComparator(ThresholdComparator::NOT_SET),
    m_thresholdComparatorHasBeenSet(false)
{
}

ApprovalThresholdPolicy::ApprovalThresholdPolicy(JsonView jsonValue) : 
    m_thresholdPercentage(0),
    m_thresholdPercentageHasBeenSet(false),
    m_proposalDurationInHours(0),
    m_proposalDurationInHoursHasBeenSet(false),
    m_thresholdComparator(ThresholdComparator::NOT_SET),
    m_thresholdComparatorHasBeenSet(false)
{
  *this = jsonValue;
}

ApprovalThresholdPolicy& ApprovalThresholdPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ThresholdPercentage"))
  {
    m_thresholdPercentage = jsonValue.GetInteger("ThresholdPercentage");

    m_thresholdPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProposalDurationInHours"))
  {
    m_proposalDurationInHours = jsonValue.GetInteger("ProposalDurationInHours");

    m_proposalDurationInHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThresholdComparator"))
  {
    m_thresholdComparator = ThresholdComparatorMapper::GetThresholdComparatorForName(jsonValue.GetString("ThresholdComparator"));

    m_thresholdComparatorHasBeenSet = true;
  }

  return *this;
}

JsonValue ApprovalThresholdPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_thresholdPercentageHasBeenSet)
  {
   payload.WithInteger("ThresholdPercentage", m_thresholdPercentage);

  }

  if(m_proposalDurationInHoursHasBeenSet)
  {
   payload.WithInteger("ProposalDurationInHours", m_proposalDurationInHours);

  }

  if(m_thresholdComparatorHasBeenSet)
  {
   payload.WithString("ThresholdComparator", ThresholdComparatorMapper::GetNameForThresholdComparator(m_thresholdComparator));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
