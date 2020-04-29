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

#include <aws/iotsitewise/model/ListAssetsFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace ListAssetsFilterMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int TOP_LEVEL_HASH = HashingUtils::HashString("TOP_LEVEL");


        ListAssetsFilter GetListAssetsFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return ListAssetsFilter::ALL;
          }
          else if (hashCode == TOP_LEVEL_HASH)
          {
            return ListAssetsFilter::TOP_LEVEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListAssetsFilter>(hashCode);
          }

          return ListAssetsFilter::NOT_SET;
        }

        Aws::String GetNameForListAssetsFilter(ListAssetsFilter enumValue)
        {
          switch(enumValue)
          {
          case ListAssetsFilter::ALL:
            return "ALL";
          case ListAssetsFilter::TOP_LEVEL:
            return "TOP_LEVEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListAssetsFilterMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
