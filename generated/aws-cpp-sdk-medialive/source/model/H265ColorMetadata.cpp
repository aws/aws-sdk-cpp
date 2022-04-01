/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265ColorMetadata.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace H265ColorMetadataMapper
      {

        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");
        static const int INSERT_HASH = HashingUtils::HashString("INSERT");


        H265ColorMetadata GetH265ColorMetadataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IGNORE_HASH)
          {
            return H265ColorMetadata::IGNORE;
          }
          else if (hashCode == INSERT_HASH)
          {
            return H265ColorMetadata::INSERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265ColorMetadata>(hashCode);
          }

          return H265ColorMetadata::NOT_SET;
        }

        Aws::String GetNameForH265ColorMetadata(H265ColorMetadata enumValue)
        {
          switch(enumValue)
          {
          case H265ColorMetadata::IGNORE:
            return "IGNORE";
          case H265ColorMetadata::INSERT:
            return "INSERT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265ColorMetadataMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
