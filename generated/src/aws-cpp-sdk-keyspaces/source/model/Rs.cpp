/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/Rs.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Keyspaces
  {
    namespace Model
    {
      namespace RsMapper
      {

        static constexpr uint32_t SINGLE_REGION_HASH = ConstExprHashingUtils::HashString("SINGLE_REGION");
        static constexpr uint32_t MULTI_REGION_HASH = ConstExprHashingUtils::HashString("MULTI_REGION");


        Rs GetRsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_REGION_HASH)
          {
            return Rs::SINGLE_REGION;
          }
          else if (hashCode == MULTI_REGION_HASH)
          {
            return Rs::MULTI_REGION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Rs>(hashCode);
          }

          return Rs::NOT_SET;
        }

        Aws::String GetNameForRs(Rs enumValue)
        {
          switch(enumValue)
          {
          case Rs::NOT_SET:
            return {};
          case Rs::SINGLE_REGION:
            return "SINGLE_REGION";
          case Rs::MULTI_REGION:
            return "MULTI_REGION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RsMapper
    } // namespace Model
  } // namespace Keyspaces
} // namespace Aws
