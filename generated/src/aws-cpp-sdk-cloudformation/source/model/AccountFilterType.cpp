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

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int INTERSECTION_HASH = HashingUtils::HashString("INTERSECTION");
        static const int DIFFERENCE_HASH = HashingUtils::HashString("DIFFERENCE");
        static const int UNION_HASH = HashingUtils::HashString("UNION");


        AccountFilterType GetAccountFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
