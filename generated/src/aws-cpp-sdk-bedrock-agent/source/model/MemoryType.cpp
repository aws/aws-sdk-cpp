/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MemoryType.h>
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
      namespace MemoryTypeMapper
      {

        static const int SESSION_SUMMARY_HASH = HashingUtils::HashString("SESSION_SUMMARY");


        MemoryType GetMemoryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SESSION_SUMMARY_HASH)
          {
            return MemoryType::SESSION_SUMMARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemoryType>(hashCode);
          }

          return MemoryType::NOT_SET;
        }

        Aws::String GetNameForMemoryType(MemoryType enumValue)
        {
          switch(enumValue)
          {
          case MemoryType::NOT_SET:
            return {};
          case MemoryType::SESSION_SUMMARY:
            return "SESSION_SUMMARY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemoryTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
