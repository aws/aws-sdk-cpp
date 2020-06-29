/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerGroupInstanceType.h>
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
      namespace GameServerGroupInstanceTypeMapper
      {

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


        GameServerGroupInstanceType GetGameServerGroupInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == c4_large_HASH)
          {
            return GameServerGroupInstanceType::c4_large;
          }
          else if (hashCode == c4_xlarge_HASH)
          {
            return GameServerGroupInstanceType::c4_xlarge;
          }
          else if (hashCode == c4_2xlarge_HASH)
          {
            return GameServerGroupInstanceType::c4_2xlarge;
          }
          else if (hashCode == c4_4xlarge_HASH)
          {
            return GameServerGroupInstanceType::c4_4xlarge;
          }
          else if (hashCode == c4_8xlarge_HASH)
          {
            return GameServerGroupInstanceType::c4_8xlarge;
          }
          else if (hashCode == c5_large_HASH)
          {
            return GameServerGroupInstanceType::c5_large;
          }
          else if (hashCode == c5_xlarge_HASH)
          {
            return GameServerGroupInstanceType::c5_xlarge;
          }
          else if (hashCode == c5_2xlarge_HASH)
          {
            return GameServerGroupInstanceType::c5_2xlarge;
          }
          else if (hashCode == c5_4xlarge_HASH)
          {
            return GameServerGroupInstanceType::c5_4xlarge;
          }
          else if (hashCode == c5_9xlarge_HASH)
          {
            return GameServerGroupInstanceType::c5_9xlarge;
          }
          else if (hashCode == c5_12xlarge_HASH)
          {
            return GameServerGroupInstanceType::c5_12xlarge;
          }
          else if (hashCode == c5_18xlarge_HASH)
          {
            return GameServerGroupInstanceType::c5_18xlarge;
          }
          else if (hashCode == c5_24xlarge_HASH)
          {
            return GameServerGroupInstanceType::c5_24xlarge;
          }
          else if (hashCode == r4_large_HASH)
          {
            return GameServerGroupInstanceType::r4_large;
          }
          else if (hashCode == r4_xlarge_HASH)
          {
            return GameServerGroupInstanceType::r4_xlarge;
          }
          else if (hashCode == r4_2xlarge_HASH)
          {
            return GameServerGroupInstanceType::r4_2xlarge;
          }
          else if (hashCode == r4_4xlarge_HASH)
          {
            return GameServerGroupInstanceType::r4_4xlarge;
          }
          else if (hashCode == r4_8xlarge_HASH)
          {
            return GameServerGroupInstanceType::r4_8xlarge;
          }
          else if (hashCode == r4_16xlarge_HASH)
          {
            return GameServerGroupInstanceType::r4_16xlarge;
          }
          else if (hashCode == r5_large_HASH)
          {
            return GameServerGroupInstanceType::r5_large;
          }
          else if (hashCode == r5_xlarge_HASH)
          {
            return GameServerGroupInstanceType::r5_xlarge;
          }
          else if (hashCode == r5_2xlarge_HASH)
          {
            return GameServerGroupInstanceType::r5_2xlarge;
          }
          else if (hashCode == r5_4xlarge_HASH)
          {
            return GameServerGroupInstanceType::r5_4xlarge;
          }
          else if (hashCode == r5_8xlarge_HASH)
          {
            return GameServerGroupInstanceType::r5_8xlarge;
          }
          else if (hashCode == r5_12xlarge_HASH)
          {
            return GameServerGroupInstanceType::r5_12xlarge;
          }
          else if (hashCode == r5_16xlarge_HASH)
          {
            return GameServerGroupInstanceType::r5_16xlarge;
          }
          else if (hashCode == r5_24xlarge_HASH)
          {
            return GameServerGroupInstanceType::r5_24xlarge;
          }
          else if (hashCode == m4_large_HASH)
          {
            return GameServerGroupInstanceType::m4_large;
          }
          else if (hashCode == m4_xlarge_HASH)
          {
            return GameServerGroupInstanceType::m4_xlarge;
          }
          else if (hashCode == m4_2xlarge_HASH)
          {
            return GameServerGroupInstanceType::m4_2xlarge;
          }
          else if (hashCode == m4_4xlarge_HASH)
          {
            return GameServerGroupInstanceType::m4_4xlarge;
          }
          else if (hashCode == m4_10xlarge_HASH)
          {
            return GameServerGroupInstanceType::m4_10xlarge;
          }
          else if (hashCode == m5_large_HASH)
          {
            return GameServerGroupInstanceType::m5_large;
          }
          else if (hashCode == m5_xlarge_HASH)
          {
            return GameServerGroupInstanceType::m5_xlarge;
          }
          else if (hashCode == m5_2xlarge_HASH)
          {
            return GameServerGroupInstanceType::m5_2xlarge;
          }
          else if (hashCode == m5_4xlarge_HASH)
          {
            return GameServerGroupInstanceType::m5_4xlarge;
          }
          else if (hashCode == m5_8xlarge_HASH)
          {
            return GameServerGroupInstanceType::m5_8xlarge;
          }
          else if (hashCode == m5_12xlarge_HASH)
          {
            return GameServerGroupInstanceType::m5_12xlarge;
          }
          else if (hashCode == m5_16xlarge_HASH)
          {
            return GameServerGroupInstanceType::m5_16xlarge;
          }
          else if (hashCode == m5_24xlarge_HASH)
          {
            return GameServerGroupInstanceType::m5_24xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameServerGroupInstanceType>(hashCode);
          }

          return GameServerGroupInstanceType::NOT_SET;
        }

        Aws::String GetNameForGameServerGroupInstanceType(GameServerGroupInstanceType enumValue)
        {
          switch(enumValue)
          {
          case GameServerGroupInstanceType::c4_large:
            return "c4.large";
          case GameServerGroupInstanceType::c4_xlarge:
            return "c4.xlarge";
          case GameServerGroupInstanceType::c4_2xlarge:
            return "c4.2xlarge";
          case GameServerGroupInstanceType::c4_4xlarge:
            return "c4.4xlarge";
          case GameServerGroupInstanceType::c4_8xlarge:
            return "c4.8xlarge";
          case GameServerGroupInstanceType::c5_large:
            return "c5.large";
          case GameServerGroupInstanceType::c5_xlarge:
            return "c5.xlarge";
          case GameServerGroupInstanceType::c5_2xlarge:
            return "c5.2xlarge";
          case GameServerGroupInstanceType::c5_4xlarge:
            return "c5.4xlarge";
          case GameServerGroupInstanceType::c5_9xlarge:
            return "c5.9xlarge";
          case GameServerGroupInstanceType::c5_12xlarge:
            return "c5.12xlarge";
          case GameServerGroupInstanceType::c5_18xlarge:
            return "c5.18xlarge";
          case GameServerGroupInstanceType::c5_24xlarge:
            return "c5.24xlarge";
          case GameServerGroupInstanceType::r4_large:
            return "r4.large";
          case GameServerGroupInstanceType::r4_xlarge:
            return "r4.xlarge";
          case GameServerGroupInstanceType::r4_2xlarge:
            return "r4.2xlarge";
          case GameServerGroupInstanceType::r4_4xlarge:
            return "r4.4xlarge";
          case GameServerGroupInstanceType::r4_8xlarge:
            return "r4.8xlarge";
          case GameServerGroupInstanceType::r4_16xlarge:
            return "r4.16xlarge";
          case GameServerGroupInstanceType::r5_large:
            return "r5.large";
          case GameServerGroupInstanceType::r5_xlarge:
            return "r5.xlarge";
          case GameServerGroupInstanceType::r5_2xlarge:
            return "r5.2xlarge";
          case GameServerGroupInstanceType::r5_4xlarge:
            return "r5.4xlarge";
          case GameServerGroupInstanceType::r5_8xlarge:
            return "r5.8xlarge";
          case GameServerGroupInstanceType::r5_12xlarge:
            return "r5.12xlarge";
          case GameServerGroupInstanceType::r5_16xlarge:
            return "r5.16xlarge";
          case GameServerGroupInstanceType::r5_24xlarge:
            return "r5.24xlarge";
          case GameServerGroupInstanceType::m4_large:
            return "m4.large";
          case GameServerGroupInstanceType::m4_xlarge:
            return "m4.xlarge";
          case GameServerGroupInstanceType::m4_2xlarge:
            return "m4.2xlarge";
          case GameServerGroupInstanceType::m4_4xlarge:
            return "m4.4xlarge";
          case GameServerGroupInstanceType::m4_10xlarge:
            return "m4.10xlarge";
          case GameServerGroupInstanceType::m5_large:
            return "m5.large";
          case GameServerGroupInstanceType::m5_xlarge:
            return "m5.xlarge";
          case GameServerGroupInstanceType::m5_2xlarge:
            return "m5.2xlarge";
          case GameServerGroupInstanceType::m5_4xlarge:
            return "m5.4xlarge";
          case GameServerGroupInstanceType::m5_8xlarge:
            return "m5.8xlarge";
          case GameServerGroupInstanceType::m5_12xlarge:
            return "m5.12xlarge";
          case GameServerGroupInstanceType::m5_16xlarge:
            return "m5.16xlarge";
          case GameServerGroupInstanceType::m5_24xlarge:
            return "m5.24xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GameServerGroupInstanceTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
