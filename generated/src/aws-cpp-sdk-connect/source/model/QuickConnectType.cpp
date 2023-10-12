/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/QuickConnectType.h>
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
      namespace QuickConnectTypeMapper
      {

        static constexpr uint32_t USER_HASH = ConstExprHashingUtils::HashString("USER");
        static constexpr uint32_t QUEUE_HASH = ConstExprHashingUtils::HashString("QUEUE");
        static constexpr uint32_t PHONE_NUMBER_HASH = ConstExprHashingUtils::HashString("PHONE_NUMBER");


        QuickConnectType GetQuickConnectTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return QuickConnectType::USER;
          }
          else if (hashCode == QUEUE_HASH)
          {
            return QuickConnectType::QUEUE;
          }
          else if (hashCode == PHONE_NUMBER_HASH)
          {
            return QuickConnectType::PHONE_NUMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QuickConnectType>(hashCode);
          }

          return QuickConnectType::NOT_SET;
        }

        Aws::String GetNameForQuickConnectType(QuickConnectType enumValue)
        {
          switch(enumValue)
          {
          case QuickConnectType::NOT_SET:
            return {};
          case QuickConnectType::USER:
            return "USER";
          case QuickConnectType::QUEUE:
            return "QUEUE";
          case QuickConnectType::PHONE_NUMBER:
            return "PHONE_NUMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QuickConnectTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
