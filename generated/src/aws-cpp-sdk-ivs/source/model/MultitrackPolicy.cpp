/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/MultitrackPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IVS
  {
    namespace Model
    {
      namespace MultitrackPolicyMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int REQUIRE_HASH = HashingUtils::HashString("REQUIRE");


        MultitrackPolicy GetMultitrackPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return MultitrackPolicy::ALLOW;
          }
          else if (hashCode == REQUIRE_HASH)
          {
            return MultitrackPolicy::REQUIRE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MultitrackPolicy>(hashCode);
          }

          return MultitrackPolicy::NOT_SET;
        }

        Aws::String GetNameForMultitrackPolicy(MultitrackPolicy enumValue)
        {
          switch(enumValue)
          {
          case MultitrackPolicy::NOT_SET:
            return {};
          case MultitrackPolicy::ALLOW:
            return "ALLOW";
          case MultitrackPolicy::REQUIRE:
            return "REQUIRE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MultitrackPolicyMapper
    } // namespace Model
  } // namespace IVS
} // namespace Aws
