/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/PrincipalMappingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace PrincipalMappingStatusMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        PrincipalMappingStatus GetPrincipalMappingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return PrincipalMappingStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return PrincipalMappingStatus::SUCCEEDED;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return PrincipalMappingStatus::PROCESSING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return PrincipalMappingStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return PrincipalMappingStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrincipalMappingStatus>(hashCode);
          }

          return PrincipalMappingStatus::NOT_SET;
        }

        Aws::String GetNameForPrincipalMappingStatus(PrincipalMappingStatus enumValue)
        {
          switch(enumValue)
          {
          case PrincipalMappingStatus::NOT_SET:
            return {};
          case PrincipalMappingStatus::FAILED:
            return "FAILED";
          case PrincipalMappingStatus::SUCCEEDED:
            return "SUCCEEDED";
          case PrincipalMappingStatus::PROCESSING:
            return "PROCESSING";
          case PrincipalMappingStatus::DELETING:
            return "DELETING";
          case PrincipalMappingStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrincipalMappingStatusMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
