/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/CEStatus.h>
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
      namespace CEStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t VALID_HASH = ConstExprHashingUtils::HashString("VALID");
        static constexpr uint32_t INVALID_HASH = ConstExprHashingUtils::HashString("INVALID");


        CEStatus GetCEStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return CEStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return CEStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return CEStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return CEStatus::DELETED;
          }
          else if (hashCode == VALID_HASH)
          {
            return CEStatus::VALID;
          }
          else if (hashCode == INVALID_HASH)
          {
            return CEStatus::INVALID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CEStatus>(hashCode);
          }

          return CEStatus::NOT_SET;
        }

        Aws::String GetNameForCEStatus(CEStatus enumValue)
        {
          switch(enumValue)
          {
          case CEStatus::NOT_SET:
            return {};
          case CEStatus::CREATING:
            return "CREATING";
          case CEStatus::UPDATING:
            return "UPDATING";
          case CEStatus::DELETING:
            return "DELETING";
          case CEStatus::DELETED:
            return "DELETED";
          case CEStatus::VALID:
            return "VALID";
          case CEStatus::INVALID:
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

      } // namespace CEStatusMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
