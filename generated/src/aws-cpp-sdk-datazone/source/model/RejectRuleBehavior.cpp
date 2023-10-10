/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RejectRuleBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace RejectRuleBehaviorMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        RejectRuleBehavior GetRejectRuleBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return RejectRuleBehavior::ALL;
          }
          else if (hashCode == NONE_HASH)
          {
            return RejectRuleBehavior::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RejectRuleBehavior>(hashCode);
          }

          return RejectRuleBehavior::NOT_SET;
        }

        Aws::String GetNameForRejectRuleBehavior(RejectRuleBehavior enumValue)
        {
          switch(enumValue)
          {
          case RejectRuleBehavior::NOT_SET:
            return {};
          case RejectRuleBehavior::ALL:
            return "ALL";
          case RejectRuleBehavior::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RejectRuleBehaviorMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
