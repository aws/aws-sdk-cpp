/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/AccountFilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace AccountFilterTypeMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t INTERSECTION_HASH = ConstExprHashingUtils::HashString("INTERSECTION");
        static constexpr uint32_t DIFFERENCE_HASH = ConstExprHashingUtils::HashString("DIFFERENCE");
        static constexpr uint32_t UNION_HASH = ConstExprHashingUtils::HashString("UNION");


        AccountFilterType GetAccountFilterTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return AccountFilterType::NONE;
          }
          else if (hashCode == INTERSECTION_HASH)
          {
            return AccountFilterType::INTERSECTION;
          }
          else if (hashCode == DIFFERENCE_HASH)
          {
            return AccountFilterType::DIFFERENCE;
          }
          else if (hashCode == UNION_HASH)
          {
            return AccountFilterType::UNION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountFilterType>(hashCode);
          }

          return AccountFilterType::NOT_SET;
        }

        Aws::String GetNameForAccountFilterType(AccountFilterType enumValue)
        {
          switch(enumValue)
          {
          case AccountFilterType::NOT_SET:
            return {};
          case AccountFilterType::NONE:
            return "NONE";
          case AccountFilterType::INTERSECTION:
            return "INTERSECTION";
          case AccountFilterType::DIFFERENCE:
            return "DIFFERENCE";
          case AccountFilterType::UNION:
            return "UNION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountFilterTypeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
