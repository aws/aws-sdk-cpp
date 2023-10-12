/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t CPU_HASH = ConstExprHashingUtils::HashString("CPU");
        static constexpr uint32_t MEMORY_HASH = ConstExprHashingUtils::HashString("MEMORY");
        static constexpr uint32_t THREADS_HASH = ConstExprHashingUtils::HashString("THREADS");
        static constexpr uint32_t RX_RATE_HASH = ConstExprHashingUtils::HashString("RX_RATE");
        static constexpr uint32_t TX_RATE_HASH = ConstExprHashingUtils::HashString("TX_RATE");
        static constexpr uint32_t RX_HASH = ConstExprHashingUtils::HashString("RX");
        static constexpr uint32_t TX_HASH = ConstExprHashingUtils::HashString("TX");
        static constexpr uint32_t NATIVE_FRAMES_HASH = ConstExprHashingUtils::HashString("NATIVE_FRAMES");
        static constexpr uint32_t NATIVE_FPS_HASH = ConstExprHashingUtils::HashString("NATIVE_FPS");
        static constexpr uint32_t NATIVE_MIN_DRAWTIME_HASH = ConstExprHashingUtils::HashString("NATIVE_MIN_DRAWTIME");
        static constexpr uint32_t NATIVE_AVG_DRAWTIME_HASH = ConstExprHashingUtils::HashString("NATIVE_AVG_DRAWTIME");
        static constexpr uint32_t NATIVE_MAX_DRAWTIME_HASH = ConstExprHashingUtils::HashString("NATIVE_MAX_DRAWTIME");
        static constexpr uint32_t OPENGL_FRAMES_HASH = ConstExprHashingUtils::HashString("OPENGL_FRAMES");
        static constexpr uint32_t OPENGL_FPS_HASH = ConstExprHashingUtils::HashString("OPENGL_FPS");
        static constexpr uint32_t OPENGL_MIN_DRAWTIME_HASH = ConstExprHashingUtils::HashString("OPENGL_MIN_DRAWTIME");
        static constexpr uint32_t OPENGL_AVG_DRAWTIME_HASH = ConstExprHashingUtils::HashString("OPENGL_AVG_DRAWTIME");
        static constexpr uint32_t OPENGL_MAX_DRAWTIME_HASH = ConstExprHashingUtils::HashString("OPENGL_MAX_DRAWTIME");


        SampleType GetSampleTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case SampleType::NOT_SET:
            return {};
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

            return {};
          }
        }

      } // namespace SampleTypeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
