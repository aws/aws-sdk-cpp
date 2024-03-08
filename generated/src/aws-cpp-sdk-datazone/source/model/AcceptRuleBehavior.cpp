/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AcceptRuleBehavior.h>
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
      namespace AcceptRuleBehaviorMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AcceptRuleBehavior GetAcceptRuleBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return AcceptRuleBehavior::ALL;
          }
          else if (hashCode == NONE_HASH)
          {
            return AcceptRuleBehavior::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceptRuleBehavior>(hashCode);
          }

          return AcceptRuleBehavior::NOT_SET;
        }

        Aws::String GetNameForAcceptRuleBehavior(AcceptRuleBehavior enumValue)
        {
          switch(enumValue)
          {
          case AcceptRuleBehavior::NOT_SET:
            return {};
          case AcceptRuleBehavior::ALL:
            return "ALL";
          case AcceptRuleBehavior::NONE:
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

      } // namespace AcceptRuleBehaviorMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
