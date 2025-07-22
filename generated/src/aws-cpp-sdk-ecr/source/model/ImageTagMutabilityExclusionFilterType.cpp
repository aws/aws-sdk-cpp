/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ImageTagMutabilityExclusionFilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace ImageTagMutabilityExclusionFilterTypeMapper
      {

        static const int WILDCARD_HASH = HashingUtils::HashString("WILDCARD");


        ImageTagMutabilityExclusionFilterType GetImageTagMutabilityExclusionFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WILDCARD_HASH)
          {
            return ImageTagMutabilityExclusionFilterType::WILDCARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageTagMutabilityExclusionFilterType>(hashCode);
          }

          return ImageTagMutabilityExclusionFilterType::NOT_SET;
        }

        Aws::String GetNameForImageTagMutabilityExclusionFilterType(ImageTagMutabilityExclusionFilterType enumValue)
        {
          switch(enumValue)
          {
          case ImageTagMutabilityExclusionFilterType::NOT_SET:
            return {};
          case ImageTagMutabilityExclusionFilterType::WILDCARD:
            return "WILDCARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageTagMutabilityExclusionFilterTypeMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
