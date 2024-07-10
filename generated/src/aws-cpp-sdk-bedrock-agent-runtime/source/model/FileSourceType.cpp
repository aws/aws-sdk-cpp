/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FileSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentRuntime
  {
    namespace Model
    {
      namespace FileSourceTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int BYTE_CONTENT_HASH = HashingUtils::HashString("BYTE_CONTENT");


        FileSourceType GetFileSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return FileSourceType::S3;
          }
          else if (hashCode == BYTE_CONTENT_HASH)
          {
            return FileSourceType::BYTE_CONTENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileSourceType>(hashCode);
          }

          return FileSourceType::NOT_SET;
        }

        Aws::String GetNameForFileSourceType(FileSourceType enumValue)
        {
          switch(enumValue)
          {
          case FileSourceType::NOT_SET:
            return {};
          case FileSourceType::S3:
            return "S3";
          case FileSourceType::BYTE_CONTENT:
            return "BYTE_CONTENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileSourceTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
