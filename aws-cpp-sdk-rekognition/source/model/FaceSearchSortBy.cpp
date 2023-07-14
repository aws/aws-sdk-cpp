/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/FaceSearchSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace FaceSearchSortByMapper
      {

        static const int INDEX_HASH = HashingUtils::HashString("INDEX");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");


        FaceSearchSortBy GetFaceSearchSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INDEX_HASH)
          {
            return FaceSearchSortBy::INDEX;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return FaceSearchSortBy::TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FaceSearchSortBy>(hashCode);
          }

          return FaceSearchSortBy::NOT_SET;
        }

        Aws::String GetNameForFaceSearchSortBy(FaceSearchSortBy enumValue)
        {
          switch(enumValue)
          {
          case FaceSearchSortBy::INDEX:
            return "INDEX";
          case FaceSearchSortBy::TIMESTAMP:
            return "TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FaceSearchSortByMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
