/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/JQStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace JQStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t VALID_HASH = ConstExprHashingUtils::HashString("VALID");
        static constexpr uint32_t INVALID_HASH = ConstExprHashingUtils::HashString("INVALID");


        JQStatus GetJQStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return JQStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return JQStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return JQStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return JQStatus::DELETED;
          }
          else if (hashCode == VALID_HASH)
          {
            return JQStatus::VALID;
          }
          else if (hashCode == INVALID_HASH)
          {
            return JQStatus::INVALID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JQStatus>(hashCode);
          }

          return JQStatus::NOT_SET;
        }

        Aws::String GetNameForJQStatus(JQStatus enumValue)
        {
          switch(enumValue)
          {
          case JQStatus::NOT_SET:
            return {};
          case JQStatus::CREATING:
            return "CREATING";
          case JQStatus::UPDATING:
            return "UPDATING";
          case JQStatus::DELETING:
            return "DELETING";
          case JQStatus::DELETED:
            return "DELETED";
          case JQStatus::VALID:
            return "VALID";
          case JQStatus::INVALID:
            return "INVALID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JQStatusMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
