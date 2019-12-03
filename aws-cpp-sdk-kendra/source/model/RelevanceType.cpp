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

#include <aws/kendra/model/RelevanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace RelevanceTypeMapper
      {

        static const int RELEVANT_HASH = HashingUtils::HashString("RELEVANT");
        static const int NOT_RELEVANT_HASH = HashingUtils::HashString("NOT_RELEVANT");


        RelevanceType GetRelevanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RELEVANT_HASH)
          {
            return RelevanceType::RELEVANT;
          }
          else if (hashCode == NOT_RELEVANT_HASH)
          {
            return RelevanceType::NOT_RELEVANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelevanceType>(hashCode);
          }

          return RelevanceType::NOT_SET;
        }

        Aws::String GetNameForRelevanceType(RelevanceType enumValue)
        {
          switch(enumValue)
          {
          case RelevanceType::RELEVANT:
            return "RELEVANT";
          case RelevanceType::NOT_RELEVANT:
            return "NOT_RELEVANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelevanceTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
