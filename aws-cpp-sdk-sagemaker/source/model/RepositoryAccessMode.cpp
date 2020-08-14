/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RepositoryAccessMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace RepositoryAccessModeMapper
      {

        static const int Platform_HASH = HashingUtils::HashString("Platform");
        static const int Vpc_HASH = HashingUtils::HashString("Vpc");


        RepositoryAccessMode GetRepositoryAccessModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Platform_HASH)
          {
            return RepositoryAccessMode::Platform;
          }
          else if (hashCode == Vpc_HASH)
          {
            return RepositoryAccessMode::Vpc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RepositoryAccessMode>(hashCode);
          }

          return RepositoryAccessMode::NOT_SET;
        }

        Aws::String GetNameForRepositoryAccessMode(RepositoryAccessMode enumValue)
        {
          switch(enumValue)
          {
          case RepositoryAccessMode::Platform:
            return "Platform";
          case RepositoryAccessMode::Vpc:
            return "Vpc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RepositoryAccessModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
