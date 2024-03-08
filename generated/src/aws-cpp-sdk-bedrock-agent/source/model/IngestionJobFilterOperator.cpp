/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/IngestionJobFilterOperator.h>
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
      namespace IngestionJobFilterOperatorMapper
      {

        static const int EQ_HASH = HashingUtils::HashString("EQ");


        IngestionJobFilterOperator GetIngestionJobFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQ_HASH)
          {
            return IngestionJobFilterOperator::EQ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionJobFilterOperator>(hashCode);
          }

          return IngestionJobFilterOperator::NOT_SET;
        }

        Aws::String GetNameForIngestionJobFilterOperator(IngestionJobFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case IngestionJobFilterOperator::NOT_SET:
            return {};
          case IngestionJobFilterOperator::EQ:
            return "EQ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestionJobFilterOperatorMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
