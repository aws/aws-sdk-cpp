/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/SlaMet.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace SlaMetMapper
      {

        static constexpr uint32_t yes_HASH = ConstExprHashingUtils::HashString("yes");
        static constexpr uint32_t no_HASH = ConstExprHashingUtils::HashString("no");
        static constexpr uint32_t n_a_HASH = ConstExprHashingUtils::HashString("n/a");


        SlaMet GetSlaMetForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == yes_HASH)
          {
            return SlaMet::yes;
          }
          else if (hashCode == no_HASH)
          {
            return SlaMet::no;
          }
          else if (hashCode == n_a_HASH)
          {
            return SlaMet::n_a;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlaMet>(hashCode);
          }

          return SlaMet::NOT_SET;
        }

        Aws::String GetNameForSlaMet(SlaMet enumValue)
        {
          switch(enumValue)
          {
          case SlaMet::NOT_SET:
            return {};
          case SlaMet::yes:
            return "yes";
          case SlaMet::no:
            return "no";
          case SlaMet::n_a:
            return "n/a";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlaMetMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
