/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/model/CacheClusterSize.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace CacheClusterSizeMapper
      {

        static const int _0_5_HASH = HashingUtils::HashString("0.5");
        static const int _1_6_HASH = HashingUtils::HashString("1.6");
        static const int _6_1_HASH = HashingUtils::HashString("6.1");
        static const int _13_5_HASH = HashingUtils::HashString("13.5");
        static const int _28_4_HASH = HashingUtils::HashString("28.4");
        static const int _58_2_HASH = HashingUtils::HashString("58.2");
        static const int _118_HASH = HashingUtils::HashString("118");
        static const int _237_HASH = HashingUtils::HashString("237");


        CacheClusterSize GetCacheClusterSizeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == _0_5_HASH)
          {
            return CacheClusterSize::_0_5;
          }
          else if (hashCode == _1_6_HASH)
          {
            return CacheClusterSize::_1_6;
          }
          else if (hashCode == _6_1_HASH)
          {
            return CacheClusterSize::_6_1;
          }
          else if (hashCode == _13_5_HASH)
          {
            return CacheClusterSize::_13_5;
          }
          else if (hashCode == _28_4_HASH)
          {
            return CacheClusterSize::_28_4;
          }
          else if (hashCode == _58_2_HASH)
          {
            return CacheClusterSize::_58_2;
          }
          else if (hashCode == _118_HASH)
          {
            return CacheClusterSize::_118;
          }
          else if (hashCode == _237_HASH)
          {
            return CacheClusterSize::_237;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CacheClusterSize>(hashCode);
          }

          return CacheClusterSize::NOT_SET;
        }

        Aws::String GetNameForCacheClusterSize(CacheClusterSize enumValue)
        {
          switch(enumValue)
          {
          case CacheClusterSize::_0_5:
            return "0.5";
          case CacheClusterSize::_1_6:
            return "1.6";
          case CacheClusterSize::_6_1:
            return "6.1";
          case CacheClusterSize::_13_5:
            return "13.5";
          case CacheClusterSize::_28_4:
            return "28.4";
          case CacheClusterSize::_58_2:
            return "58.2";
          case CacheClusterSize::_118:
            return "118";
          case CacheClusterSize::_237:
            return "237";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace CacheClusterSizeMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
