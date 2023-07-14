/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class OnDemandCapacityReservationPreference
  {
    NOT_SET,
    open,
    none
  };

namespace OnDemandCapacityReservationPreferenceMapper
{
AWS_EMR_API OnDemandCapacityReservationPreference GetOnDemandCapacityReservationPreferenceForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForOnDemandCapacityReservationPreference(OnDemandCapacityReservationPreference value);
} // namespace OnDemandCapacityReservationPreferenceMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
