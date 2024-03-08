/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/GroupKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace GroupKeyMapper
      {

        static const int SCAN_STATUS_CODE_HASH = HashingUtils::HashString("SCAN_STATUS_CODE");
        static const int SCAN_STATUS_REASON_HASH = HashingUtils::HashString("SCAN_STATUS_REASON");
        static const int ACCOUNT_ID_HASH = HashingUtils::HashString("ACCOUNT_ID");
        static const int RESOURCE_TYPE_HASH = HashingUtils::HashString("RESOURCE_TYPE");
        static const int ECR_REPOSITORY_NAME_HASH = HashingUtils::HashString("ECR_REPOSITORY_NAME");


        GroupKey GetGroupKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCAN_STATUS_CODE_HASH)
          {
            return GroupKey::SCAN_STATUS_CODE;
          }
          else if (hashCode == SCAN_STATUS_REASON_HASH)
          {
            return GroupKey::SCAN_STATUS_REASON;
          }
          else if (hashCode == ACCOUNT_ID_HASH)
          {
            return GroupKey::ACCOUNT_ID;
          }
          else if (hashCode == RESOURCE_TYPE_HASH)
          {
            return GroupKey::RESOURCE_TYPE;
          }
          else if (hashCode == ECR_REPOSITORY_NAME_HASH)
          {
            return GroupKey::ECR_REPOSITORY_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupKey>(hashCode);
          }

          return GroupKey::NOT_SET;
        }

        Aws::String GetNameForGroupKey(GroupKey enumValue)
        {
          switch(enumValue)
          {
          case GroupKey::NOT_SET:
            return {};
          case GroupKey::SCAN_STATUS_CODE:
            return "SCAN_STATUS_CODE";
          case GroupKey::SCAN_STATUS_REASON:
            return "SCAN_STATUS_REASON";
          case GroupKey::ACCOUNT_ID:
            return "ACCOUNT_ID";
          case GroupKey::RESOURCE_TYPE:
            return "RESOURCE_TYPE";
          case GroupKey::ECR_REPOSITORY_NAME:
            return "ECR_REPOSITORY_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupKeyMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
