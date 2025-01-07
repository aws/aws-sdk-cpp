/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ThumbnailStorageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace ThumbnailStorageTypeMapper
      {

        static const int SEQUENTIAL_HASH = HashingUtils::HashString("SEQUENTIAL");
        static const int LATEST_HASH = HashingUtils::HashString("LATEST");


        ThumbnailStorageType GetThumbnailStorageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEQUENTIAL_HASH)
          {
            return ThumbnailStorageType::SEQUENTIAL;
          }
          else if (hashCode == LATEST_HASH)
          {
            return ThumbnailStorageType::LATEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThumbnailStorageType>(hashCode);
          }

          return ThumbnailStorageType::NOT_SET;
        }

        Aws::String GetNameForThumbnailStorageType(ThumbnailStorageType enumValue)
        {
          switch(enumValue)
          {
          case ThumbnailStorageType::NOT_SET:
            return {};
          case ThumbnailStorageType::SEQUENTIAL:
            return "SEQUENTIAL";
          case ThumbnailStorageType::LATEST:
            return "LATEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThumbnailStorageTypeMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
