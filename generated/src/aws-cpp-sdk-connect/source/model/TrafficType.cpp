/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TrafficType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace TrafficTypeMapper
      {

        static constexpr uint32_t GENERAL_HASH = ConstExprHashingUtils::HashString("GENERAL");
        static constexpr uint32_t CAMPAIGN_HASH = ConstExprHashingUtils::HashString("CAMPAIGN");


        TrafficType GetTrafficTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GENERAL_HASH)
          {
            return TrafficType::GENERAL;
          }
          else if (hashCode == CAMPAIGN_HASH)
          {
            return TrafficType::CAMPAIGN;
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
          case TrafficType::GENERAL:
            return "GENERAL";
          case TrafficType::CAMPAIGN:
            return "CAMPAIGN";
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
  } // namespace Connect
} // namespace Aws
