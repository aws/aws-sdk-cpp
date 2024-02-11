/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ContentMuxType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace ContentMuxTypeMapper
      {

        static const int ContentOnly_HASH = HashingUtils::HashString("ContentOnly");


        ContentMuxType GetContentMuxTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ContentOnly_HASH)
          {
            return ContentMuxType::ContentOnly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentMuxType>(hashCode);
          }

          return ContentMuxType::NOT_SET;
        }

        Aws::String GetNameForContentMuxType(ContentMuxType enumValue)
        {
          switch(enumValue)
          {
          case ContentMuxType::NOT_SET:
            return {};
          case ContentMuxType::ContentOnly:
            return "ContentOnly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentMuxTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
