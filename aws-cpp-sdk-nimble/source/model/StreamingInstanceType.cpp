/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingInstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace StreamingInstanceTypeMapper
      {

        static const int g4dn_xlarge_HASH = HashingUtils::HashString("g4dn.xlarge");
        static const int g4dn_2xlarge_HASH = HashingUtils::HashString("g4dn.2xlarge");
        static const int g4dn_4xlarge_HASH = HashingUtils::HashString("g4dn.4xlarge");
        static const int g4dn_8xlarge_HASH = HashingUtils::HashString("g4dn.8xlarge");
        static const int g4dn_12xlarge_HASH = HashingUtils::HashString("g4dn.12xlarge");
        static const int g4dn_16xlarge_HASH = HashingUtils::HashString("g4dn.16xlarge");
        static const int g3_4xlarge_HASH = HashingUtils::HashString("g3.4xlarge");
        static const int g3s_xlarge_HASH = HashingUtils::HashString("g3s.xlarge");
        static const int g5_xlarge_HASH = HashingUtils::HashString("g5.xlarge");
        static const int g5_2xlarge_HASH = HashingUtils::HashString("g5.2xlarge");
        static const int g5_4xlarge_HASH = HashingUtils::HashString("g5.4xlarge");
        static const int g5_8xlarge_HASH = HashingUtils::HashString("g5.8xlarge");
        static const int g5_16xlarge_HASH = HashingUtils::HashString("g5.16xlarge");


        StreamingInstanceType GetStreamingInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == g4dn_xlarge_HASH)
          {
            return StreamingInstanceType::g4dn_xlarge;
          }
          else if (hashCode == g4dn_2xlarge_HASH)
          {
            return StreamingInstanceType::g4dn_2xlarge;
          }
          else if (hashCode == g4dn_4xlarge_HASH)
          {
            return StreamingInstanceType::g4dn_4xlarge;
          }
          else if (hashCode == g4dn_8xlarge_HASH)
          {
            return StreamingInstanceType::g4dn_8xlarge;
          }
          else if (hashCode == g4dn_12xlarge_HASH)
          {
            return StreamingInstanceType::g4dn_12xlarge;
          }
          else if (hashCode == g4dn_16xlarge_HASH)
          {
            return StreamingInstanceType::g4dn_16xlarge;
          }
          else if (hashCode == g3_4xlarge_HASH)
          {
            return StreamingInstanceType::g3_4xlarge;
          }
          else if (hashCode == g3s_xlarge_HASH)
          {
            return StreamingInstanceType::g3s_xlarge;
          }
          else if (hashCode == g5_xlarge_HASH)
          {
            return StreamingInstanceType::g5_xlarge;
          }
          else if (hashCode == g5_2xlarge_HASH)
          {
            return StreamingInstanceType::g5_2xlarge;
          }
          else if (hashCode == g5_4xlarge_HASH)
          {
            return StreamingInstanceType::g5_4xlarge;
          }
          else if (hashCode == g5_8xlarge_HASH)
          {
            return StreamingInstanceType::g5_8xlarge;
          }
          else if (hashCode == g5_16xlarge_HASH)
          {
            return StreamingInstanceType::g5_16xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingInstanceType>(hashCode);
          }

          return StreamingInstanceType::NOT_SET;
        }

        Aws::String GetNameForStreamingInstanceType(StreamingInstanceType enumValue)
        {
          switch(enumValue)
          {
          case StreamingInstanceType::g4dn_xlarge:
            return "g4dn.xlarge";
          case StreamingInstanceType::g4dn_2xlarge:
            return "g4dn.2xlarge";
          case StreamingInstanceType::g4dn_4xlarge:
            return "g4dn.4xlarge";
          case StreamingInstanceType::g4dn_8xlarge:
            return "g4dn.8xlarge";
          case StreamingInstanceType::g4dn_12xlarge:
            return "g4dn.12xlarge";
          case StreamingInstanceType::g4dn_16xlarge:
            return "g4dn.16xlarge";
          case StreamingInstanceType::g3_4xlarge:
            return "g3.4xlarge";
          case StreamingInstanceType::g3s_xlarge:
            return "g3s.xlarge";
          case StreamingInstanceType::g5_xlarge:
            return "g5.xlarge";
          case StreamingInstanceType::g5_2xlarge:
            return "g5.2xlarge";
          case StreamingInstanceType::g5_4xlarge:
            return "g5.4xlarge";
          case StreamingInstanceType::g5_8xlarge:
            return "g5.8xlarge";
          case StreamingInstanceType::g5_16xlarge:
            return "g5.16xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamingInstanceTypeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
