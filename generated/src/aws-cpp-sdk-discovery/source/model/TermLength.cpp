/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/TermLength.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace TermLengthMapper
      {

        static constexpr uint32_t ONE_YEAR_HASH = ConstExprHashingUtils::HashString("ONE_YEAR");
        static constexpr uint32_t THREE_YEAR_HASH = ConstExprHashingUtils::HashString("THREE_YEAR");


        TermLength GetTermLengthForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONE_YEAR_HASH)
          {
            return TermLength::ONE_YEAR;
          }
          else if (hashCode == THREE_YEAR_HASH)
          {
            return TermLength::THREE_YEAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TermLength>(hashCode);
          }

          return TermLength::NOT_SET;
        }

        Aws::String GetNameForTermLength(TermLength enumValue)
        {
          switch(enumValue)
          {
          case TermLength::NOT_SET:
            return {};
          case TermLength::ONE_YEAR:
            return "ONE_YEAR";
          case TermLength::THREE_YEAR:
            return "THREE_YEAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TermLengthMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
