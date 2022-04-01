/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264ColorMetadata.h>
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
      namespace H264ColorMetadataMapper
      {

        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");
        static const int INSERT_HASH = HashingUtils::HashString("INSERT");


        H264ColorMetadata GetH264ColorMetadataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IGNORE_HASH)
          {
            return H264ColorMetadata::IGNORE;
          }
          else if (hashCode == INSERT_HASH)
          {
            return H264ColorMetadata::INSERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264ColorMetadata>(hashCode);
          }

          return H264ColorMetadata::NOT_SET;
        }

        Aws::String GetNameForH264ColorMetadata(H264ColorMetadata enumValue)
        {
          switch(enumValue)
          {
          case H264ColorMetadata::IGNORE:
            return "IGNORE";
          case H264ColorMetadata::INSERT:
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

      } // namespace H264ColorMetadataMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
