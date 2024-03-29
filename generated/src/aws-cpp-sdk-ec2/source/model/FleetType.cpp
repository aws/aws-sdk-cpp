﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetType.h>
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
      namespace FleetTypeMapper
      {

        static const int request_HASH = HashingUtils::HashString("request");
        static const int maintain_HASH = HashingUtils::HashString("maintain");
        static const int instant_HASH = HashingUtils::HashString("instant");


        FleetType GetFleetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == request_HASH)
          {
            return FleetType::request;
          }
          else if (hashCode == maintain_HASH)
          {
            return FleetType::maintain;
          }
          else if (hashCode == instant_HASH)
          {
            return FleetType::instant;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetType>(hashCode);
          }

          return FleetType::NOT_SET;
        }

        Aws::String GetNameForFleetType(FleetType enumValue)
        {
          switch(enumValue)
          {
          case FleetType::NOT_SET:
            return {};
          case FleetType::request:
            return "request";
          case FleetType::maintain:
            return "maintain";
          case FleetType::instant:
            return "instant";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
