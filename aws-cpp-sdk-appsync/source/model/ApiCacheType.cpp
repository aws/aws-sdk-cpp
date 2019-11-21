/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
