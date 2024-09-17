/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/LicenseEndpointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace LicenseEndpointStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int NOT_READY_HASH = HashingUtils::HashString("NOT_READY");


        LicenseEndpointStatus GetLicenseEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return LicenseEndpointStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return LicenseEndpointStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == READY_HASH)
          {
            return LicenseEndpointStatus::READY;
          }
          else if (hashCode == NOT_READY_HASH)
          {
            return LicenseEndpointStatus::NOT_READY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseEndpointStatus>(hashCode);
          }

          return LicenseEndpointStatus::NOT_SET;
        }

        Aws::String GetNameForLicenseEndpointStatus(LicenseEndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case LicenseEndpointStatus::NOT_SET:
            return {};
          case LicenseEndpointStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case LicenseEndpointStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case LicenseEndpointStatus::READY:
            return "READY";
          case LicenseEndpointStatus::NOT_READY:
            return "NOT_READY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseEndpointStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
