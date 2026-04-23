/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/chime/model/OrderedPhoneNumberStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace OrderedPhoneNumberStatusMapper
      {

        static const int Processing_HASH = HashingUtils::HashString("Processing");
        static const int Acquired_HASH = HashingUtils::HashString("Acquired");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        OrderedPhoneNumberStatus GetOrderedPhoneNumberStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Processing_HASH)
          {
            return OrderedPhoneNumberStatus::Processing;
          }
          else if (hashCode == Acquired_HASH)
          {
            return OrderedPhoneNumberStatus::Acquired;
          }
          else if (hashCode == Failed_HASH)
          {
            return OrderedPhoneNumberStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrderedPhoneNumberStatus>(hashCode);
          }

          return OrderedPhoneNumberStatus::NOT_SET;
        }

        Aws::String GetNameForOrderedPhoneNumberStatus(OrderedPhoneNumberStatus enumValue)
        {
          switch(enumValue)
          {
          case OrderedPhoneNumberStatus::Processing:
            return "Processing";
          case OrderedPhoneNumberStatus::Acquired:
            return "Acquired";
          case OrderedPhoneNumberStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrderedPhoneNumberStatusMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
