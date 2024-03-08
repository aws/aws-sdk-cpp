/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/LicenseDeletionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace LicenseDeletionStatusMapper
      {

        static const int PENDING_DELETE_HASH = HashingUtils::HashString("PENDING_DELETE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        LicenseDeletionStatus GetLicenseDeletionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_DELETE_HASH)
          {
            return LicenseDeletionStatus::PENDING_DELETE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return LicenseDeletionStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseDeletionStatus>(hashCode);
          }

          return LicenseDeletionStatus::NOT_SET;
        }

        Aws::String GetNameForLicenseDeletionStatus(LicenseDeletionStatus enumValue)
        {
          switch(enumValue)
          {
          case LicenseDeletionStatus::NOT_SET:
            return {};
          case LicenseDeletionStatus::PENDING_DELETE:
            return "PENDING_DELETE";
          case LicenseDeletionStatus::DELETED:
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

      } // namespace LicenseDeletionStatusMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
