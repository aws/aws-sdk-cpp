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

#include <aws/mediaconvert/model/DescribeEndpointsMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace DescribeEndpointsModeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int GET_ONLY_HASH = HashingUtils::HashString("GET_ONLY");


        DescribeEndpointsMode GetDescribeEndpointsModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return DescribeEndpointsMode::DEFAULT;
          }
          else if (hashCode == GET_ONLY_HASH)
          {
            return DescribeEndpointsMode::GET_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DescribeEndpointsMode>(hashCode);
          }

          return DescribeEndpointsMode::NOT_SET;
        }

        Aws::String GetNameForDescribeEndpointsMode(DescribeEndpointsMode enumValue)
        {
          switch(enumValue)
          {
          case DescribeEndpointsMode::DEFAULT:
            return "DEFAULT";
          case DescribeEndpointsMode::GET_ONLY:
            return "GET_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DescribeEndpointsModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
