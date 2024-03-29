﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TrafficType.h>
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
      namespace TrafficTypeMapper
      {

        static const int ACCEPT_HASH = HashingUtils::HashString("ACCEPT");
        static const int REJECT_HASH = HashingUtils::HashString("REJECT");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        TrafficType GetTrafficTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCEPT_HASH)
          {
            return TrafficType::ACCEPT;
          }
          else if (hashCode == REJECT_HASH)
          {
            return TrafficType::REJECT;
          }
          else if (hashCode == ALL_HASH)
          {
            return TrafficType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrafficType>(hashCode);
          }

          return TrafficType::NOT_SET;
        }

        Aws::String GetNameForTrafficType(TrafficType enumValue)
        {
          switch(enumValue)
          {
          case TrafficType::NOT_SET:
            return {};
          case TrafficType::ACCEPT:
            return "ACCEPT";
          case TrafficType::REJECT:
            return "REJECT";
          case TrafficType::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrafficTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
