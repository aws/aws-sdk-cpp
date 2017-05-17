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

#include <aws/codebuild/model/ComputeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace ComputeTypeMapper
      {

        static const int BUILD_GENERAL1_SMALL_HASH = HashingUtils::HashString("BUILD_GENERAL1_SMALL");
        static const int BUILD_GENERAL1_MEDIUM_HASH = HashingUtils::HashString("BUILD_GENERAL1_MEDIUM");
        static const int BUILD_GENERAL1_LARGE_HASH = HashingUtils::HashString("BUILD_GENERAL1_LARGE");


        ComputeType GetComputeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUILD_GENERAL1_SMALL_HASH)
          {
            return ComputeType::BUILD_GENERAL1_SMALL;
          }
          else if (hashCode == BUILD_GENERAL1_MEDIUM_HASH)
          {
            return ComputeType::BUILD_GENERAL1_MEDIUM;
          }
          else if (hashCode == BUILD_GENERAL1_LARGE_HASH)
          {
            return ComputeType::BUILD_GENERAL1_LARGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeType>(hashCode);
          }

          return ComputeType::NOT_SET;
        }

        Aws::String GetNameForComputeType(ComputeType enumValue)
        {
          switch(enumValue)
          {
          case ComputeType::BUILD_GENERAL1_SMALL:
            return "BUILD_GENERAL1_SMALL";
          case ComputeType::BUILD_GENERAL1_MEDIUM:
            return "BUILD_GENERAL1_MEDIUM";
          case ComputeType::BUILD_GENERAL1_LARGE:
            return "BUILD_GENERAL1_LARGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ComputeTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
