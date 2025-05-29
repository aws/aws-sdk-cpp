/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/BuildComputeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Amplify
  {
    namespace Model
    {
      namespace BuildComputeTypeMapper
      {

        static const int STANDARD_8GB_HASH = HashingUtils::HashString("STANDARD_8GB");
        static const int LARGE_16GB_HASH = HashingUtils::HashString("LARGE_16GB");
        static const int XLARGE_72GB_HASH = HashingUtils::HashString("XLARGE_72GB");


        BuildComputeType GetBuildComputeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_8GB_HASH)
          {
            return BuildComputeType::STANDARD_8GB;
          }
          else if (hashCode == LARGE_16GB_HASH)
          {
            return BuildComputeType::LARGE_16GB;
          }
          else if (hashCode == XLARGE_72GB_HASH)
          {
            return BuildComputeType::XLARGE_72GB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BuildComputeType>(hashCode);
          }

          return BuildComputeType::NOT_SET;
        }

        Aws::String GetNameForBuildComputeType(BuildComputeType enumValue)
        {
          switch(enumValue)
          {
          case BuildComputeType::NOT_SET:
            return {};
          case BuildComputeType::STANDARD_8GB:
            return "STANDARD_8GB";
          case BuildComputeType::LARGE_16GB:
            return "LARGE_16GB";
          case BuildComputeType::XLARGE_72GB:
            return "XLARGE_72GB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BuildComputeTypeMapper
    } // namespace Model
  } // namespace Amplify
} // namespace Aws
