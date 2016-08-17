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
#include <aws/cloudsearch/model/SuggesterFuzzyMatching.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudSearch
  {
    namespace Model
    {
      namespace SuggesterFuzzyMatchingMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int low_HASH = HashingUtils::HashString("low");
        static const int high_HASH = HashingUtils::HashString("high");


        SuggesterFuzzyMatching GetSuggesterFuzzyMatchingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return SuggesterFuzzyMatching::none;
          }
          else if (hashCode == low_HASH)
          {
            return SuggesterFuzzyMatching::low;
          }
          else if (hashCode == high_HASH)
          {
            return SuggesterFuzzyMatching::high;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SuggesterFuzzyMatching>(hashCode);
          }

          return SuggesterFuzzyMatching::NOT_SET;
        }

        Aws::String GetNameForSuggesterFuzzyMatching(SuggesterFuzzyMatching enumValue)
        {
          switch(enumValue)
          {
          case SuggesterFuzzyMatching::none:
            return "none";
          case SuggesterFuzzyMatching::low:
            return "low";
          case SuggesterFuzzyMatching::high:
            return "high";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SuggesterFuzzyMatchingMapper
    } // namespace Model
  } // namespace CloudSearch
} // namespace Aws
