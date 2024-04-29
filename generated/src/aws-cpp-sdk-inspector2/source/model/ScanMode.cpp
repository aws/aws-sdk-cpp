/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ScanMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace ScanModeMapper
      {

        static const int EC2_SSM_AGENT_BASED_HASH = HashingUtils::HashString("EC2_SSM_AGENT_BASED");
        static const int EC2_AGENTLESS_HASH = HashingUtils::HashString("EC2_AGENTLESS");


        ScanMode GetScanModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_SSM_AGENT_BASED_HASH)
          {
            return ScanMode::EC2_SSM_AGENT_BASED;
          }
          else if (hashCode == EC2_AGENTLESS_HASH)
          {
            return ScanMode::EC2_AGENTLESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanMode>(hashCode);
          }

          return ScanMode::NOT_SET;
        }

        Aws::String GetNameForScanMode(ScanMode enumValue)
        {
          switch(enumValue)
          {
          case ScanMode::NOT_SET:
            return {};
          case ScanMode::EC2_SSM_AGENT_BASED:
            return "EC2_SSM_AGENT_BASED";
          case ScanMode::EC2_AGENTLESS:
            return "EC2_AGENTLESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanModeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
