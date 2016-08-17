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
#include <aws/devicefarm/model/BillingMethod.h>
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
      namespace BillingMethodMapper
      {

        static const int METERED_HASH = HashingUtils::HashString("METERED");
        static const int UNMETERED_HASH = HashingUtils::HashString("UNMETERED");


        BillingMethod GetBillingMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == METERED_HASH)
          {
            return BillingMethod::METERED;
          }
          else if (hashCode == UNMETERED_HASH)
          {
            return BillingMethod::UNMETERED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BillingMethod>(hashCode);
          }

          return BillingMethod::NOT_SET;
        }

        Aws::String GetNameForBillingMethod(BillingMethod enumValue)
        {
          switch(enumValue)
          {
          case BillingMethod::METERED:
            return "METERED";
          case BillingMethod::UNMETERED:
            return "UNMETERED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace BillingMethodMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
