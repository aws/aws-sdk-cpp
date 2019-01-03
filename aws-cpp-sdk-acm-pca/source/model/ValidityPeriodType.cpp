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

#include <aws/acm-pca/model/ValidityPeriodType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace ValidityPeriodTypeMapper
      {

        static const int END_DATE_HASH = HashingUtils::HashString("END_DATE");
        static const int ABSOLUTE_HASH = HashingUtils::HashString("ABSOLUTE");
        static const int DAYS_HASH = HashingUtils::HashString("DAYS");
        static const int MONTHS_HASH = HashingUtils::HashString("MONTHS");
        static const int YEARS_HASH = HashingUtils::HashString("YEARS");


        ValidityPeriodType GetValidityPeriodTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == END_DATE_HASH)
          {
            return ValidityPeriodType::END_DATE;
          }
          else if (hashCode == ABSOLUTE_HASH)
          {
            return ValidityPeriodType::ABSOLUTE;
          }
          else if (hashCode == DAYS_HASH)
          {
            return ValidityPeriodType::DAYS;
          }
          else if (hashCode == MONTHS_HASH)
          {
            return ValidityPeriodType::MONTHS;
          }
          else if (hashCode == YEARS_HASH)
          {
            return ValidityPeriodType::YEARS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidityPeriodType>(hashCode);
          }

          return ValidityPeriodType::NOT_SET;
        }

        Aws::String GetNameForValidityPeriodType(ValidityPeriodType enumValue)
        {
          switch(enumValue)
          {
          case ValidityPeriodType::END_DATE:
            return "END_DATE";
          case ValidityPeriodType::ABSOLUTE:
            return "ABSOLUTE";
          case ValidityPeriodType::DAYS:
            return "DAYS";
          case ValidityPeriodType::MONTHS:
            return "MONTHS";
          case ValidityPeriodType::YEARS:
            return "YEARS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidityPeriodTypeMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
