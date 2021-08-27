/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/EnvironmentFileType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace EnvironmentFileTypeMapper
      {

        static const int s3_HASH = HashingUtils::HashString("s3");


        EnvironmentFileType GetEnvironmentFileTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == s3_HASH)
          {
            return EnvironmentFileType::s3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentFileType>(hashCode);
          }

          return EnvironmentFileType::NOT_SET;
        }

        Aws::String GetNameForEnvironmentFileType(EnvironmentFileType enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentFileType::s3:
            return "s3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentFileTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
