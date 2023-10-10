/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ActionEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace ActionEnumMapper
      {

        static const int CREATE_HASH = HashingUtils::HashString("CREATE");
        static const int UPDATE_METADATA_HASH = HashingUtils::HashString("UPDATE_METADATA");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int UNDER_REVIEW_HASH = HashingUtils::HashString("UNDER_REVIEW");
        static const int REVIEWED_HASH = HashingUtils::HashString("REVIEWED");
        static const int IMPORT_EVIDENCE_HASH = HashingUtils::HashString("IMPORT_EVIDENCE");


        ActionEnum GetActionEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_HASH)
          {
            return ActionEnum::CREATE;
          }
          else if (hashCode == UPDATE_METADATA_HASH)
          {
            return ActionEnum::UPDATE_METADATA;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ActionEnum::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return ActionEnum::INACTIVE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return ActionEnum::DELETE_;
          }
          else if (hashCode == UNDER_REVIEW_HASH)
          {
            return ActionEnum::UNDER_REVIEW;
          }
          else if (hashCode == REVIEWED_HASH)
          {
            return ActionEnum::REVIEWED;
          }
          else if (hashCode == IMPORT_EVIDENCE_HASH)
          {
            return ActionEnum::IMPORT_EVIDENCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionEnum>(hashCode);
          }

          return ActionEnum::NOT_SET;
        }

        Aws::String GetNameForActionEnum(ActionEnum enumValue)
        {
          switch(enumValue)
          {
          case ActionEnum::NOT_SET:
            return {};
          case ActionEnum::CREATE:
            return "CREATE";
          case ActionEnum::UPDATE_METADATA:
            return "UPDATE_METADATA";
          case ActionEnum::ACTIVE:
            return "ACTIVE";
          case ActionEnum::INACTIVE:
            return "INACTIVE";
          case ActionEnum::DELETE_:
            return "DELETE";
          case ActionEnum::UNDER_REVIEW:
            return "UNDER_REVIEW";
          case ActionEnum::REVIEWED:
            return "REVIEWED";
          case ActionEnum::IMPORT_EVIDENCE:
            return "IMPORT_EVIDENCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionEnumMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
