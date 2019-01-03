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

#include <aws/acm/model/RenewalEligibility.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace RenewalEligibilityMapper
      {

        static const int ELIGIBLE_HASH = HashingUtils::HashString("ELIGIBLE");
        static const int INELIGIBLE_HASH = HashingUtils::HashString("INELIGIBLE");


        RenewalEligibility GetRenewalEligibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ELIGIBLE_HASH)
          {
            return RenewalEligibility::ELIGIBLE;
          }
          else if (hashCode == INELIGIBLE_HASH)
          {
            return RenewalEligibility::INELIGIBLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RenewalEligibility>(hashCode);
          }

          return RenewalEligibility::NOT_SET;
        }

        Aws::String GetNameForRenewalEligibility(RenewalEligibility enumValue)
        {
          switch(enumValue)
          {
          case RenewalEligibility::ELIGIBLE:
            return "ELIGIBLE";
          case RenewalEligibility::INELIGIBLE:
            return "INELIGIBLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RenewalEligibilityMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
