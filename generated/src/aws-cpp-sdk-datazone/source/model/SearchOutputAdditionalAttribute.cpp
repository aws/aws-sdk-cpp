/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SearchOutputAdditionalAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace SearchOutputAdditionalAttributeMapper
      {

        static const int FORMS_HASH = HashingUtils::HashString("FORMS");
        static const int TIME_SERIES_DATA_POINT_FORMS_HASH = HashingUtils::HashString("TIME_SERIES_DATA_POINT_FORMS");


        SearchOutputAdditionalAttribute GetSearchOutputAdditionalAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FORMS_HASH)
          {
            return SearchOutputAdditionalAttribute::FORMS;
          }
          else if (hashCode == TIME_SERIES_DATA_POINT_FORMS_HASH)
          {
            return SearchOutputAdditionalAttribute::TIME_SERIES_DATA_POINT_FORMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchOutputAdditionalAttribute>(hashCode);
          }

          return SearchOutputAdditionalAttribute::NOT_SET;
        }

        Aws::String GetNameForSearchOutputAdditionalAttribute(SearchOutputAdditionalAttribute enumValue)
        {
          switch(enumValue)
          {
          case SearchOutputAdditionalAttribute::NOT_SET:
            return {};
          case SearchOutputAdditionalAttribute::FORMS:
            return "FORMS";
          case SearchOutputAdditionalAttribute::TIME_SERIES_DATA_POINT_FORMS:
            return "TIME_SERIES_DATA_POINT_FORMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchOutputAdditionalAttributeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
