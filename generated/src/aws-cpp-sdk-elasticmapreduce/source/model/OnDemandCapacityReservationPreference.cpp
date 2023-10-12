/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/OnDemandCapacityReservationPreference.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace OnDemandCapacityReservationPreferenceMapper
      {

        static constexpr uint32_t open_HASH = ConstExprHashingUtils::HashString("open");
        static constexpr uint32_t none_HASH = ConstExprHashingUtils::HashString("none");


        OnDemandCapacityReservationPreference GetOnDemandCapacityReservationPreferenceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == open_HASH)
          {
            return OnDemandCapacityReservationPreference::open;
          }
          else if (hashCode == none_HASH)
          {
            return OnDemandCapacityReservationPreference::none;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OnDemandCapacityReservationPreference>(hashCode);
          }

          return OnDemandCapacityReservationPreference::NOT_SET;
        }

        Aws::String GetNameForOnDemandCapacityReservationPreference(OnDemandCapacityReservationPreference enumValue)
        {
          switch(enumValue)
          {
          case OnDemandCapacityReservationPreference::NOT_SET:
            return {};
          case OnDemandCapacityReservationPreference::open:
            return "open";
          case OnDemandCapacityReservationPreference::none:
            return "none";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OnDemandCapacityReservationPreferenceMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
