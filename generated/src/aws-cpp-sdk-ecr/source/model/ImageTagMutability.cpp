/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ImageTagMutability.h>
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
      namespace ImageTagMutabilityMapper
      {

        static constexpr uint32_t MUTABLE_HASH = ConstExprHashingUtils::HashString("MUTABLE");
        static constexpr uint32_t IMMUTABLE_HASH = ConstExprHashingUtils::HashString("IMMUTABLE");


        ImageTagMutability GetImageTagMutabilityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MUTABLE_HASH)
          {
            return ImageTagMutability::MUTABLE;
          }
          else if (hashCode == IMMUTABLE_HASH)
          {
            return ImageTagMutability::IMMUTABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageTagMutability>(hashCode);
          }

          return ImageTagMutability::NOT_SET;
        }

        Aws::String GetNameForImageTagMutability(ImageTagMutability enumValue)
        {
          switch(enumValue)
          {
          case ImageTagMutability::NOT_SET:
            return {};
          case ImageTagMutability::MUTABLE:
            return "MUTABLE";
          case ImageTagMutability::IMMUTABLE:
            return "IMMUTABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageTagMutabilityMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
