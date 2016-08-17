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
#include <aws/config/model/DeliveryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace DeliveryStatusMapper
      {

        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Failure_HASH = HashingUtils::HashString("Failure");
        static const int Not_Applicable_HASH = HashingUtils::HashString("Not_Applicable");


        DeliveryStatus GetDeliveryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Success_HASH)
          {
            return DeliveryStatus::Success;
          }
          else if (hashCode == Failure_HASH)
          {
            return DeliveryStatus::Failure;
          }
          else if (hashCode == Not_Applicable_HASH)
          {
            return DeliveryStatus::Not_Applicable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryStatus>(hashCode);
          }

          return DeliveryStatus::NOT_SET;
        }

        Aws::String GetNameForDeliveryStatus(DeliveryStatus enumValue)
        {
          switch(enumValue)
          {
          case DeliveryStatus::Success:
            return "Success";
          case DeliveryStatus::Failure:
            return "Failure";
          case DeliveryStatus::Not_Applicable:
            return "Not_Applicable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DeliveryStatusMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
