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
#include <aws/marketplacecommerceanalytics/model/SupportDataSetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MarketplaceCommerceAnalytics
  {
    namespace Model
    {
      namespace SupportDataSetTypeMapper
      {

        static const int customer_support_contacts_data_HASH = HashingUtils::HashString("customer_support_contacts_data");
        static const int test_customer_support_contacts_data_HASH = HashingUtils::HashString("test_customer_support_contacts_data");


        SupportDataSetType GetSupportDataSetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == customer_support_contacts_data_HASH)
          {
            return SupportDataSetType::customer_support_contacts_data;
          }
          else if (hashCode == test_customer_support_contacts_data_HASH)
          {
            return SupportDataSetType::test_customer_support_contacts_data;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SupportDataSetType>(hashCode);
          }

          return SupportDataSetType::NOT_SET;
        }

        Aws::String GetNameForSupportDataSetType(SupportDataSetType enumValue)
        {
          switch(enumValue)
          {
          case SupportDataSetType::customer_support_contacts_data:
            return "customer_support_contacts_data";
          case SupportDataSetType::test_customer_support_contacts_data:
            return "test_customer_support_contacts_data";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SupportDataSetTypeMapper
    } // namespace Model
  } // namespace MarketplaceCommerceAnalytics
} // namespace Aws
