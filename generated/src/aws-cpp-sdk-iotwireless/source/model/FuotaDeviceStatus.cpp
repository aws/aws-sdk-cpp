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

        static const int Initial_HASH = HashingUtils::HashString("Initial");
        static const int Package_Not_Supported_HASH = HashingUtils::HashString("Package_Not_Supported");
        static const int FragAlgo_unsupported_HASH = HashingUtils::HashString("FragAlgo_unsupported");
        static const int Not_enough_memory_HASH = HashingUtils::HashString("Not_enough_memory");
        static const int FragIndex_unsupported_HASH = HashingUtils::HashString("FragIndex_unsupported");
        static const int Wrong_descriptor_HASH = HashingUtils::HashString("Wrong_descriptor");
        static const int SessionCnt_replay_HASH = HashingUtils::HashString("SessionCnt_replay");
        static const int MissingFrag_HASH = HashingUtils::HashString("MissingFrag");
        static const int MemoryError_HASH = HashingUtils::HashString("MemoryError");
        static const int MICError_HASH = HashingUtils::HashString("MICError");
        static const int Successful_HASH = HashingUtils::HashString("Successful");


        FuotaDeviceStatus GetFuotaDeviceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
