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

        static constexpr uint32_t SCAN_STATUS_CODE_HASH = ConstExprHashingUtils::HashString("SCAN_STATUS_CODE");
        static constexpr uint32_t SCAN_STATUS_REASON_HASH = ConstExprHashingUtils::HashString("SCAN_STATUS_REASON");
        static constexpr uint32_t ACCOUNT_ID_HASH = ConstExprHashingUtils::HashString("ACCOUNT_ID");
        static constexpr uint32_t RESOURCE_TYPE_HASH = ConstExprHashingUtils::HashString("RESOURCE_TYPE");
        static constexpr uint32_t ECR_REPOSITORY_NAME_HASH = ConstExprHashingUtils::HashString("ECR_REPOSITORY_NAME");


        GroupKey GetGroupKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
