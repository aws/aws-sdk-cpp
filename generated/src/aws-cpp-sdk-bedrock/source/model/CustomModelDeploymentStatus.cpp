/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CustomModelDeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace CustomModelDeploymentStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        CustomModelDeploymentStatus GetCustomModelDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return CustomModelDeploymentStatus::Creating;
          }
          else if (hashCode == Active_HASH)
          {
            return CustomModelDeploymentStatus::Active;
          }
          else if (hashCode == Failed_HASH)
          {
            return CustomModelDeploymentStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomModelDeploymentStatus>(hashCode);
          }

          return CustomModelDeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForCustomModelDeploymentStatus(CustomModelDeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case CustomModelDeploymentStatus::NOT_SET:
            return {};
          case CustomModelDeploymentStatus::Creating:
            return "Creating";
          case CustomModelDeploymentStatus::Active:
            return "Active";
          case CustomModelDeploymentStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomModelDeploymentStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
