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
#include <aws/devicefarm/model/SampleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace SampleTypeMapper
      {

        static const int CPU_HASH = HashingUtils::HashString("CPU");
        static const int MEMORY_HASH = HashingUtils::HashString("MEMORY");
        static const int THREADS_HASH = HashingUtils::HashString("THREADS");
        static const int RX_RATE_HASH = HashingUtils::HashString("RX_RATE");
        static const int TX_RATE_HASH = HashingUtils::HashString("TX_RATE");
        static const int RX_HASH = HashingUtils::HashString("RX");
        static const int TX_HASH = HashingUtils::HashString("TX");
        static const int NATIVE_FRAMES_HASH = HashingUtils::HashString("NATIVE_FRAMES");
        static const int NATIVE_FPS_HASH = HashingUtils::HashString("NATIVE_FPS");
        static const int NATIVE_MIN_DRAWTIME_HASH = HashingUtils::HashString("NATIVE_MIN_DRAWTIME");
        static const int NATIVE_AVG_DRAWTIME_HASH = HashingUtils::HashString("NATIVE_AVG_DRAWTIME");
        static const int NATIVE_MAX_DRAWTIME_HASH = HashingUtils::HashString("NATIVE_MAX_DRAWTIME");
        static const int OPENGL_FRAMES_HASH = HashingUtils::HashString("OPENGL_FRAMES");
        static const int OPENGL_FPS_HASH = HashingUtils::HashString("OPENGL_FPS");
        static const int OPENGL_MIN_DRAWTIME_HASH = HashingUtils::HashString("OPENGL_MIN_DRAWTIME");
        static const int OPENGL_AVG_DRAWTIME_HASH = HashingUtils::HashString("OPENGL_AVG_DRAWTIME");
        static const int OPENGL_MAX_DRAWTIME_HASH = HashingUtils::HashString("OPENGL_MAX_DRAWTIME");


        SampleType GetSampleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPU_HASH)
          {
            return SampleType::CPU;
          }
          else if (hashCode == MEMORY_HASH)
          {
            return SampleType::MEMORY;
          }
          else if (hashCode == THREADS_HASH)
          {
            return SampleType::THREADS;
          }
          else if (hashCode == RX_RATE_HASH)
          {
            return SampleType::RX_RATE;
          }
          else if (hashCode == TX_RATE_HASH)
          {
            return SampleType::TX_RATE;
          }
          else if (hashCode == RX_HASH)
          {
            return SampleType::RX;
          }
          else if (hashCode == TX_HASH)
          {
            return SampleType::TX;
          }
          else if (hashCode == NATIVE_FRAMES_HASH)
          {
            return SampleType::NATIVE_FRAMES;
          }
          else if (hashCode == NATIVE_FPS_HASH)
          {
            return SampleType::NATIVE_FPS;
          }
          else if (hashCode == NATIVE_MIN_DRAWTIME_HASH)
          {
            return SampleType::NATIVE_MIN_DRAWTIME;
          }
          else if (hashCode == NATIVE_AVG_DRAWTIME_HASH)
          {
            return SampleType::NATIVE_AVG_DRAWTIME;
          }
          else if (hashCode == NATIVE_MAX_DRAWTIME_HASH)
          {
            return SampleType::NATIVE_MAX_DRAWTIME;
          }
          else if (hashCode == OPENGL_FRAMES_HASH)
          {
            return SampleType::OPENGL_FRAMES;
          }
          else if (hashCode == OPENGL_FPS_HASH)
          {
            return SampleType::OPENGL_FPS;
          }
          else if (hashCode == OPENGL_MIN_DRAWTIME_HASH)
          {
            return SampleType::OPENGL_MIN_DRAWTIME;
          }
          else if (hashCode == OPENGL_AVG_DRAWTIME_HASH)
          {
            return SampleType::OPENGL_AVG_DRAWTIME;
          }
          else if (hashCode == OPENGL_MAX_DRAWTIME_HASH)
          {
            return SampleType::OPENGL_MAX_DRAWTIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SampleType>(hashCode);
          }

          return SampleType::NOT_SET;
        }

        Aws::String GetNameForSampleType(SampleType enumValue)
        {
          switch(enumValue)
          {
          case SampleType::CPU:
            return "CPU";
          case SampleType::MEMORY:
            return "MEMORY";
          case SampleType::THREADS:
            return "THREADS";
          case SampleType::RX_RATE:
            return "RX_RATE";
          case SampleType::TX_RATE:
            return "TX_RATE";
          case SampleType::RX:
            return "RX";
          case SampleType::TX:
            return "TX";
          case SampleType::NATIVE_FRAMES:
            return "NATIVE_FRAMES";
          case SampleType::NATIVE_FPS:
            return "NATIVE_FPS";
          case SampleType::NATIVE_MIN_DRAWTIME:
            return "NATIVE_MIN_DRAWTIME";
          case SampleType::NATIVE_AVG_DRAWTIME:
            return "NATIVE_AVG_DRAWTIME";
          case SampleType::NATIVE_MAX_DRAWTIME:
            return "NATIVE_MAX_DRAWTIME";
          case SampleType::OPENGL_FRAMES:
            return "OPENGL_FRAMES";
          case SampleType::OPENGL_FPS:
            return "OPENGL_FPS";
          case SampleType::OPENGL_MIN_DRAWTIME:
            return "OPENGL_MIN_DRAWTIME";
          case SampleType::OPENGL_AVG_DRAWTIME:
            return "OPENGL_AVG_DRAWTIME";
          case SampleType::OPENGL_MAX_DRAWTIME:
            return "OPENGL_MAX_DRAWTIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SampleTypeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
