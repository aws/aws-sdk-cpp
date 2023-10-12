/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/FuotaDeviceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace FuotaDeviceStatusMapper
      {

        static constexpr uint32_t Initial_HASH = ConstExprHashingUtils::HashString("Initial");
        static constexpr uint32_t Package_Not_Supported_HASH = ConstExprHashingUtils::HashString("Package_Not_Supported");
        static constexpr uint32_t FragAlgo_unsupported_HASH = ConstExprHashingUtils::HashString("FragAlgo_unsupported");
        static constexpr uint32_t Not_enough_memory_HASH = ConstExprHashingUtils::HashString("Not_enough_memory");
        static constexpr uint32_t FragIndex_unsupported_HASH = ConstExprHashingUtils::HashString("FragIndex_unsupported");
        static constexpr uint32_t Wrong_descriptor_HASH = ConstExprHashingUtils::HashString("Wrong_descriptor");
        static constexpr uint32_t SessionCnt_replay_HASH = ConstExprHashingUtils::HashString("SessionCnt_replay");
        static constexpr uint32_t MissingFrag_HASH = ConstExprHashingUtils::HashString("MissingFrag");
        static constexpr uint32_t MemoryError_HASH = ConstExprHashingUtils::HashString("MemoryError");
        static constexpr uint32_t MICError_HASH = ConstExprHashingUtils::HashString("MICError");
        static constexpr uint32_t Successful_HASH = ConstExprHashingUtils::HashString("Successful");


        FuotaDeviceStatus GetFuotaDeviceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Initial_HASH)
          {
            return FuotaDeviceStatus::Initial;
          }
          else if (hashCode == Package_Not_Supported_HASH)
          {
            return FuotaDeviceStatus::Package_Not_Supported;
          }
          else if (hashCode == FragAlgo_unsupported_HASH)
          {
            return FuotaDeviceStatus::FragAlgo_unsupported;
          }
          else if (hashCode == Not_enough_memory_HASH)
          {
            return FuotaDeviceStatus::Not_enough_memory;
          }
          else if (hashCode == FragIndex_unsupported_HASH)
          {
            return FuotaDeviceStatus::FragIndex_unsupported;
          }
          else if (hashCode == Wrong_descriptor_HASH)
          {
            return FuotaDeviceStatus::Wrong_descriptor;
          }
          else if (hashCode == SessionCnt_replay_HASH)
          {
            return FuotaDeviceStatus::SessionCnt_replay;
          }
          else if (hashCode == MissingFrag_HASH)
          {
            return FuotaDeviceStatus::MissingFrag;
          }
          else if (hashCode == MemoryError_HASH)
          {
            return FuotaDeviceStatus::MemoryError;
          }
          else if (hashCode == MICError_HASH)
          {
            return FuotaDeviceStatus::MICError;
          }
          else if (hashCode == Successful_HASH)
          {
            return FuotaDeviceStatus::Successful;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FuotaDeviceStatus>(hashCode);
          }

          return FuotaDeviceStatus::NOT_SET;
        }

        Aws::String GetNameForFuotaDeviceStatus(FuotaDeviceStatus enumValue)
        {
          switch(enumValue)
          {
          case FuotaDeviceStatus::NOT_SET:
            return {};
          case FuotaDeviceStatus::Initial:
            return "Initial";
          case FuotaDeviceStatus::Package_Not_Supported:
            return "Package_Not_Supported";
          case FuotaDeviceStatus::FragAlgo_unsupported:
            return "FragAlgo_unsupported";
          case FuotaDeviceStatus::Not_enough_memory:
            return "Not_enough_memory";
          case FuotaDeviceStatus::FragIndex_unsupported:
            return "FragIndex_unsupported";
          case FuotaDeviceStatus::Wrong_descriptor:
            return "Wrong_descriptor";
          case FuotaDeviceStatus::SessionCnt_replay:
            return "SessionCnt_replay";
          case FuotaDeviceStatus::MissingFrag:
            return "MissingFrag";
          case FuotaDeviceStatus::MemoryError:
            return "MemoryError";
          case FuotaDeviceStatus::MICError:
            return "MICError";
          case FuotaDeviceStatus::Successful:
            return "Successful";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FuotaDeviceStatusMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
