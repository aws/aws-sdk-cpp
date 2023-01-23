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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int VALID_HASH = HashingUtils::HashString("VALID");
        static const int INVALID_HASH = HashingUtils::HashString("INVALID");


        CEStatus GetCEStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
