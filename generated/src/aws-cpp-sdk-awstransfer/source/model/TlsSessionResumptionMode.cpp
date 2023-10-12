/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/TlsSessionResumptionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace TlsSessionResumptionModeMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t ENFORCED_HASH = ConstExprHashingUtils::HashString("ENFORCED");


        TlsSessionResumptionMode GetTlsSessionResumptionModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return TlsSessionResumptionMode::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return TlsSessionResumptionMode::ENABLED;
          }
          else if (hashCode == ENFORCED_HASH)
          {
            return TlsSessionResumptionMode::ENFORCED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TlsSessionResumptionMode>(hashCode);
          }

          return TlsSessionResumptionMode::NOT_SET;
        }

        Aws::String GetNameForTlsSessionResumptionMode(TlsSessionResumptionMode enumValue)
        {
          switch(enumValue)
          {
          case TlsSessionResumptionMode::NOT_SET:
            return {};
          case TlsSessionResumptionMode::DISABLED:
            return "DISABLED";
          case TlsSessionResumptionMode::ENABLED:
            return "ENABLED";
          case TlsSessionResumptionMode::ENFORCED:
            return "ENFORCED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TlsSessionResumptionModeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
