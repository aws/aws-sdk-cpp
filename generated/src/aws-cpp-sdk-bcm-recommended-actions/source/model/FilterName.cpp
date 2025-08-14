/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-recommended-actions/model/FilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMRecommendedActions
  {
    namespace Model
    {
      namespace FilterNameMapper
      {

        static const int FEATURE_HASH = HashingUtils::HashString("FEATURE");
        static const int SEVERITY_HASH = HashingUtils::HashString("SEVERITY");
        static const int TYPE_HASH = HashingUtils::HashString("TYPE");


        FilterName GetFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FEATURE_HASH)
          {
            return FilterName::FEATURE;
          }
          else if (hashCode == SEVERITY_HASH)
          {
            return FilterName::SEVERITY;
          }
          else if (hashCode == TYPE_HASH)
          {
            return FilterName::TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterName>(hashCode);
          }

          return FilterName::NOT_SET;
        }

        Aws::String GetNameForFilterName(FilterName enumValue)
        {
          switch(enumValue)
          {
          case FilterName::NOT_SET:
            return {};
          case FilterName::FEATURE:
            return "FEATURE";
          case FilterName::SEVERITY:
            return "SEVERITY";
          case FilterName::TYPE:
            return "TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterNameMapper
    } // namespace Model
  } // namespace BCMRecommendedActions
} // namespace Aws
