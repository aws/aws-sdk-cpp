/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/FederationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace FederationStatusMapper
      {

        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        FederationStatus GetFederationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLING_HASH)
          {
            return FederationStatus::ENABLING;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return FederationStatus::ENABLED;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return FederationStatus::DISABLING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return FederationStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FederationStatus>(hashCode);
          }

          return FederationStatus::NOT_SET;
        }

        Aws::String GetNameForFederationStatus(FederationStatus enumValue)
        {
          switch(enumValue)
          {
          case FederationStatus::NOT_SET:
            return {};
          case FederationStatus::ENABLING:
            return "ENABLING";
          case FederationStatus::ENABLED:
            return "ENABLED";
          case FederationStatus::DISABLING:
            return "DISABLING";
          case FederationStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FederationStatusMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
