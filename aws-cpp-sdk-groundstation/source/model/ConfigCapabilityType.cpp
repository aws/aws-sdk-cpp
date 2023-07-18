﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ConfigCapabilityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GroundStation
  {
    namespace Model
    {
      namespace ConfigCapabilityTypeMapper
      {

        static const int antenna_downlink_HASH = HashingUtils::HashString("antenna-downlink");
        static const int antenna_downlink_demod_decode_HASH = HashingUtils::HashString("antenna-downlink-demod-decode");
        static const int antenna_uplink_HASH = HashingUtils::HashString("antenna-uplink");
        static const int dataflow_endpoint_HASH = HashingUtils::HashString("dataflow-endpoint");
        static const int tracking_HASH = HashingUtils::HashString("tracking");
        static const int uplink_echo_HASH = HashingUtils::HashString("uplink-echo");
        static const int s3_recording_HASH = HashingUtils::HashString("s3-recording");


        ConfigCapabilityType GetConfigCapabilityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == antenna_downlink_HASH)
          {
            return ConfigCapabilityType::antenna_downlink;
          }
          else if (hashCode == antenna_downlink_demod_decode_HASH)
          {
            return ConfigCapabilityType::antenna_downlink_demod_decode;
          }
          else if (hashCode == antenna_uplink_HASH)
          {
            return ConfigCapabilityType::antenna_uplink;
          }
          else if (hashCode == dataflow_endpoint_HASH)
          {
            return ConfigCapabilityType::dataflow_endpoint;
          }
          else if (hashCode == tracking_HASH)
          {
            return ConfigCapabilityType::tracking;
          }
          else if (hashCode == uplink_echo_HASH)
          {
            return ConfigCapabilityType::uplink_echo;
          }
          else if (hashCode == s3_recording_HASH)
          {
            return ConfigCapabilityType::s3_recording;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigCapabilityType>(hashCode);
          }

          return ConfigCapabilityType::NOT_SET;
        }

        Aws::String GetNameForConfigCapabilityType(ConfigCapabilityType enumValue)
        {
          switch(enumValue)
          {
          case ConfigCapabilityType::antenna_downlink:
            return "antenna-downlink";
          case ConfigCapabilityType::antenna_downlink_demod_decode:
            return "antenna-downlink-demod-decode";
          case ConfigCapabilityType::antenna_uplink:
            return "antenna-uplink";
          case ConfigCapabilityType::dataflow_endpoint:
            return "dataflow-endpoint";
          case ConfigCapabilityType::tracking:
            return "tracking";
          case ConfigCapabilityType::uplink_echo:
            return "uplink-echo";
          case ConfigCapabilityType::s3_recording:
            return "s3-recording";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigCapabilityTypeMapper
    } // namespace Model
  } // namespace GroundStation
} // namespace Aws
