/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/OfferingTransactionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace OfferingTransactionTypeMapper
      {

        static const int PURCHASE_HASH = HashingUtils::HashString("PURCHASE");
        static const int RENEW_HASH = HashingUtils::HashString("RENEW");
        static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");


        OfferingTransactionType GetOfferingTransactionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PURCHASE_HASH)
          {
            return OfferingTransactionType::PURCHASE;
          }
          else if (hashCode == RENEW_HASH)
          {
            return OfferingTransactionType::RENEW;
          }
          else if (hashCode == SYSTEM_HASH)
          {
            return OfferingTransactionType::SYSTEM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OfferingTransactionType>(hashCode);
          }

          return OfferingTransactionType::NOT_SET;
        }

        Aws::String GetNameForOfferingTransactionType(OfferingTransactionType enumValue)
        {
          switch(enumValue)
          {
          case OfferingTransactionType::PURCHASE:
            return "PURCHASE";
          case OfferingTransactionType::RENEW:
            return "RENEW";
          case OfferingTransactionType::SYSTEM:
            return "SYSTEM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OfferingTransactionTypeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
