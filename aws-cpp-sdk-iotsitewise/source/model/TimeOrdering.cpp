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

#include <aws/iotsitewise/model/TimeOrdering.h>
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
      namespace TimeOrderingMapper
      {

        static const int ASCENDING_HASH = HashingUtils::HashString("ASCENDING");
        static const int DESCENDING_HASH = HashingUtils::HashString("DESCENDING");


        TimeOrdering GetTimeOrderingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASCENDING_HASH)
          {
            return TimeOrdering::ASCENDING;
          }
          else if (hashCode == DESCENDING_HASH)
          {
            return TimeOrdering::DESCENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeOrdering>(hashCode);
          }

          return TimeOrdering::NOT_SET;
        }

        Aws::String GetNameForTimeOrdering(TimeOrdering enumValue)
        {
          switch(enumValue)
          {
          case TimeOrdering::ASCENDING:
            return "ASCENDING";
          case TimeOrdering::DESCENDING:
            return "DESCENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeOrderingMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
