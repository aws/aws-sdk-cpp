/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/OrganizationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace OrganizationStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int DISABLED_PERMANENTLY_HASH = HashingUtils::HashString("DISABLED_PERMANENTLY");


        OrganizationStatus GetOrganizationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return OrganizationStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return OrganizationStatus::DISABLED;
          }
          else if (hashCode == DISABLED_PERMANENTLY_HASH)
          {
            return OrganizationStatus::DISABLED_PERMANENTLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationStatus>(hashCode);
          }

          return OrganizationStatus::NOT_SET;
        }

        Aws::String GetNameForOrganizationStatus(OrganizationStatus enumValue)
        {
          switch(enumValue)
          {
          case OrganizationStatus::NOT_SET:
            return {};
          case OrganizationStatus::ENABLED:
            return "ENABLED";
          case OrganizationStatus::DISABLED:
            return "DISABLED";
          case OrganizationStatus::DISABLED_PERMANENTLY:
            return "DISABLED_PERMANENTLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrganizationStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
