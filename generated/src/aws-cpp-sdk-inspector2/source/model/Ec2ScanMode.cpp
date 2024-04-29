/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Ec2ScanMode.h>
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
      namespace Ec2ScanModeMapper
      {

        static const int EC2_SSM_AGENT_BASED_HASH = HashingUtils::HashString("EC2_SSM_AGENT_BASED");
        static const int EC2_HYBRID_HASH = HashingUtils::HashString("EC2_HYBRID");


        Ec2ScanMode GetEc2ScanModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_SSM_AGENT_BASED_HASH)
          {
            return Ec2ScanMode::EC2_SSM_AGENT_BASED;
          }
          else if (hashCode == EC2_HYBRID_HASH)
          {
            return Ec2ScanMode::EC2_HYBRID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ec2ScanMode>(hashCode);
          }

          return Ec2ScanMode::NOT_SET;
        }

        Aws::String GetNameForEc2ScanMode(Ec2ScanMode enumValue)
        {
          switch(enumValue)
          {
          case Ec2ScanMode::NOT_SET:
            return {};
          case Ec2ScanMode::EC2_SSM_AGENT_BASED:
            return "EC2_SSM_AGENT_BASED";
          case Ec2ScanMode::EC2_HYBRID:
            return "EC2_HYBRID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ec2ScanModeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
