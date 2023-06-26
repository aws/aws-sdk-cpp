/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int SINGLE_AZ_2_HASH = HashingUtils::HashString("SINGLE_AZ_2");


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
          else if (hashCode == SINGLE_AZ_2_HASH)
          {
            return WindowsDeploymentType::SINGLE_AZ_2;
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
          case WindowsDeploymentType::SINGLE_AZ_2:
            return "SINGLE_AZ_2";
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
