/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/IngestionJobSortByAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace IngestionJobSortByAttributeMapper
      {

        static const int STATUS_HASH = HashingUtils::HashString("STATUS");
        static const int STARTED_AT_HASH = HashingUtils::HashString("STARTED_AT");


        IngestionJobSortByAttribute GetIngestionJobSortByAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATUS_HASH)
          {
            return IngestionJobSortByAttribute::STATUS;
          }
          else if (hashCode == STARTED_AT_HASH)
          {
            return IngestionJobSortByAttribute::STARTED_AT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionJobSortByAttribute>(hashCode);
          }

          return IngestionJobSortByAttribute::NOT_SET;
        }

        Aws::String GetNameForIngestionJobSortByAttribute(IngestionJobSortByAttribute enumValue)
        {
          switch(enumValue)
          {
          case IngestionJobSortByAttribute::NOT_SET:
            return {};
          case IngestionJobSortByAttribute::STATUS:
            return "STATUS";
          case IngestionJobSortByAttribute::STARTED_AT:
            return "STARTED_AT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestionJobSortByAttributeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
