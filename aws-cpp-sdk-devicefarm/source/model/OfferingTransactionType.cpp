/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

            return "";
          }
        }

      } // namespace OfferingTransactionTypeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
