/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileCacheLustreDeploymentType.h>
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
      namespace FileCacheLustreDeploymentTypeMapper
      {

        static const int CACHE_1_HASH = HashingUtils::HashString("CACHE_1");


        FileCacheLustreDeploymentType GetFileCacheLustreDeploymentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CACHE_1_HASH)
          {
            return FileCacheLustreDeploymentType::CACHE_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileCacheLustreDeploymentType>(hashCode);
          }

          return FileCacheLustreDeploymentType::NOT_SET;
        }

        Aws::String GetNameForFileCacheLustreDeploymentType(FileCacheLustreDeploymentType enumValue)
        {
          switch(enumValue)
          {
          case FileCacheLustreDeploymentType::CACHE_1:
            return "CACHE_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileCacheLustreDeploymentTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
