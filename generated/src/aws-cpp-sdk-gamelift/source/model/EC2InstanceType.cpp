/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace EC2InstanceTypeMapper
      {

        static const int t2_micro_HASH = HashingUtils::HashString("t2.micro");
        static const int t2_small_HASH = HashingUtils::HashString("t2.small");
        static const int t2_medium_HASH = HashingUtils::HashString("t2.medium");
        static const int t2_large_HASH = HashingUtils::HashString("t2.large");
        static const int c3_large_HASH = HashingUtils::HashString("c3.large");
        static const int c3_xlarge_HASH = HashingUtils::HashString("c3.xlarge");
        static const int c3_2xlarge_HASH = HashingUtils::HashString("c3.2xlarge");
        static const int c3_4xlarge_HASH = HashingUtils::HashString("c3.4xlarge");
        static const int c3_8xlarge_HASH = HashingUtils::HashString("c3.8xlarge");
        static const int c4_large_HASH = HashingUtils::HashString("c4.large");
        static const int c4_xlarge_HASH = HashingUtils::HashString("c4.xlarge");
        static const int c4_2xlarge_HASH = HashingUtils::HashString("c4.2xlarge");
        static const int c4_4xlarge_HASH = HashingUtils::HashString("c4.4xlarge");
        static const int c4_8xlarge_HASH = HashingUtils::HashString("c4.8xlarge");
        static const int c5_large_HASH = HashingUtils::HashString("c5.large");
        static const int c5_xlarge_HASH = HashingUtils::HashString("c5.xlarge");
        static const int c5_2xlarge_HASH = HashingUtils::HashString("c5.2xlarge");
        static const int c5_4xlarge_HASH = HashingUtils::HashString("c5.4xlarge");
        static const int c5_9xlarge_HASH = HashingUtils::HashString("c5.9xlarge");
        static const int c5_12xlarge_HASH = HashingUtils::HashString("c5.12xlarge");
        static const int c5_18xlarge_HASH = HashingUtils::HashString("c5.18xlarge");
        static const int c5_24xlarge_HASH = HashingUtils::HashString("c5.24xlarge");
        static const int c5a_large_HASH = HashingUtils::HashString("c5a.large");
        static const int c5a_xlarge_HASH = HashingUtils::HashString("c5a.xlarge");
        static const int c5a_2xlarge_HASH = HashingUtils::HashString("c5a.2xlarge");
        static const int c5a_4xlarge_HASH = HashingUtils::HashString("c5a.4xlarge");
        static const int c5a_8xlarge_HASH = HashingUtils::HashString("c5a.8xlarge");
        static const int c5a_12xlarge_HASH = HashingUtils::HashString("c5a.12xlarge");
        static const int c5a_16xlarge_HASH = HashingUtils::HashString("c5a.16xlarge");
        static const int c5a_24xlarge_HASH = HashingUtils::HashString("c5a.24xlarge");
        static const int r3_large_HASH = HashingUtils::HashString("r3.large");
        static const int r3_xlarge_HASH = HashingUtils::HashString("r3.xlarge");
        static const int r3_2xlarge_HASH = HashingUtils::HashString("r3.2xlarge");
        static const int r3_4xlarge_HASH = HashingUtils::HashString("r3.4xlarge");
        static const int r3_8xlarge_HASH = HashingUtils::HashString("r3.8xlarge");
        static const int r4_large_HASH = HashingUtils::HashString("r4.large");
        static const int r4_xlarge_HASH = HashingUtils::HashString("r4.xlarge");
        static const int r4_2xlarge_HASH = HashingUtils::HashString("r4.2xlarge");
        static const int r4_4xlarge_HASH = HashingUtils::HashString("r4.4xlarge");
        static const int r4_8xlarge_HASH = HashingUtils::HashString("r4.8xlarge");
        static const int r4_16xlarge_HASH = HashingUtils::HashString("r4.16xlarge");
        static const int r5_large_HASH = HashingUtils::HashString("r5.large");
        static const int r5_xlarge_HASH = HashingUtils::HashString("r5.xlarge");
        static const int r5_2xlarge_HASH = HashingUtils::HashString("r5.2xlarge");
        static const int r5_4xlarge_HASH = HashingUtils::HashString("r5.4xlarge");
        static const int r5_8xlarge_HASH = HashingUtils::HashString("r5.8xlarge");
        static const int r5_12xlarge_HASH = HashingUtils::HashString("r5.12xlarge");
        static const int r5_16xlarge_HASH = HashingUtils::HashString("r5.16xlarge");
        static const int r5_24xlarge_HASH = HashingUtils::HashString("r5.24xlarge");
        static const int r5a_large_HASH = HashingUtils::HashString("r5a.large");
        static const int r5a_xlarge_HASH = HashingUtils::HashString("r5a.xlarge");
        static const int r5a_2xlarge_HASH = HashingUtils::HashString("r5a.2xlarge");
        static const int r5a_4xlarge_HASH = HashingUtils::HashString("r5a.4xlarge");
        static const int r5a_8xlarge_HASH = HashingUtils::HashString("r5a.8xlarge");
        static const int r5a_12xlarge_HASH = HashingUtils::HashString("r5a.12xlarge");
        static const int r5a_16xlarge_HASH = HashingUtils::HashString("r5a.16xlarge");
        static const int r5a_24xlarge_HASH = HashingUtils::HashString("r5a.24xlarge");
        static const int m3_medium_HASH = HashingUtils::HashString("m3.medium");
        static const int m3_large_HASH = HashingUtils::HashString("m3.large");
        static const int m3_xlarge_HASH = HashingUtils::HashString("m3.xlarge");
        static const int m3_2xlarge_HASH = HashingUtils::HashString("m3.2xlarge");
        static const int m4_large_HASH = HashingUtils::HashString("m4.large");
        static const int m4_xlarge_HASH = HashingUtils::HashString("m4.xlarge");
        static const int m4_2xlarge_HASH = HashingUtils::HashString("m4.2xlarge");
        static const int m4_4xlarge_HASH = HashingUtils::HashString("m4.4xlarge");
        static const int m4_10xlarge_HASH = HashingUtils::HashString("m4.10xlarge");
        static const int m5_large_HASH = HashingUtils::HashString("m5.large");
        static const int m5_xlarge_HASH = HashingUtils::HashString("m5.xlarge");
        static const int m5_2xlarge_HASH = HashingUtils::HashString("m5.2xlarge");
        static const int m5_4xlarge_HASH = HashingUtils::HashString("m5.4xlarge");
        static const int m5_8xlarge_HASH = HashingUtils::HashString("m5.8xlarge");
        static const int m5_12xlarge_HASH = HashingUtils::HashString("m5.12xlarge");
        static const int m5_16xlarge_HASH = HashingUtils::HashString("m5.16xlarge");
        static const int m5_24xlarge_HASH = HashingUtils::HashString("m5.24xlarge");
        static const int m5a_large_HASH = HashingUtils::HashString("m5a.large");
        static const int m5a_xlarge_HASH = HashingUtils::HashString("m5a.xlarge");
        static const int m5a_2xlarge_HASH = HashingUtils::HashString("m5a.2xlarge");
        static const int m5a_4xlarge_HASH = HashingUtils::HashString("m5a.4xlarge");
        static const int m5a_8xlarge_HASH = HashingUtils::HashString("m5a.8xlarge");
        static const int m5a_12xlarge_HASH = HashingUtils::HashString("m5a.12xlarge");
        static const int m5a_16xlarge_HASH = HashingUtils::HashString("m5a.16xlarge");
        static const int m5a_24xlarge_HASH = HashingUtils::HashString("m5a.24xlarge");
        static const int c5d_large_HASH = HashingUtils::HashString("c5d.large");
        static const int c5d_xlarge_HASH = HashingUtils::HashString("c5d.xlarge");
        static const int c5d_2xlarge_HASH = HashingUtils::HashString("c5d.2xlarge");
        static const int c5d_4xlarge_HASH = HashingUtils::HashString("c5d.4xlarge");
        static const int c5d_9xlarge_HASH = HashingUtils::HashString("c5d.9xlarge");
        static const int c5d_12xlarge_HASH = HashingUtils::HashString("c5d.12xlarge");
        static const int c5d_18xlarge_HASH = HashingUtils::HashString("c5d.18xlarge");
        static const int c5d_24xlarge_HASH = HashingUtils::HashString("c5d.24xlarge");
        static const int c6a_large_HASH = HashingUtils::HashString("c6a.large");
        static const int c6a_xlarge_HASH = HashingUtils::HashString("c6a.xlarge");
        static const int c6a_2xlarge_HASH = HashingUtils::HashString("c6a.2xlarge");
        static const int c6a_4xlarge_HASH = HashingUtils::HashString("c6a.4xlarge");
        static const int c6a_8xlarge_HASH = HashingUtils::HashString("c6a.8xlarge");
        static const int c6a_12xlarge_HASH = HashingUtils::HashString("c6a.12xlarge");
        static const int c6a_16xlarge_HASH = HashingUtils::HashString("c6a.16xlarge");
        static const int c6a_24xlarge_HASH = HashingUtils::HashString("c6a.24xlarge");
        static const int c6i_large_HASH = HashingUtils::HashString("c6i.large");
        static const int c6i_xlarge_HASH = HashingUtils::HashString("c6i.xlarge");
        static const int c6i_2xlarge_HASH = HashingUtils::HashString("c6i.2xlarge");
        static const int c6i_4xlarge_HASH = HashingUtils::HashString("c6i.4xlarge");
        static const int c6i_8xlarge_HASH = HashingUtils::HashString("c6i.8xlarge");
        static const int c6i_12xlarge_HASH = HashingUtils::HashString("c6i.12xlarge");
        static const int c6i_16xlarge_HASH = HashingUtils::HashString("c6i.16xlarge");
        static const int c6i_24xlarge_HASH = HashingUtils::HashString("c6i.24xlarge");
        static const int r5d_large_HASH = HashingUtils::HashString("r5d.large");
        static const int r5d_xlarge_HASH = HashingUtils::HashString("r5d.xlarge");
        static const int r5d_2xlarge_HASH = HashingUtils::HashString("r5d.2xlarge");
        static const int r5d_4xlarge_HASH = HashingUtils::HashString("r5d.4xlarge");
        static const int r5d_8xlarge_HASH = HashingUtils::HashString("r5d.8xlarge");
        static const int r5d_12xlarge_HASH = HashingUtils::HashString("r5d.12xlarge");
        static const int r5d_16xlarge_HASH = HashingUtils::HashString("r5d.16xlarge");
        static const int r5d_24xlarge_HASH = HashingUtils::HashString("r5d.24xlarge");


        EC2InstanceType GetEC2InstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == t2_micro_HASH)
          {
            return EC2InstanceType::t2_micro;
          }
          else if (hashCode == t2_small_HASH)
          {
            return EC2InstanceType::t2_small;
          }
          else if (hashCode == t2_medium_HASH)
          {
            return EC2InstanceType::t2_medium;
          }
          else if (hashCode == t2_large_HASH)
          {
            return EC2InstanceType::t2_large;
          }
          else if (hashCode == c3_large_HASH)
          {
            return EC2InstanceType::c3_large;
          }
          else if (hashCode == c3_xlarge_HASH)
          {
            return EC2InstanceType::c3_xlarge;
          }
          else if (hashCode == c3_2xlarge_HASH)
          {
            return EC2InstanceType::c3_2xlarge;
          }
          else if (hashCode == c3_4xlarge_HASH)
          {
            return EC2InstanceType::c3_4xlarge;
          }
          else if (hashCode == c3_8xlarge_HASH)
          {
            return EC2InstanceType::c3_8xlarge;
          }
          else if (hashCode == c4_large_HASH)
          {
            return EC2InstanceType::c4_large;
          }
          else if (hashCode == c4_xlarge_HASH)
          {
            return EC2InstanceType::c4_xlarge;
          }
          else if (hashCode == c4_2xlarge_HASH)
          {
            return EC2InstanceType::c4_2xlarge;
          }
          else if (hashCode == c4_4xlarge_HASH)
          {
            return EC2InstanceType::c4_4xlarge;
          }
          else if (hashCode == c4_8xlarge_HASH)
          {
            return EC2InstanceType::c4_8xlarge;
          }
          else if (hashCode == c5_large_HASH)
          {
            return EC2InstanceType::c5_large;
          }
          else if (hashCode == c5_xlarge_HASH)
          {
            return EC2InstanceType::c5_xlarge;
          }
          else if (hashCode == c5_2xlarge_HASH)
          {
            return EC2InstanceType::c5_2xlarge;
          }
          else if (hashCode == c5_4xlarge_HASH)
          {
            return EC2InstanceType::c5_4xlarge;
          }
          else if (hashCode == c5_9xlarge_HASH)
          {
            return EC2InstanceType::c5_9xlarge;
          }
          else if (hashCode == c5_12xlarge_HASH)
          {
            return EC2InstanceType::c5_12xlarge;
          }
          else if (hashCode == c5_18xlarge_HASH)
          {
            return EC2InstanceType::c5_18xlarge;
          }
          else if (hashCode == c5_24xlarge_HASH)
          {
            return EC2InstanceType::c5_24xlarge;
          }
          else if (hashCode == c5a_large_HASH)
          {
            return EC2InstanceType::c5a_large;
          }
          else if (hashCode == c5a_xlarge_HASH)
          {
            return EC2InstanceType::c5a_xlarge;
          }
          else if (hashCode == c5a_2xlarge_HASH)
          {
            return EC2InstanceType::c5a_2xlarge;
          }
          else if (hashCode == c5a_4xlarge_HASH)
          {
            return EC2InstanceType::c5a_4xlarge;
          }
          else if (hashCode == c5a_8xlarge_HASH)
          {
            return EC2InstanceType::c5a_8xlarge;
          }
          else if (hashCode == c5a_12xlarge_HASH)
          {
            return EC2InstanceType::c5a_12xlarge;
          }
          else if (hashCode == c5a_16xlarge_HASH)
          {
            return EC2InstanceType::c5a_16xlarge;
          }
          else if (hashCode == c5a_24xlarge_HASH)
          {
            return EC2InstanceType::c5a_24xlarge;
          }
          else if (hashCode == r3_large_HASH)
          {
            return EC2InstanceType::r3_large;
          }
          else if (hashCode == r3_xlarge_HASH)
          {
            return EC2InstanceType::r3_xlarge;
          }
          else if (hashCode == r3_2xlarge_HASH)
          {
            return EC2InstanceType::r3_2xlarge;
          }
          else if (hashCode == r3_4xlarge_HASH)
          {
            return EC2InstanceType::r3_4xlarge;
          }
          else if (hashCode == r3_8xlarge_HASH)
          {
            return EC2InstanceType::r3_8xlarge;
          }
          else if (hashCode == r4_large_HASH)
          {
            return EC2InstanceType::r4_large;
          }
          else if (hashCode == r4_xlarge_HASH)
          {
            return EC2InstanceType::r4_xlarge;
          }
          else if (hashCode == r4_2xlarge_HASH)
          {
            return EC2InstanceType::r4_2xlarge;
          }
          else if (hashCode == r4_4xlarge_HASH)
          {
            return EC2InstanceType::r4_4xlarge;
          }
          else if (hashCode == r4_8xlarge_HASH)
          {
            return EC2InstanceType::r4_8xlarge;
          }
          else if (hashCode == r4_16xlarge_HASH)
          {
            return EC2InstanceType::r4_16xlarge;
          }
          else if (hashCode == r5_large_HASH)
          {
            return EC2InstanceType::r5_large;
          }
          else if (hashCode == r5_xlarge_HASH)
          {
            return EC2InstanceType::r5_xlarge;
          }
          else if (hashCode == r5_2xlarge_HASH)
          {
            return EC2InstanceType::r5_2xlarge;
          }
          else if (hashCode == r5_4xlarge_HASH)
          {
            return EC2InstanceType::r5_4xlarge;
          }
          else if (hashCode == r5_8xlarge_HASH)
          {
            return EC2InstanceType::r5_8xlarge;
          }
          else if (hashCode == r5_12xlarge_HASH)
          {
            return EC2InstanceType::r5_12xlarge;
          }
          else if (hashCode == r5_16xlarge_HASH)
          {
            return EC2InstanceType::r5_16xlarge;
          }
          else if (hashCode == r5_24xlarge_HASH)
          {
            return EC2InstanceType::r5_24xlarge;
          }
          else if (hashCode == r5a_large_HASH)
          {
            return EC2InstanceType::r5a_large;
          }
          else if (hashCode == r5a_xlarge_HASH)
          {
            return EC2InstanceType::r5a_xlarge;
          }
          else if (hashCode == r5a_2xlarge_HASH)
          {
            return EC2InstanceType::r5a_2xlarge;
          }
          else if (hashCode == r5a_4xlarge_HASH)
          {
            return EC2InstanceType::r5a_4xlarge;
          }
          else if (hashCode == r5a_8xlarge_HASH)
          {
            return EC2InstanceType::r5a_8xlarge;
          }
          else if (hashCode == r5a_12xlarge_HASH)
          {
            return EC2InstanceType::r5a_12xlarge;
          }
          else if (hashCode == r5a_16xlarge_HASH)
          {
            return EC2InstanceType::r5a_16xlarge;
          }
          else if (hashCode == r5a_24xlarge_HASH)
          {
            return EC2InstanceType::r5a_24xlarge;
          }
          else if (hashCode == m3_medium_HASH)
          {
            return EC2InstanceType::m3_medium;
          }
          else if (hashCode == m3_large_HASH)
          {
            return EC2InstanceType::m3_large;
          }
          else if (hashCode == m3_xlarge_HASH)
          {
            return EC2InstanceType::m3_xlarge;
          }
          else if (hashCode == m3_2xlarge_HASH)
          {
            return EC2InstanceType::m3_2xlarge;
          }
          else if (hashCode == m4_large_HASH)
          {
            return EC2InstanceType::m4_large;
          }
          else if (hashCode == m4_xlarge_HASH)
          {
            return EC2InstanceType::m4_xlarge;
          }
          else if (hashCode == m4_2xlarge_HASH)
          {
            return EC2InstanceType::m4_2xlarge;
          }
          else if (hashCode == m4_4xlarge_HASH)
          {
            return EC2InstanceType::m4_4xlarge;
          }
          else if (hashCode == m4_10xlarge_HASH)
          {
            return EC2InstanceType::m4_10xlarge;
          }
          else if (hashCode == m5_large_HASH)
          {
            return EC2InstanceType::m5_large;
          }
          else if (hashCode == m5_xlarge_HASH)
          {
            return EC2InstanceType::m5_xlarge;
          }
          else if (hashCode == m5_2xlarge_HASH)
          {
            return EC2InstanceType::m5_2xlarge;
          }
          else if (hashCode == m5_4xlarge_HASH)
          {
            return EC2InstanceType::m5_4xlarge;
          }
          else if (hashCode == m5_8xlarge_HASH)
          {
            return EC2InstanceType::m5_8xlarge;
          }
          else if (hashCode == m5_12xlarge_HASH)
          {
            return EC2InstanceType::m5_12xlarge;
          }
          else if (hashCode == m5_16xlarge_HASH)
          {
            return EC2InstanceType::m5_16xlarge;
          }
          else if (hashCode == m5_24xlarge_HASH)
          {
            return EC2InstanceType::m5_24xlarge;
          }
          else if (hashCode == m5a_large_HASH)
          {
            return EC2InstanceType::m5a_large;
          }
          else if (hashCode == m5a_xlarge_HASH)
          {
            return EC2InstanceType::m5a_xlarge;
          }
          else if (hashCode == m5a_2xlarge_HASH)
          {
            return EC2InstanceType::m5a_2xlarge;
          }
          else if (hashCode == m5a_4xlarge_HASH)
          {
            return EC2InstanceType::m5a_4xlarge;
          }
          else if (hashCode == m5a_8xlarge_HASH)
          {
            return EC2InstanceType::m5a_8xlarge;
          }
          else if (hashCode == m5a_12xlarge_HASH)
          {
            return EC2InstanceType::m5a_12xlarge;
          }
          else if (hashCode == m5a_16xlarge_HASH)
          {
            return EC2InstanceType::m5a_16xlarge;
          }
          else if (hashCode == m5a_24xlarge_HASH)
          {
            return EC2InstanceType::m5a_24xlarge;
          }
          else if (hashCode == c5d_large_HASH)
          {
            return EC2InstanceType::c5d_large;
          }
          else if (hashCode == c5d_xlarge_HASH)
          {
            return EC2InstanceType::c5d_xlarge;
          }
          else if (hashCode == c5d_2xlarge_HASH)
          {
            return EC2InstanceType::c5d_2xlarge;
          }
          else if (hashCode == c5d_4xlarge_HASH)
          {
            return EC2InstanceType::c5d_4xlarge;
          }
          else if (hashCode == c5d_9xlarge_HASH)
          {
            return EC2InstanceType::c5d_9xlarge;
          }
          else if (hashCode == c5d_12xlarge_HASH)
          {
            return EC2InstanceType::c5d_12xlarge;
          }
          else if (hashCode == c5d_18xlarge_HASH)
          {
            return EC2InstanceType::c5d_18xlarge;
          }
          else if (hashCode == c5d_24xlarge_HASH)
          {
            return EC2InstanceType::c5d_24xlarge;
          }
          else if (hashCode == c6a_large_HASH)
          {
            return EC2InstanceType::c6a_large;
          }
          else if (hashCode == c6a_xlarge_HASH)
          {
            return EC2InstanceType::c6a_xlarge;
          }
          else if (hashCode == c6a_2xlarge_HASH)
          {
            return EC2InstanceType::c6a_2xlarge;
          }
          else if (hashCode == c6a_4xlarge_HASH)
          {
            return EC2InstanceType::c6a_4xlarge;
          }
          else if (hashCode == c6a_8xlarge_HASH)
          {
            return EC2InstanceType::c6a_8xlarge;
          }
          else if (hashCode == c6a_12xlarge_HASH)
          {
            return EC2InstanceType::c6a_12xlarge;
          }
          else if (hashCode == c6a_16xlarge_HASH)
          {
            return EC2InstanceType::c6a_16xlarge;
          }
          else if (hashCode == c6a_24xlarge_HASH)
          {
            return EC2InstanceType::c6a_24xlarge;
          }
          else if (hashCode == c6i_large_HASH)
          {
            return EC2InstanceType::c6i_large;
          }
          else if (hashCode == c6i_xlarge_HASH)
          {
            return EC2InstanceType::c6i_xlarge;
          }
          else if (hashCode == c6i_2xlarge_HASH)
          {
            return EC2InstanceType::c6i_2xlarge;
          }
          else if (hashCode == c6i_4xlarge_HASH)
          {
            return EC2InstanceType::c6i_4xlarge;
          }
          else if (hashCode == c6i_8xlarge_HASH)
          {
            return EC2InstanceType::c6i_8xlarge;
          }
          else if (hashCode == c6i_12xlarge_HASH)
          {
            return EC2InstanceType::c6i_12xlarge;
          }
          else if (hashCode == c6i_16xlarge_HASH)
          {
            return EC2InstanceType::c6i_16xlarge;
          }
          else if (hashCode == c6i_24xlarge_HASH)
          {
            return EC2InstanceType::c6i_24xlarge;
          }
          else if (hashCode == r5d_large_HASH)
          {
            return EC2InstanceType::r5d_large;
          }
          else if (hashCode == r5d_xlarge_HASH)
          {
            return EC2InstanceType::r5d_xlarge;
          }
          else if (hashCode == r5d_2xlarge_HASH)
          {
            return EC2InstanceType::r5d_2xlarge;
          }
          else if (hashCode == r5d_4xlarge_HASH)
          {
            return EC2InstanceType::r5d_4xlarge;
          }
          else if (hashCode == r5d_8xlarge_HASH)
          {
            return EC2InstanceType::r5d_8xlarge;
          }
          else if (hashCode == r5d_12xlarge_HASH)
          {
            return EC2InstanceType::r5d_12xlarge;
          }
          else if (hashCode == r5d_16xlarge_HASH)
          {
            return EC2InstanceType::r5d_16xlarge;
          }
          else if (hashCode == r5d_24xlarge_HASH)
          {
            return EC2InstanceType::r5d_24xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EC2InstanceType>(hashCode);
          }

          return EC2InstanceType::NOT_SET;
        }

        Aws::String GetNameForEC2InstanceType(EC2InstanceType enumValue)
        {
          switch(enumValue)
          {
          case EC2InstanceType::t2_micro:
            return "t2.micro";
          case EC2InstanceType::t2_small:
            return "t2.small";
          case EC2InstanceType::t2_medium:
            return "t2.medium";
          case EC2InstanceType::t2_large:
            return "t2.large";
          case EC2InstanceType::c3_large:
            return "c3.large";
          case EC2InstanceType::c3_xlarge:
            return "c3.xlarge";
          case EC2InstanceType::c3_2xlarge:
            return "c3.2xlarge";
          case EC2InstanceType::c3_4xlarge:
            return "c3.4xlarge";
          case EC2InstanceType::c3_8xlarge:
            return "c3.8xlarge";
          case EC2InstanceType::c4_large:
            return "c4.large";
          case EC2InstanceType::c4_xlarge:
            return "c4.xlarge";
          case EC2InstanceType::c4_2xlarge:
            return "c4.2xlarge";
          case EC2InstanceType::c4_4xlarge:
            return "c4.4xlarge";
          case EC2InstanceType::c4_8xlarge:
            return "c4.8xlarge";
          case EC2InstanceType::c5_large:
            return "c5.large";
          case EC2InstanceType::c5_xlarge:
            return "c5.xlarge";
          case EC2InstanceType::c5_2xlarge:
            return "c5.2xlarge";
          case EC2InstanceType::c5_4xlarge:
            return "c5.4xlarge";
          case EC2InstanceType::c5_9xlarge:
            return "c5.9xlarge";
          case EC2InstanceType::c5_12xlarge:
            return "c5.12xlarge";
          case EC2InstanceType::c5_18xlarge:
            return "c5.18xlarge";
          case EC2InstanceType::c5_24xlarge:
            return "c5.24xlarge";
          case EC2InstanceType::c5a_large:
            return "c5a.large";
          case EC2InstanceType::c5a_xlarge:
            return "c5a.xlarge";
          case EC2InstanceType::c5a_2xlarge:
            return "c5a.2xlarge";
          case EC2InstanceType::c5a_4xlarge:
            return "c5a.4xlarge";
          case EC2InstanceType::c5a_8xlarge:
            return "c5a.8xlarge";
          case EC2InstanceType::c5a_12xlarge:
            return "c5a.12xlarge";
          case EC2InstanceType::c5a_16xlarge:
            return "c5a.16xlarge";
          case EC2InstanceType::c5a_24xlarge:
            return "c5a.24xlarge";
          case EC2InstanceType::r3_large:
            return "r3.large";
          case EC2InstanceType::r3_xlarge:
            return "r3.xlarge";
          case EC2InstanceType::r3_2xlarge:
            return "r3.2xlarge";
          case EC2InstanceType::r3_4xlarge:
            return "r3.4xlarge";
          case EC2InstanceType::r3_8xlarge:
            return "r3.8xlarge";
          case EC2InstanceType::r4_large:
            return "r4.large";
          case EC2InstanceType::r4_xlarge:
            return "r4.xlarge";
          case EC2InstanceType::r4_2xlarge:
            return "r4.2xlarge";
          case EC2InstanceType::r4_4xlarge:
            return "r4.4xlarge";
          case EC2InstanceType::r4_8xlarge:
            return "r4.8xlarge";
          case EC2InstanceType::r4_16xlarge:
            return "r4.16xlarge";
          case EC2InstanceType::r5_large:
            return "r5.large";
          case EC2InstanceType::r5_xlarge:
            return "r5.xlarge";
          case EC2InstanceType::r5_2xlarge:
            return "r5.2xlarge";
          case EC2InstanceType::r5_4xlarge:
            return "r5.4xlarge";
          case EC2InstanceType::r5_8xlarge:
            return "r5.8xlarge";
          case EC2InstanceType::r5_12xlarge:
            return "r5.12xlarge";
          case EC2InstanceType::r5_16xlarge:
            return "r5.16xlarge";
          case EC2InstanceType::r5_24xlarge:
            return "r5.24xlarge";
          case EC2InstanceType::r5a_large:
            return "r5a.large";
          case EC2InstanceType::r5a_xlarge:
            return "r5a.xlarge";
          case EC2InstanceType::r5a_2xlarge:
            return "r5a.2xlarge";
          case EC2InstanceType::r5a_4xlarge:
            return "r5a.4xlarge";
          case EC2InstanceType::r5a_8xlarge:
            return "r5a.8xlarge";
          case EC2InstanceType::r5a_12xlarge:
            return "r5a.12xlarge";
          case EC2InstanceType::r5a_16xlarge:
            return "r5a.16xlarge";
          case EC2InstanceType::r5a_24xlarge:
            return "r5a.24xlarge";
          case EC2InstanceType::m3_medium:
            return "m3.medium";
          case EC2InstanceType::m3_large:
            return "m3.large";
          case EC2InstanceType::m3_xlarge:
            return "m3.xlarge";
          case EC2InstanceType::m3_2xlarge:
            return "m3.2xlarge";
          case EC2InstanceType::m4_large:
            return "m4.large";
          case EC2InstanceType::m4_xlarge:
            return "m4.xlarge";
          case EC2InstanceType::m4_2xlarge:
            return "m4.2xlarge";
          case EC2InstanceType::m4_4xlarge:
            return "m4.4xlarge";
          case EC2InstanceType::m4_10xlarge:
            return "m4.10xlarge";
          case EC2InstanceType::m5_large:
            return "m5.large";
          case EC2InstanceType::m5_xlarge:
            return "m5.xlarge";
          case EC2InstanceType::m5_2xlarge:
            return "m5.2xlarge";
          case EC2InstanceType::m5_4xlarge:
            return "m5.4xlarge";
          case EC2InstanceType::m5_8xlarge:
            return "m5.8xlarge";
          case EC2InstanceType::m5_12xlarge:
            return "m5.12xlarge";
          case EC2InstanceType::m5_16xlarge:
            return "m5.16xlarge";
          case EC2InstanceType::m5_24xlarge:
            return "m5.24xlarge";
          case EC2InstanceType::m5a_large:
            return "m5a.large";
          case EC2InstanceType::m5a_xlarge:
            return "m5a.xlarge";
          case EC2InstanceType::m5a_2xlarge:
            return "m5a.2xlarge";
          case EC2InstanceType::m5a_4xlarge:
            return "m5a.4xlarge";
          case EC2InstanceType::m5a_8xlarge:
            return "m5a.8xlarge";
          case EC2InstanceType::m5a_12xlarge:
            return "m5a.12xlarge";
          case EC2InstanceType::m5a_16xlarge:
            return "m5a.16xlarge";
          case EC2InstanceType::m5a_24xlarge:
            return "m5a.24xlarge";
          case EC2InstanceType::c5d_large:
            return "c5d.large";
          case EC2InstanceType::c5d_xlarge:
            return "c5d.xlarge";
          case EC2InstanceType::c5d_2xlarge:
            return "c5d.2xlarge";
          case EC2InstanceType::c5d_4xlarge:
            return "c5d.4xlarge";
          case EC2InstanceType::c5d_9xlarge:
            return "c5d.9xlarge";
          case EC2InstanceType::c5d_12xlarge:
            return "c5d.12xlarge";
          case EC2InstanceType::c5d_18xlarge:
            return "c5d.18xlarge";
          case EC2InstanceType::c5d_24xlarge:
            return "c5d.24xlarge";
          case EC2InstanceType::c6a_large:
            return "c6a.large";
          case EC2InstanceType::c6a_xlarge:
            return "c6a.xlarge";
          case EC2InstanceType::c6a_2xlarge:
            return "c6a.2xlarge";
          case EC2InstanceType::c6a_4xlarge:
            return "c6a.4xlarge";
          case EC2InstanceType::c6a_8xlarge:
            return "c6a.8xlarge";
          case EC2InstanceType::c6a_12xlarge:
            return "c6a.12xlarge";
          case EC2InstanceType::c6a_16xlarge:
            return "c6a.16xlarge";
          case EC2InstanceType::c6a_24xlarge:
            return "c6a.24xlarge";
          case EC2InstanceType::c6i_large:
            return "c6i.large";
          case EC2InstanceType::c6i_xlarge:
            return "c6i.xlarge";
          case EC2InstanceType::c6i_2xlarge:
            return "c6i.2xlarge";
          case EC2InstanceType::c6i_4xlarge:
            return "c6i.4xlarge";
          case EC2InstanceType::c6i_8xlarge:
            return "c6i.8xlarge";
          case EC2InstanceType::c6i_12xlarge:
            return "c6i.12xlarge";
          case EC2InstanceType::c6i_16xlarge:
            return "c6i.16xlarge";
          case EC2InstanceType::c6i_24xlarge:
            return "c6i.24xlarge";
          case EC2InstanceType::r5d_large:
            return "r5d.large";
          case EC2InstanceType::r5d_xlarge:
            return "r5d.xlarge";
          case EC2InstanceType::r5d_2xlarge:
            return "r5d.2xlarge";
          case EC2InstanceType::r5d_4xlarge:
            return "r5d.4xlarge";
          case EC2InstanceType::r5d_8xlarge:
            return "r5d.8xlarge";
          case EC2InstanceType::r5d_12xlarge:
            return "r5d.12xlarge";
          case EC2InstanceType::r5d_16xlarge:
            return "r5d.16xlarge";
          case EC2InstanceType::r5d_24xlarge:
            return "r5d.24xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EC2InstanceTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
