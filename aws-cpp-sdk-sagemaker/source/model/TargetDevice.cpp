/*
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

#include <aws/sagemaker/model/TargetDevice.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace TargetDeviceMapper
      {

        static const int lambda_HASH = HashingUtils::HashString("lambda");
        static const int ml_m4_HASH = HashingUtils::HashString("ml_m4");
        static const int ml_m5_HASH = HashingUtils::HashString("ml_m5");
        static const int ml_c4_HASH = HashingUtils::HashString("ml_c4");
        static const int ml_c5_HASH = HashingUtils::HashString("ml_c5");
        static const int ml_p2_HASH = HashingUtils::HashString("ml_p2");
        static const int ml_p3_HASH = HashingUtils::HashString("ml_p3");
        static const int jetson_tx1_HASH = HashingUtils::HashString("jetson_tx1");
        static const int jetson_tx2_HASH = HashingUtils::HashString("jetson_tx2");
        static const int jetson_nano_HASH = HashingUtils::HashString("jetson_nano");
        static const int rasp3b_HASH = HashingUtils::HashString("rasp3b");
        static const int deeplens_HASH = HashingUtils::HashString("deeplens");
        static const int rk3399_HASH = HashingUtils::HashString("rk3399");
        static const int rk3288_HASH = HashingUtils::HashString("rk3288");
        static const int sbe_c_HASH = HashingUtils::HashString("sbe_c");


        TargetDevice GetTargetDeviceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == lambda_HASH)
          {
            return TargetDevice::lambda;
          }
          else if (hashCode == ml_m4_HASH)
          {
            return TargetDevice::ml_m4;
          }
          else if (hashCode == ml_m5_HASH)
          {
            return TargetDevice::ml_m5;
          }
          else if (hashCode == ml_c4_HASH)
          {
            return TargetDevice::ml_c4;
          }
          else if (hashCode == ml_c5_HASH)
          {
            return TargetDevice::ml_c5;
          }
          else if (hashCode == ml_p2_HASH)
          {
            return TargetDevice::ml_p2;
          }
          else if (hashCode == ml_p3_HASH)
          {
            return TargetDevice::ml_p3;
          }
          else if (hashCode == jetson_tx1_HASH)
          {
            return TargetDevice::jetson_tx1;
          }
          else if (hashCode == jetson_tx2_HASH)
          {
            return TargetDevice::jetson_tx2;
          }
          else if (hashCode == jetson_nano_HASH)
          {
            return TargetDevice::jetson_nano;
          }
          else if (hashCode == rasp3b_HASH)
          {
            return TargetDevice::rasp3b;
          }
          else if (hashCode == deeplens_HASH)
          {
            return TargetDevice::deeplens;
          }
          else if (hashCode == rk3399_HASH)
          {
            return TargetDevice::rk3399;
          }
          else if (hashCode == rk3288_HASH)
          {
            return TargetDevice::rk3288;
          }
          else if (hashCode == sbe_c_HASH)
          {
            return TargetDevice::sbe_c;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetDevice>(hashCode);
          }

          return TargetDevice::NOT_SET;
        }

        Aws::String GetNameForTargetDevice(TargetDevice enumValue)
        {
          switch(enumValue)
          {
          case TargetDevice::lambda:
            return "lambda";
          case TargetDevice::ml_m4:
            return "ml_m4";
          case TargetDevice::ml_m5:
            return "ml_m5";
          case TargetDevice::ml_c4:
            return "ml_c4";
          case TargetDevice::ml_c5:
            return "ml_c5";
          case TargetDevice::ml_p2:
            return "ml_p2";
          case TargetDevice::ml_p3:
            return "ml_p3";
          case TargetDevice::jetson_tx1:
            return "jetson_tx1";
          case TargetDevice::jetson_tx2:
            return "jetson_tx2";
          case TargetDevice::jetson_nano:
            return "jetson_nano";
          case TargetDevice::rasp3b:
            return "rasp3b";
          case TargetDevice::deeplens:
            return "deeplens";
          case TargetDevice::rk3399:
            return "rk3399";
          case TargetDevice::rk3288:
            return "rk3288";
          case TargetDevice::sbe_c:
            return "sbe_c";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetDeviceMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
