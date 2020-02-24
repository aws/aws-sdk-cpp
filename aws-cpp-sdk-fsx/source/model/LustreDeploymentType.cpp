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

#include <aws/fsx/model/LustreDeploymentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace LustreDeploymentTypeMapper
      {

        static const int SCRATCH_1_HASH = HashingUtils::HashString("SCRATCH_1");
        static const int SCRATCH_2_HASH = HashingUtils::HashString("SCRATCH_2");
        static const int PERSISTENT_1_HASH = HashingUtils::HashString("PERSISTENT_1");


        LustreDeploymentType GetLustreDeploymentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCRATCH_1_HASH)
          {
            return LustreDeploymentType::SCRATCH_1;
          }
          else if (hashCode == SCRATCH_2_HASH)
          {
            return LustreDeploymentType::SCRATCH_2;
          }
          else if (hashCode == PERSISTENT_1_HASH)
          {
            return LustreDeploymentType::PERSISTENT_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LustreDeploymentType>(hashCode);
          }

          return LustreDeploymentType::NOT_SET;
        }

        Aws::String GetNameForLustreDeploymentType(LustreDeploymentType enumValue)
        {
          switch(enumValue)
          {
          case LustreDeploymentType::SCRATCH_1:
            return "SCRATCH_1";
          case LustreDeploymentType::SCRATCH_2:
            return "SCRATCH_2";
          case LustreDeploymentType::PERSISTENT_1:
            return "PERSISTENT_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LustreDeploymentTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
