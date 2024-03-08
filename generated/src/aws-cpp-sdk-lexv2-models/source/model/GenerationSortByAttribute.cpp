/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/GenerationSortByAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace GenerationSortByAttributeMapper
      {

        static const int creationStartTime_HASH = HashingUtils::HashString("creationStartTime");
        static const int lastUpdatedTime_HASH = HashingUtils::HashString("lastUpdatedTime");


        GenerationSortByAttribute GetGenerationSortByAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == creationStartTime_HASH)
          {
            return GenerationSortByAttribute::creationStartTime;
          }
          else if (hashCode == lastUpdatedTime_HASH)
          {
            return GenerationSortByAttribute::lastUpdatedTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GenerationSortByAttribute>(hashCode);
          }

          return GenerationSortByAttribute::NOT_SET;
        }

        Aws::String GetNameForGenerationSortByAttribute(GenerationSortByAttribute enumValue)
        {
          switch(enumValue)
          {
          case GenerationSortByAttribute::NOT_SET:
            return {};
          case GenerationSortByAttribute::creationStartTime:
            return "creationStartTime";
          case GenerationSortByAttribute::lastUpdatedTime:
            return "lastUpdatedTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GenerationSortByAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
