/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/IngestionJobFilterAttribute.h>
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
      namespace IngestionJobFilterAttributeMapper
      {

        static const int STATUS_HASH = HashingUtils::HashString("STATUS");


        IngestionJobFilterAttribute GetIngestionJobFilterAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATUS_HASH)
          {
            return IngestionJobFilterAttribute::STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionJobFilterAttribute>(hashCode);
          }

          return IngestionJobFilterAttribute::NOT_SET;
        }

        Aws::String GetNameForIngestionJobFilterAttribute(IngestionJobFilterAttribute enumValue)
        {
          switch(enumValue)
          {
          case IngestionJobFilterAttribute::NOT_SET:
            return {};
          case IngestionJobFilterAttribute::STATUS:
            return "STATUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestionJobFilterAttributeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
