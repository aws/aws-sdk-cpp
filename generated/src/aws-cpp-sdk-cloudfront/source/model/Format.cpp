/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/Format.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace FormatMapper
      {

        static const int URLEncoded_HASH = HashingUtils::HashString("URLEncoded");


        Format GetFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == URLEncoded_HASH)
          {
            return Format::URLEncoded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Format>(hashCode);
          }

          return Format::NOT_SET;
        }

        Aws::String GetNameForFormat(Format enumValue)
        {
          switch(enumValue)
          {
          case Format::URLEncoded:
            return "URLEncoded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormatMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
