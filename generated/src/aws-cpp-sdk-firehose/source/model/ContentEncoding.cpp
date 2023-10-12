/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ContentEncoding.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace ContentEncodingMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t GZIP_HASH = ConstExprHashingUtils::HashString("GZIP");


        ContentEncoding GetContentEncodingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ContentEncoding::NONE;
          }
          else if (hashCode == GZIP_HASH)
          {
            return ContentEncoding::GZIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentEncoding>(hashCode);
          }

          return ContentEncoding::NOT_SET;
        }

        Aws::String GetNameForContentEncoding(ContentEncoding enumValue)
        {
          switch(enumValue)
          {
          case ContentEncoding::NOT_SET:
            return {};
          case ContentEncoding::NONE:
            return "NONE";
          case ContentEncoding::GZIP:
            return "GZIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentEncodingMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
