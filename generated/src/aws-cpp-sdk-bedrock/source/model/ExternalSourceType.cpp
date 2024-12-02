/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ExternalSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace ExternalSourceTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int BYTE_CONTENT_HASH = HashingUtils::HashString("BYTE_CONTENT");


        ExternalSourceType GetExternalSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return ExternalSourceType::S3;
          }
          else if (hashCode == BYTE_CONTENT_HASH)
          {
            return ExternalSourceType::BYTE_CONTENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExternalSourceType>(hashCode);
          }

          return ExternalSourceType::NOT_SET;
        }

        Aws::String GetNameForExternalSourceType(ExternalSourceType enumValue)
        {
          switch(enumValue)
          {
          case ExternalSourceType::NOT_SET:
            return {};
          case ExternalSourceType::S3:
            return "S3";
          case ExternalSourceType::BYTE_CONTENT:
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

      } // namespace ExternalSourceTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
