/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSDeploymentType.h>
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
      namespace OpenZFSDeploymentTypeMapper
      {

        static constexpr uint32_t SINGLE_AZ_1_HASH = ConstExprHashingUtils::HashString("SINGLE_AZ_1");
        static constexpr uint32_t SINGLE_AZ_2_HASH = ConstExprHashingUtils::HashString("SINGLE_AZ_2");
        static constexpr uint32_t MULTI_AZ_1_HASH = ConstExprHashingUtils::HashString("MULTI_AZ_1");


        OpenZFSDeploymentType GetOpenZFSDeploymentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_AZ_1_HASH)
          {
            return OpenZFSDeploymentType::SINGLE_AZ_1;
          }
          else if (hashCode == SINGLE_AZ_2_HASH)
          {
            return OpenZFSDeploymentType::SINGLE_AZ_2;
          }
          else if (hashCode == MULTI_AZ_1_HASH)
          {
            return OpenZFSDeploymentType::MULTI_AZ_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpenZFSDeploymentType>(hashCode);
          }

          return OpenZFSDeploymentType::NOT_SET;
        }

        Aws::String GetNameForOpenZFSDeploymentType(OpenZFSDeploymentType enumValue)
        {
          switch(enumValue)
          {
          case OpenZFSDeploymentType::NOT_SET:
            return {};
          case OpenZFSDeploymentType::SINGLE_AZ_1:
            return "SINGLE_AZ_1";
          case OpenZFSDeploymentType::SINGLE_AZ_2:
            return "SINGLE_AZ_2";
          case OpenZFSDeploymentType::MULTI_AZ_1:
            return "MULTI_AZ_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpenZFSDeploymentTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
