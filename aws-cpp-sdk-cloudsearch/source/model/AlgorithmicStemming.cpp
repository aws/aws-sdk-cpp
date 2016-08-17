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
#include <aws/cloudsearch/model/AlgorithmicStemming.h>
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
      namespace AlgorithmicStemmingMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int minimal_HASH = HashingUtils::HashString("minimal");
        static const int light_HASH = HashingUtils::HashString("light");
        static const int full_HASH = HashingUtils::HashString("full");


        AlgorithmicStemming GetAlgorithmicStemmingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return AlgorithmicStemming::none;
          }
          else if (hashCode == minimal_HASH)
          {
            return AlgorithmicStemming::minimal;
          }
          else if (hashCode == light_HASH)
          {
            return AlgorithmicStemming::light;
          }
          else if (hashCode == full_HASH)
          {
            return AlgorithmicStemming::full;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlgorithmicStemming>(hashCode);
          }

          return AlgorithmicStemming::NOT_SET;
        }

        Aws::String GetNameForAlgorithmicStemming(AlgorithmicStemming enumValue)
        {
          switch(enumValue)
          {
          case AlgorithmicStemming::none:
            return "none";
          case AlgorithmicStemming::minimal:
            return "minimal";
          case AlgorithmicStemming::light:
            return "light";
          case AlgorithmicStemming::full:
            return "full";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AlgorithmicStemmingMapper
    } // namespace Model
  } // namespace CloudSearch
} // namespace Aws
