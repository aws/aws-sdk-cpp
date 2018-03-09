﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ec2/model/InstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace InstanceTypeMapper
      {

        static const int t1_micro_HASH = HashingUtils::HashString("t1.micro");
        static const int t2_nano_HASH = HashingUtils::HashString("t2.nano");
        static const int t2_micro_HASH = HashingUtils::HashString("t2.micro");
        static const int t2_small_HASH = HashingUtils::HashString("t2.small");
        static const int t2_medium_HASH = HashingUtils::HashString("t2.medium");
        static const int t2_large_HASH = HashingUtils::HashString("t2.large");
        static const int t2_xlarge_HASH = HashingUtils::HashString("t2.xlarge");
        static const int t2_2xlarge_HASH = HashingUtils::HashString("t2.2xlarge");
        static const int m1_small_HASH = HashingUtils::HashString("m1.small");
        static const int m1_medium_HASH = HashingUtils::HashString("m1.medium");
        static const int m1_large_HASH = HashingUtils::HashString("m1.large");
        static const int m1_xlarge_HASH = HashingUtils::HashString("m1.xlarge");
        static const int m3_medium_HASH = HashingUtils::HashString("m3.medium");
        static const int m3_large_HASH = HashingUtils::HashString("m3.large");
        static const int m3_xlarge_HASH = HashingUtils::HashString("m3.xlarge");
        static const int m3_2xlarge_HASH = HashingUtils::HashString("m3.2xlarge");
        static const int m4_large_HASH = HashingUtils::HashString("m4.large");
        static const int m4_xlarge_HASH = HashingUtils::HashString("m4.xlarge");
        static const int m4_2xlarge_HASH = HashingUtils::HashString("m4.2xlarge");
        static const int m4_4xlarge_HASH = HashingUtils::HashString("m4.4xlarge");
        static const int m4_10xlarge_HASH = HashingUtils::HashString("m4.10xlarge");
        static const int m4_16xlarge_HASH = HashingUtils::HashString("m4.16xlarge");
        static const int m2_xlarge_HASH = HashingUtils::HashString("m2.xlarge");
        static const int m2_2xlarge_HASH = HashingUtils::HashString("m2.2xlarge");
        static const int m2_4xlarge_HASH = HashingUtils::HashString("m2.4xlarge");
        static const int cr1_8xlarge_HASH = HashingUtils::HashString("cr1.8xlarge");
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
        static const int x1_16xlarge_HASH = HashingUtils::HashString("x1.16xlarge");
        static const int x1_32xlarge_HASH = HashingUtils::HashString("x1.32xlarge");
        static const int x1e_xlarge_HASH = HashingUtils::HashString("x1e.xlarge");
        static const int x1e_2xlarge_HASH = HashingUtils::HashString("x1e.2xlarge");
        static const int x1e_4xlarge_HASH = HashingUtils::HashString("x1e.4xlarge");
        static const int x1e_8xlarge_HASH = HashingUtils::HashString("x1e.8xlarge");
        static const int x1e_16xlarge_HASH = HashingUtils::HashString("x1e.16xlarge");
        static const int x1e_32xlarge_HASH = HashingUtils::HashString("x1e.32xlarge");
        static const int i2_xlarge_HASH = HashingUtils::HashString("i2.xlarge");
        static const int i2_2xlarge_HASH = HashingUtils::HashString("i2.2xlarge");
        static const int i2_4xlarge_HASH = HashingUtils::HashString("i2.4xlarge");
        static const int i2_8xlarge_HASH = HashingUtils::HashString("i2.8xlarge");
        static const int i3_large_HASH = HashingUtils::HashString("i3.large");
        static const int i3_xlarge_HASH = HashingUtils::HashString("i3.xlarge");
        static const int i3_2xlarge_HASH = HashingUtils::HashString("i3.2xlarge");
        static const int i3_4xlarge_HASH = HashingUtils::HashString("i3.4xlarge");
        static const int i3_8xlarge_HASH = HashingUtils::HashString("i3.8xlarge");
        static const int i3_16xlarge_HASH = HashingUtils::HashString("i3.16xlarge");
        static const int hi1_4xlarge_HASH = HashingUtils::HashString("hi1.4xlarge");
        static const int hs1_8xlarge_HASH = HashingUtils::HashString("hs1.8xlarge");
        static const int c1_medium_HASH = HashingUtils::HashString("c1.medium");
        static const int c1_xlarge_HASH = HashingUtils::HashString("c1.xlarge");
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
        static const int c5_18xlarge_HASH = HashingUtils::HashString("c5.18xlarge");
        static const int cc1_4xlarge_HASH = HashingUtils::HashString("cc1.4xlarge");
        static const int cc2_8xlarge_HASH = HashingUtils::HashString("cc2.8xlarge");
        static const int g2_2xlarge_HASH = HashingUtils::HashString("g2.2xlarge");
        static const int g2_8xlarge_HASH = HashingUtils::HashString("g2.8xlarge");
        static const int g3_4xlarge_HASH = HashingUtils::HashString("g3.4xlarge");
        static const int g3_8xlarge_HASH = HashingUtils::HashString("g3.8xlarge");
        static const int g3_16xlarge_HASH = HashingUtils::HashString("g3.16xlarge");
        static const int cg1_4xlarge_HASH = HashingUtils::HashString("cg1.4xlarge");
        static const int p2_xlarge_HASH = HashingUtils::HashString("p2.xlarge");
        static const int p2_8xlarge_HASH = HashingUtils::HashString("p2.8xlarge");
        static const int p2_16xlarge_HASH = HashingUtils::HashString("p2.16xlarge");
        static const int p3_2xlarge_HASH = HashingUtils::HashString("p3.2xlarge");
        static const int p3_8xlarge_HASH = HashingUtils::HashString("p3.8xlarge");
        static const int p3_16xlarge_HASH = HashingUtils::HashString("p3.16xlarge");
        static const int d2_xlarge_HASH = HashingUtils::HashString("d2.xlarge");
        static const int d2_2xlarge_HASH = HashingUtils::HashString("d2.2xlarge");
        static const int d2_4xlarge_HASH = HashingUtils::HashString("d2.4xlarge");
        static const int d2_8xlarge_HASH = HashingUtils::HashString("d2.8xlarge");
        static const int f1_2xlarge_HASH = HashingUtils::HashString("f1.2xlarge");
        static const int f1_16xlarge_HASH = HashingUtils::HashString("f1.16xlarge");
        static const int m5_large_HASH = HashingUtils::HashString("m5.large");
        static const int m5_xlarge_HASH = HashingUtils::HashString("m5.xlarge");
        static const int m5_2xlarge_HASH = HashingUtils::HashString("m5.2xlarge");
        static const int m5_4xlarge_HASH = HashingUtils::HashString("m5.4xlarge");
        static const int m5_12xlarge_HASH = HashingUtils::HashString("m5.12xlarge");
        static const int m5_24xlarge_HASH = HashingUtils::HashString("m5.24xlarge");
        static const int h1_2xlarge_HASH = HashingUtils::HashString("h1.2xlarge");
        static const int h1_4xlarge_HASH = HashingUtils::HashString("h1.4xlarge");
        static const int h1_8xlarge_HASH = HashingUtils::HashString("h1.8xlarge");
        static const int h1_16xlarge_HASH = HashingUtils::HashString("h1.16xlarge");


        InstanceType GetInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == t1_micro_HASH)
          {
            return InstanceType::t1_micro;
          }
          else if (hashCode == t2_nano_HASH)
          {
            return InstanceType::t2_nano;
          }
          else if (hashCode == t2_micro_HASH)
          {
            return InstanceType::t2_micro;
          }
          else if (hashCode == t2_small_HASH)
          {
            return InstanceType::t2_small;
          }
          else if (hashCode == t2_medium_HASH)
          {
            return InstanceType::t2_medium;
          }
          else if (hashCode == t2_large_HASH)
          {
            return InstanceType::t2_large;
          }
          else if (hashCode == t2_xlarge_HASH)
          {
            return InstanceType::t2_xlarge;
          }
          else if (hashCode == t2_2xlarge_HASH)
          {
            return InstanceType::t2_2xlarge;
          }
          else if (hashCode == m1_small_HASH)
          {
            return InstanceType::m1_small;
          }
          else if (hashCode == m1_medium_HASH)
          {
            return InstanceType::m1_medium;
          }
          else if (hashCode == m1_large_HASH)
          {
            return InstanceType::m1_large;
          }
          else if (hashCode == m1_xlarge_HASH)
          {
            return InstanceType::m1_xlarge;
          }
          else if (hashCode == m3_medium_HASH)
          {
            return InstanceType::m3_medium;
          }
          else if (hashCode == m3_large_HASH)
          {
            return InstanceType::m3_large;
          }
          else if (hashCode == m3_xlarge_HASH)
          {
            return InstanceType::m3_xlarge;
          }
          else if (hashCode == m3_2xlarge_HASH)
          {
            return InstanceType::m3_2xlarge;
          }
          else if (hashCode == m4_large_HASH)
          {
            return InstanceType::m4_large;
          }
          else if (hashCode == m4_xlarge_HASH)
          {
            return InstanceType::m4_xlarge;
          }
          else if (hashCode == m4_2xlarge_HASH)
          {
            return InstanceType::m4_2xlarge;
          }
          else if (hashCode == m4_4xlarge_HASH)
          {
            return InstanceType::m4_4xlarge;
          }
          else if (hashCode == m4_10xlarge_HASH)
          {
            return InstanceType::m4_10xlarge;
          }
          else if (hashCode == m4_16xlarge_HASH)
          {
            return InstanceType::m4_16xlarge;
          }
          else if (hashCode == m2_xlarge_HASH)
          {
            return InstanceType::m2_xlarge;
          }
          else if (hashCode == m2_2xlarge_HASH)
          {
            return InstanceType::m2_2xlarge;
          }
          else if (hashCode == m2_4xlarge_HASH)
          {
            return InstanceType::m2_4xlarge;
          }
          else if (hashCode == cr1_8xlarge_HASH)
          {
            return InstanceType::cr1_8xlarge;
          }
          else if (hashCode == r3_large_HASH)
          {
            return InstanceType::r3_large;
          }
          else if (hashCode == r3_xlarge_HASH)
          {
            return InstanceType::r3_xlarge;
          }
          else if (hashCode == r3_2xlarge_HASH)
          {
            return InstanceType::r3_2xlarge;
          }
          else if (hashCode == r3_4xlarge_HASH)
          {
            return InstanceType::r3_4xlarge;
          }
          else if (hashCode == r3_8xlarge_HASH)
          {
            return InstanceType::r3_8xlarge;
          }
          else if (hashCode == r4_large_HASH)
          {
            return InstanceType::r4_large;
          }
          else if (hashCode == r4_xlarge_HASH)
          {
            return InstanceType::r4_xlarge;
          }
          else if (hashCode == r4_2xlarge_HASH)
          {
            return InstanceType::r4_2xlarge;
          }
          else if (hashCode == r4_4xlarge_HASH)
          {
            return InstanceType::r4_4xlarge;
          }
          else if (hashCode == r4_8xlarge_HASH)
          {
            return InstanceType::r4_8xlarge;
          }
          else if (hashCode == r4_16xlarge_HASH)
          {
            return InstanceType::r4_16xlarge;
          }
          else if (hashCode == x1_16xlarge_HASH)
          {
            return InstanceType::x1_16xlarge;
          }
          else if (hashCode == x1_32xlarge_HASH)
          {
            return InstanceType::x1_32xlarge;
          }
          else if (hashCode == x1e_xlarge_HASH)
          {
            return InstanceType::x1e_xlarge;
          }
          else if (hashCode == x1e_2xlarge_HASH)
          {
            return InstanceType::x1e_2xlarge;
          }
          else if (hashCode == x1e_4xlarge_HASH)
          {
            return InstanceType::x1e_4xlarge;
          }
          else if (hashCode == x1e_8xlarge_HASH)
          {
            return InstanceType::x1e_8xlarge;
          }
          else if (hashCode == x1e_16xlarge_HASH)
          {
            return InstanceType::x1e_16xlarge;
          }
          else if (hashCode == x1e_32xlarge_HASH)
          {
            return InstanceType::x1e_32xlarge;
          }
          else if (hashCode == i2_xlarge_HASH)
          {
            return InstanceType::i2_xlarge;
          }
          else if (hashCode == i2_2xlarge_HASH)
          {
            return InstanceType::i2_2xlarge;
          }
          else if (hashCode == i2_4xlarge_HASH)
          {
            return InstanceType::i2_4xlarge;
          }
          else if (hashCode == i2_8xlarge_HASH)
          {
            return InstanceType::i2_8xlarge;
          }
          else if (hashCode == i3_large_HASH)
          {
            return InstanceType::i3_large;
          }
          else if (hashCode == i3_xlarge_HASH)
          {
            return InstanceType::i3_xlarge;
          }
          else if (hashCode == i3_2xlarge_HASH)
          {
            return InstanceType::i3_2xlarge;
          }
          else if (hashCode == i3_4xlarge_HASH)
          {
            return InstanceType::i3_4xlarge;
          }
          else if (hashCode == i3_8xlarge_HASH)
          {
            return InstanceType::i3_8xlarge;
          }
          else if (hashCode == i3_16xlarge_HASH)
          {
            return InstanceType::i3_16xlarge;
          }
          else if (hashCode == hi1_4xlarge_HASH)
          {
            return InstanceType::hi1_4xlarge;
          }
          else if (hashCode == hs1_8xlarge_HASH)
          {
            return InstanceType::hs1_8xlarge;
          }
          else if (hashCode == c1_medium_HASH)
          {
            return InstanceType::c1_medium;
          }
          else if (hashCode == c1_xlarge_HASH)
          {
            return InstanceType::c1_xlarge;
          }
          else if (hashCode == c3_large_HASH)
          {
            return InstanceType::c3_large;
          }
          else if (hashCode == c3_xlarge_HASH)
          {
            return InstanceType::c3_xlarge;
          }
          else if (hashCode == c3_2xlarge_HASH)
          {
            return InstanceType::c3_2xlarge;
          }
          else if (hashCode == c3_4xlarge_HASH)
          {
            return InstanceType::c3_4xlarge;
          }
          else if (hashCode == c3_8xlarge_HASH)
          {
            return InstanceType::c3_8xlarge;
          }
          else if (hashCode == c4_large_HASH)
          {
            return InstanceType::c4_large;
          }
          else if (hashCode == c4_xlarge_HASH)
          {
            return InstanceType::c4_xlarge;
          }
          else if (hashCode == c4_2xlarge_HASH)
          {
            return InstanceType::c4_2xlarge;
          }
          else if (hashCode == c4_4xlarge_HASH)
          {
            return InstanceType::c4_4xlarge;
          }
          else if (hashCode == c4_8xlarge_HASH)
          {
            return InstanceType::c4_8xlarge;
          }
          else if (hashCode == c5_large_HASH)
          {
            return InstanceType::c5_large;
          }
          else if (hashCode == c5_xlarge_HASH)
          {
            return InstanceType::c5_xlarge;
          }
          else if (hashCode == c5_2xlarge_HASH)
          {
            return InstanceType::c5_2xlarge;
          }
          else if (hashCode == c5_4xlarge_HASH)
          {
            return InstanceType::c5_4xlarge;
          }
          else if (hashCode == c5_9xlarge_HASH)
          {
            return InstanceType::c5_9xlarge;
          }
          else if (hashCode == c5_18xlarge_HASH)
          {
            return InstanceType::c5_18xlarge;
          }
          else if (hashCode == cc1_4xlarge_HASH)
          {
            return InstanceType::cc1_4xlarge;
          }
          else if (hashCode == cc2_8xlarge_HASH)
          {
            return InstanceType::cc2_8xlarge;
          }
          else if (hashCode == g2_2xlarge_HASH)
          {
            return InstanceType::g2_2xlarge;
          }
          else if (hashCode == g2_8xlarge_HASH)
          {
            return InstanceType::g2_8xlarge;
          }
          else if (hashCode == g3_4xlarge_HASH)
          {
            return InstanceType::g3_4xlarge;
          }
          else if (hashCode == g3_8xlarge_HASH)
          {
            return InstanceType::g3_8xlarge;
          }
          else if (hashCode == g3_16xlarge_HASH)
          {
            return InstanceType::g3_16xlarge;
          }
          else if (hashCode == cg1_4xlarge_HASH)
          {
            return InstanceType::cg1_4xlarge;
          }
          else if (hashCode == p2_xlarge_HASH)
          {
            return InstanceType::p2_xlarge;
          }
          else if (hashCode == p2_8xlarge_HASH)
          {
            return InstanceType::p2_8xlarge;
          }
          else if (hashCode == p2_16xlarge_HASH)
          {
            return InstanceType::p2_16xlarge;
          }
          else if (hashCode == p3_2xlarge_HASH)
          {
            return InstanceType::p3_2xlarge;
          }
          else if (hashCode == p3_8xlarge_HASH)
          {
            return InstanceType::p3_8xlarge;
          }
          else if (hashCode == p3_16xlarge_HASH)
          {
            return InstanceType::p3_16xlarge;
          }
          else if (hashCode == d2_xlarge_HASH)
          {
            return InstanceType::d2_xlarge;
          }
          else if (hashCode == d2_2xlarge_HASH)
          {
            return InstanceType::d2_2xlarge;
          }
          else if (hashCode == d2_4xlarge_HASH)
          {
            return InstanceType::d2_4xlarge;
          }
          else if (hashCode == d2_8xlarge_HASH)
          {
            return InstanceType::d2_8xlarge;
          }
          else if (hashCode == f1_2xlarge_HASH)
          {
            return InstanceType::f1_2xlarge;
          }
          else if (hashCode == f1_16xlarge_HASH)
          {
            return InstanceType::f1_16xlarge;
          }
          else if (hashCode == m5_large_HASH)
          {
            return InstanceType::m5_large;
          }
          else if (hashCode == m5_xlarge_HASH)
          {
            return InstanceType::m5_xlarge;
          }
          else if (hashCode == m5_2xlarge_HASH)
          {
            return InstanceType::m5_2xlarge;
          }
          else if (hashCode == m5_4xlarge_HASH)
          {
            return InstanceType::m5_4xlarge;
          }
          else if (hashCode == m5_12xlarge_HASH)
          {
            return InstanceType::m5_12xlarge;
          }
          else if (hashCode == m5_24xlarge_HASH)
          {
            return InstanceType::m5_24xlarge;
          }
          else if (hashCode == h1_2xlarge_HASH)
          {
            return InstanceType::h1_2xlarge;
          }
          else if (hashCode == h1_4xlarge_HASH)
          {
            return InstanceType::h1_4xlarge;
          }
          else if (hashCode == h1_8xlarge_HASH)
          {
            return InstanceType::h1_8xlarge;
          }
          else if (hashCode == h1_16xlarge_HASH)
          {
            return InstanceType::h1_16xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceType>(hashCode);
          }

          return InstanceType::NOT_SET;
        }

        Aws::String GetNameForInstanceType(InstanceType enumValue)
        {
          switch(enumValue)
          {
          case InstanceType::t1_micro:
            return "t1.micro";
          case InstanceType::t2_nano:
            return "t2.nano";
          case InstanceType::t2_micro:
            return "t2.micro";
          case InstanceType::t2_small:
            return "t2.small";
          case InstanceType::t2_medium:
            return "t2.medium";
          case InstanceType::t2_large:
            return "t2.large";
          case InstanceType::t2_xlarge:
            return "t2.xlarge";
          case InstanceType::t2_2xlarge:
            return "t2.2xlarge";
          case InstanceType::m1_small:
            return "m1.small";
          case InstanceType::m1_medium:
            return "m1.medium";
          case InstanceType::m1_large:
            return "m1.large";
          case InstanceType::m1_xlarge:
            return "m1.xlarge";
          case InstanceType::m3_medium:
            return "m3.medium";
          case InstanceType::m3_large:
            return "m3.large";
          case InstanceType::m3_xlarge:
            return "m3.xlarge";
          case InstanceType::m3_2xlarge:
            return "m3.2xlarge";
          case InstanceType::m4_large:
            return "m4.large";
          case InstanceType::m4_xlarge:
            return "m4.xlarge";
          case InstanceType::m4_2xlarge:
            return "m4.2xlarge";
          case InstanceType::m4_4xlarge:
            return "m4.4xlarge";
          case InstanceType::m4_10xlarge:
            return "m4.10xlarge";
          case InstanceType::m4_16xlarge:
            return "m4.16xlarge";
          case InstanceType::m2_xlarge:
            return "m2.xlarge";
          case InstanceType::m2_2xlarge:
            return "m2.2xlarge";
          case InstanceType::m2_4xlarge:
            return "m2.4xlarge";
          case InstanceType::cr1_8xlarge:
            return "cr1.8xlarge";
          case InstanceType::r3_large:
            return "r3.large";
          case InstanceType::r3_xlarge:
            return "r3.xlarge";
          case InstanceType::r3_2xlarge:
            return "r3.2xlarge";
          case InstanceType::r3_4xlarge:
            return "r3.4xlarge";
          case InstanceType::r3_8xlarge:
            return "r3.8xlarge";
          case InstanceType::r4_large:
            return "r4.large";
          case InstanceType::r4_xlarge:
            return "r4.xlarge";
          case InstanceType::r4_2xlarge:
            return "r4.2xlarge";
          case InstanceType::r4_4xlarge:
            return "r4.4xlarge";
          case InstanceType::r4_8xlarge:
            return "r4.8xlarge";
          case InstanceType::r4_16xlarge:
            return "r4.16xlarge";
          case InstanceType::x1_16xlarge:
            return "x1.16xlarge";
          case InstanceType::x1_32xlarge:
            return "x1.32xlarge";
          case InstanceType::x1e_xlarge:
            return "x1e.xlarge";
          case InstanceType::x1e_2xlarge:
            return "x1e.2xlarge";
          case InstanceType::x1e_4xlarge:
            return "x1e.4xlarge";
          case InstanceType::x1e_8xlarge:
            return "x1e.8xlarge";
          case InstanceType::x1e_16xlarge:
            return "x1e.16xlarge";
          case InstanceType::x1e_32xlarge:
            return "x1e.32xlarge";
          case InstanceType::i2_xlarge:
            return "i2.xlarge";
          case InstanceType::i2_2xlarge:
            return "i2.2xlarge";
          case InstanceType::i2_4xlarge:
            return "i2.4xlarge";
          case InstanceType::i2_8xlarge:
            return "i2.8xlarge";
          case InstanceType::i3_large:
            return "i3.large";
          case InstanceType::i3_xlarge:
            return "i3.xlarge";
          case InstanceType::i3_2xlarge:
            return "i3.2xlarge";
          case InstanceType::i3_4xlarge:
            return "i3.4xlarge";
          case InstanceType::i3_8xlarge:
            return "i3.8xlarge";
          case InstanceType::i3_16xlarge:
            return "i3.16xlarge";
          case InstanceType::hi1_4xlarge:
            return "hi1.4xlarge";
          case InstanceType::hs1_8xlarge:
            return "hs1.8xlarge";
          case InstanceType::c1_medium:
            return "c1.medium";
          case InstanceType::c1_xlarge:
            return "c1.xlarge";
          case InstanceType::c3_large:
            return "c3.large";
          case InstanceType::c3_xlarge:
            return "c3.xlarge";
          case InstanceType::c3_2xlarge:
            return "c3.2xlarge";
          case InstanceType::c3_4xlarge:
            return "c3.4xlarge";
          case InstanceType::c3_8xlarge:
            return "c3.8xlarge";
          case InstanceType::c4_large:
            return "c4.large";
          case InstanceType::c4_xlarge:
            return "c4.xlarge";
          case InstanceType::c4_2xlarge:
            return "c4.2xlarge";
          case InstanceType::c4_4xlarge:
            return "c4.4xlarge";
          case InstanceType::c4_8xlarge:
            return "c4.8xlarge";
          case InstanceType::c5_large:
            return "c5.large";
          case InstanceType::c5_xlarge:
            return "c5.xlarge";
          case InstanceType::c5_2xlarge:
            return "c5.2xlarge";
          case InstanceType::c5_4xlarge:
            return "c5.4xlarge";
          case InstanceType::c5_9xlarge:
            return "c5.9xlarge";
          case InstanceType::c5_18xlarge:
            return "c5.18xlarge";
          case InstanceType::cc1_4xlarge:
            return "cc1.4xlarge";
          case InstanceType::cc2_8xlarge:
            return "cc2.8xlarge";
          case InstanceType::g2_2xlarge:
            return "g2.2xlarge";
          case InstanceType::g2_8xlarge:
            return "g2.8xlarge";
          case InstanceType::g3_4xlarge:
            return "g3.4xlarge";
          case InstanceType::g3_8xlarge:
            return "g3.8xlarge";
          case InstanceType::g3_16xlarge:
            return "g3.16xlarge";
          case InstanceType::cg1_4xlarge:
            return "cg1.4xlarge";
          case InstanceType::p2_xlarge:
            return "p2.xlarge";
          case InstanceType::p2_8xlarge:
            return "p2.8xlarge";
          case InstanceType::p2_16xlarge:
            return "p2.16xlarge";
          case InstanceType::p3_2xlarge:
            return "p3.2xlarge";
          case InstanceType::p3_8xlarge:
            return "p3.8xlarge";
          case InstanceType::p3_16xlarge:
            return "p3.16xlarge";
          case InstanceType::d2_xlarge:
            return "d2.xlarge";
          case InstanceType::d2_2xlarge:
            return "d2.2xlarge";
          case InstanceType::d2_4xlarge:
            return "d2.4xlarge";
          case InstanceType::d2_8xlarge:
            return "d2.8xlarge";
          case InstanceType::f1_2xlarge:
            return "f1.2xlarge";
          case InstanceType::f1_16xlarge:
            return "f1.16xlarge";
          case InstanceType::m5_large:
            return "m5.large";
          case InstanceType::m5_xlarge:
            return "m5.xlarge";
          case InstanceType::m5_2xlarge:
            return "m5.2xlarge";
          case InstanceType::m5_4xlarge:
            return "m5.4xlarge";
          case InstanceType::m5_12xlarge:
            return "m5.12xlarge";
          case InstanceType::m5_24xlarge:
            return "m5.24xlarge";
          case InstanceType::h1_2xlarge:
            return "h1.2xlarge";
          case InstanceType::h1_4xlarge:
            return "h1.4xlarge";
          case InstanceType::h1_8xlarge:
            return "h1.8xlarge";
          case InstanceType::h1_16xlarge:
            return "h1.16xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InstanceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
