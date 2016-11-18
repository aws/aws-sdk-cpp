/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
        static const int r3_large_HASH = HashingUtils::HashString("r3.large");
        static const int r3_xlarge_HASH = HashingUtils::HashString("r3.xlarge");
        static const int r3_2xlarge_HASH = HashingUtils::HashString("r3.2xlarge");
        static const int r3_4xlarge_HASH = HashingUtils::HashString("r3.4xlarge");
        static const int r3_8xlarge_HASH = HashingUtils::HashString("r3.8xlarge");
        static const int m3_medium_HASH = HashingUtils::HashString("m3.medium");
        static const int m3_large_HASH = HashingUtils::HashString("m3.large");
        static const int m3_xlarge_HASH = HashingUtils::HashString("m3.xlarge");
        static const int m3_2xlarge_HASH = HashingUtils::HashString("m3.2xlarge");
        static const int m4_large_HASH = HashingUtils::HashString("m4.large");
        static const int m4_xlarge_HASH = HashingUtils::HashString("m4.xlarge");
        static const int m4_2xlarge_HASH = HashingUtils::HashString("m4.2xlarge");
        static const int m4_4xlarge_HASH = HashingUtils::HashString("m4.4xlarge");
        static const int m4_10xlarge_HASH = HashingUtils::HashString("m4.10xlarge");


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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace EC2InstanceTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
