/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ApiCacheType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace ApiCacheTypeMapper
      {

        static const int T2_SMALL_HASH = HashingUtils::HashString("T2_SMALL");
        static const int T2_MEDIUM_HASH = HashingUtils::HashString("T2_MEDIUM");
        static const int R4_LARGE_HASH = HashingUtils::HashString("R4_LARGE");
        static const int R4_XLARGE_HASH = HashingUtils::HashString("R4_XLARGE");
        static const int R4_2XLARGE_HASH = HashingUtils::HashString("R4_2XLARGE");
        static const int R4_4XLARGE_HASH = HashingUtils::HashString("R4_4XLARGE");
        static const int R4_8XLARGE_HASH = HashingUtils::HashString("R4_8XLARGE");
        static const int SMALL_HASH = HashingUtils::HashString("SMALL");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LARGE_HASH = HashingUtils::HashString("LARGE");
        static const int XLARGE_HASH = HashingUtils::HashString("XLARGE");
        static const int LARGE_2X_HASH = HashingUtils::HashString("LARGE_2X");
        static const int LARGE_4X_HASH = HashingUtils::HashString("LARGE_4X");
        static const int LARGE_8X_HASH = HashingUtils::HashString("LARGE_8X");
        static const int LARGE_12X_HASH = HashingUtils::HashString("LARGE_12X");


        ApiCacheType GetApiCacheTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == T2_SMALL_HASH)
          {
            return ApiCacheType::T2_SMALL;
          }
          else if (hashCode == T2_MEDIUM_HASH)
          {
            return ApiCacheType::T2_MEDIUM;
          }
          else if (hashCode == R4_LARGE_HASH)
          {
            return ApiCacheType::R4_LARGE;
          }
          else if (hashCode == R4_XLARGE_HASH)
          {
            return ApiCacheType::R4_XLARGE;
          }
          else if (hashCode == R4_2XLARGE_HASH)
          {
            return ApiCacheType::R4_2XLARGE;
          }
          else if (hashCode == R4_4XLARGE_HASH)
          {
            return ApiCacheType::R4_4XLARGE;
          }
          else if (hashCode == R4_8XLARGE_HASH)
          {
            return ApiCacheType::R4_8XLARGE;
          }
          else if (hashCode == SMALL_HASH)
          {
            return ApiCacheType::SMALL;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return ApiCacheType::MEDIUM;
          }
          else if (hashCode == LARGE_HASH)
          {
            return ApiCacheType::LARGE;
          }
          else if (hashCode == XLARGE_HASH)
          {
            return ApiCacheType::XLARGE;
          }
          else if (hashCode == LARGE_2X_HASH)
          {
            return ApiCacheType::LARGE_2X;
          }
          else if (hashCode == LARGE_4X_HASH)
          {
            return ApiCacheType::LARGE_4X;
          }
          else if (hashCode == LARGE_8X_HASH)
          {
            return ApiCacheType::LARGE_8X;
          }
          else if (hashCode == LARGE_12X_HASH)
          {
            return ApiCacheType::LARGE_12X;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApiCacheType>(hashCode);
          }

          return ApiCacheType::NOT_SET;
        }

        Aws::String GetNameForApiCacheType(ApiCacheType enumValue)
        {
          switch(enumValue)
          {
          case ApiCacheType::T2_SMALL:
            return "T2_SMALL";
          case ApiCacheType::T2_MEDIUM:
            return "T2_MEDIUM";
          case ApiCacheType::R4_LARGE:
            return "R4_LARGE";
          case ApiCacheType::R4_XLARGE:
            return "R4_XLARGE";
          case ApiCacheType::R4_2XLARGE:
            return "R4_2XLARGE";
          case ApiCacheType::R4_4XLARGE:
            return "R4_4XLARGE";
          case ApiCacheType::R4_8XLARGE:
            return "R4_8XLARGE";
          case ApiCacheType::SMALL:
            return "SMALL";
          case ApiCacheType::MEDIUM:
            return "MEDIUM";
          case ApiCacheType::LARGE:
            return "LARGE";
          case ApiCacheType::XLARGE:
            return "XLARGE";
          case ApiCacheType::LARGE_2X:
            return "LARGE_2X";
          case ApiCacheType::LARGE_4X:
            return "LARGE_4X";
          case ApiCacheType::LARGE_8X:
            return "LARGE_8X";
          case ApiCacheType::LARGE_12X:
            return "LARGE_12X";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApiCacheTypeMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
