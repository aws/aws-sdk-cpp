/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/TgwStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace TgwStatusMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int UPDATE_REQUESTED_HASH = HashingUtils::HashString("UPDATE_REQUESTED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int FAILED_UPDATE_HASH = HashingUtils::HashString("FAILED_UPDATE");
        static const int SUCCESSFULLY_UPDATED_HASH = HashingUtils::HashString("SUCCESSFULLY_UPDATED");


        TgwStatus GetTgwStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return TgwStatus::NONE;
          }
          else if (hashCode == UPDATE_REQUESTED_HASH)
          {
            return TgwStatus::UPDATE_REQUESTED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return TgwStatus::UPDATING;
          }
          else if (hashCode == FAILED_UPDATE_HASH)
          {
            return TgwStatus::FAILED_UPDATE;
          }
          else if (hashCode == SUCCESSFULLY_UPDATED_HASH)
          {
            return TgwStatus::SUCCESSFULLY_UPDATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TgwStatus>(hashCode);
          }

          return TgwStatus::NOT_SET;
        }

        Aws::String GetNameForTgwStatus(TgwStatus enumValue)
        {
          switch(enumValue)
          {
          case TgwStatus::NOT_SET:
            return {};
          case TgwStatus::NONE:
            return "NONE";
          case TgwStatus::UPDATE_REQUESTED:
            return "UPDATE_REQUESTED";
          case TgwStatus::UPDATING:
            return "UPDATING";
          case TgwStatus::FAILED_UPDATE:
            return "FAILED_UPDATE";
          case TgwStatus::SUCCESSFULLY_UPDATED:
            return "SUCCESSFULLY_UPDATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TgwStatusMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
