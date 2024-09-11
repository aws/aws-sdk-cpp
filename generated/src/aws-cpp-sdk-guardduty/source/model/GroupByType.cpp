/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/GroupByType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace GroupByTypeMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int FINDING_TYPE_HASH = HashingUtils::HashString("FINDING_TYPE");
        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
        static const int SEVERITY_HASH = HashingUtils::HashString("SEVERITY");


        GroupByType GetGroupByTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return GroupByType::ACCOUNT;
          }
          else if (hashCode == DATE_HASH)
          {
            return GroupByType::DATE;
          }
          else if (hashCode == FINDING_TYPE_HASH)
          {
            return GroupByType::FINDING_TYPE;
          }
          else if (hashCode == RESOURCE_HASH)
          {
            return GroupByType::RESOURCE;
          }
          else if (hashCode == SEVERITY_HASH)
          {
            return GroupByType::SEVERITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupByType>(hashCode);
          }

          return GroupByType::NOT_SET;
        }

        Aws::String GetNameForGroupByType(GroupByType enumValue)
        {
          switch(enumValue)
          {
          case GroupByType::NOT_SET:
            return {};
          case GroupByType::ACCOUNT:
            return "ACCOUNT";
          case GroupByType::DATE:
            return "DATE";
          case GroupByType::FINDING_TYPE:
            return "FINDING_TYPE";
          case GroupByType::RESOURCE:
            return "RESOURCE";
          case GroupByType::SEVERITY:
            return "SEVERITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupByTypeMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
