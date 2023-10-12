/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SubscriberType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace SubscriberTypeMapper
      {

        static constexpr uint32_t EMAIL_HASH = ConstExprHashingUtils::HashString("EMAIL");
        static constexpr uint32_t SNS_HASH = ConstExprHashingUtils::HashString("SNS");


        SubscriberType GetSubscriberTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMAIL_HASH)
          {
            return SubscriberType::EMAIL;
          }
          else if (hashCode == SNS_HASH)
          {
            return SubscriberType::SNS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriberType>(hashCode);
          }

          return SubscriberType::NOT_SET;
        }

        Aws::String GetNameForSubscriberType(SubscriberType enumValue)
        {
          switch(enumValue)
          {
          case SubscriberType::NOT_SET:
            return {};
          case SubscriberType::EMAIL:
            return "EMAIL";
          case SubscriberType::SNS:
            return "SNS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubscriberTypeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
