/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/__PeriodTriggersElement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackage
  {
    namespace Model
    {
      namespace __PeriodTriggersElementMapper
      {

        static const int ADS_HASH = HashingUtils::HashString("ADS");


        __PeriodTriggersElement Get__PeriodTriggersElementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADS_HASH)
          {
            return __PeriodTriggersElement::ADS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<__PeriodTriggersElement>(hashCode);
          }

          return __PeriodTriggersElement::NOT_SET;
        }

        Aws::String GetNameFor__PeriodTriggersElement(__PeriodTriggersElement enumValue)
        {
          switch(enumValue)
          {
          case __PeriodTriggersElement::ADS:
            return "ADS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace __PeriodTriggersElementMapper
    } // namespace Model
  } // namespace MediaPackage
} // namespace Aws
