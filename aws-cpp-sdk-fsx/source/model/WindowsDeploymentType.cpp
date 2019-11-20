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

#include <aws/fsx/model/WindowsDeploymentType.h>
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
      namespace WindowsDeploymentTypeMapper
      {

        static const int MULTI_AZ_1_HASH = HashingUtils::HashString("MULTI_AZ_1");
        static const int SINGLE_AZ_1_HASH = HashingUtils::HashString("SINGLE_AZ_1");


        WindowsDeploymentType GetWindowsDeploymentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MULTI_AZ_1_HASH)
          {
            return WindowsDeploymentType::MULTI_AZ_1;
          }
          else if (hashCode == SINGLE_AZ_1_HASH)
          {
            return WindowsDeploymentType::SINGLE_AZ_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WindowsDeploymentType>(hashCode);
          }

          return WindowsDeploymentType::NOT_SET;
        }

        Aws::String GetNameForWindowsDeploymentType(WindowsDeploymentType enumValue)
        {
          switch(enumValue)
          {
          case WindowsDeploymentType::MULTI_AZ_1:
            return "MULTI_AZ_1";
          case WindowsDeploymentType::SINGLE_AZ_1:
            return "SINGLE_AZ_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WindowsDeploymentTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
