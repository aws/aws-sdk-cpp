/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxDataviewStatus.h>
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
      namespace KxDataviewStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        KxDataviewStatus GetKxDataviewStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return KxDataviewStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return KxDataviewStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return KxDataviewStatus::UPDATING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return KxDataviewStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return KxDataviewStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KxDataviewStatus>(hashCode);
          }

          return KxDataviewStatus::NOT_SET;
        }

        Aws::String GetNameForKxDataviewStatus(KxDataviewStatus enumValue)
        {
          switch(enumValue)
          {
          case KxDataviewStatus::NOT_SET:
            return {};
          case KxDataviewStatus::CREATING:
            return "CREATING";
          case KxDataviewStatus::ACTIVE:
            return "ACTIVE";
          case KxDataviewStatus::UPDATING:
            return "UPDATING";
          case KxDataviewStatus::FAILED:
            return "FAILED";
          case KxDataviewStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KxDataviewStatusMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
