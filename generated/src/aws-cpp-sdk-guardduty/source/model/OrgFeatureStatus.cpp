/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/OrgFeatureStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace OrgFeatureStatusMapper
      {

        static const int NEW__HASH = HashingUtils::HashString("NEW");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        OrgFeatureStatus GetOrgFeatureStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW__HASH)
          {
            return OrgFeatureStatus::NEW_;
          }
          else if (hashCode == NONE_HASH)
          {
            return OrgFeatureStatus::NONE;
          }
          else if (hashCode == ALL_HASH)
          {
            return OrgFeatureStatus::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrgFeatureStatus>(hashCode);
          }

          return OrgFeatureStatus::NOT_SET;
        }

        Aws::String GetNameForOrgFeatureStatus(OrgFeatureStatus enumValue)
        {
          switch(enumValue)
          {
          case OrgFeatureStatus::NOT_SET:
            return {};
          case OrgFeatureStatus::NEW_:
            return "NEW";
          case OrgFeatureStatus::NONE:
            return "NONE";
          case OrgFeatureStatus::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrgFeatureStatusMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
