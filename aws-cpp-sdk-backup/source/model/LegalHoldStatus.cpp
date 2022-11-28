/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/LegalHoldStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace LegalHoldStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CANCELING_HASH = HashingUtils::HashString("CANCELING");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");


        LegalHoldStatus GetLegalHoldStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return LegalHoldStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return LegalHoldStatus::ACTIVE;
          }
          else if (hashCode == CANCELING_HASH)
          {
            return LegalHoldStatus::CANCELING;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return LegalHoldStatus::CANCELED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LegalHoldStatus>(hashCode);
          }

          return LegalHoldStatus::NOT_SET;
        }

        Aws::String GetNameForLegalHoldStatus(LegalHoldStatus enumValue)
        {
          switch(enumValue)
          {
          case LegalHoldStatus::CREATING:
            return "CREATING";
          case LegalHoldStatus::ACTIVE:
            return "ACTIVE";
          case LegalHoldStatus::CANCELING:
            return "CANCELING";
          case LegalHoldStatus::CANCELED:
            return "CANCELED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LegalHoldStatusMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
