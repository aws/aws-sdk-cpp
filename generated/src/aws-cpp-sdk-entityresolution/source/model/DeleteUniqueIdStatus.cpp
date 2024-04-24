/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/DeleteUniqueIdStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EntityResolution
  {
    namespace Model
    {
      namespace DeleteUniqueIdStatusMapper
      {

        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");


        DeleteUniqueIdStatus GetDeleteUniqueIdStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETED_HASH)
          {
            return DeleteUniqueIdStatus::COMPLETED;
          }
          else if (hashCode == ACCEPTED_HASH)
          {
            return DeleteUniqueIdStatus::ACCEPTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeleteUniqueIdStatus>(hashCode);
          }

          return DeleteUniqueIdStatus::NOT_SET;
        }

        Aws::String GetNameForDeleteUniqueIdStatus(DeleteUniqueIdStatus enumValue)
        {
          switch(enumValue)
          {
          case DeleteUniqueIdStatus::NOT_SET:
            return {};
          case DeleteUniqueIdStatus::COMPLETED:
            return "COMPLETED";
          case DeleteUniqueIdStatus::ACCEPTED:
            return "ACCEPTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeleteUniqueIdStatusMapper
    } // namespace Model
  } // namespace EntityResolution
} // namespace Aws
