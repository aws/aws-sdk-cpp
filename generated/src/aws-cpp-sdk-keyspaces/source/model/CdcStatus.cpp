/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/CdcStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Keyspaces
  {
    namespace Model
    {
      namespace CdcStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");


        CdcStatus GetCdcStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return CdcStatus::ENABLED;
          }
          else if (hashCode == ENABLING_HASH)
          {
            return CdcStatus::ENABLING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CdcStatus::DISABLED;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return CdcStatus::DISABLING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CdcStatus>(hashCode);
          }

          return CdcStatus::NOT_SET;
        }

        Aws::String GetNameForCdcStatus(CdcStatus enumValue)
        {
          switch(enumValue)
          {
          case CdcStatus::NOT_SET:
            return {};
          case CdcStatus::ENABLED:
            return "ENABLED";
          case CdcStatus::ENABLING:
            return "ENABLING";
          case CdcStatus::DISABLED:
            return "DISABLED";
          case CdcStatus::DISABLING:
            return "DISABLING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CdcStatusMapper
    } // namespace Model
  } // namespace Keyspaces
} // namespace Aws
