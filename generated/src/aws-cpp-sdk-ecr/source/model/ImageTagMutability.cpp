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

        static const int MUTABLE_HASH = HashingUtils::HashString("MUTABLE");
        static const int IMMUTABLE_HASH = HashingUtils::HashString("IMMUTABLE");
        static const int IMMUTABLE_WITH_EXCLUSION_HASH = HashingUtils::HashString("IMMUTABLE_WITH_EXCLUSION");
        static const int MUTABLE_WITH_EXCLUSION_HASH = HashingUtils::HashString("MUTABLE_WITH_EXCLUSION");


        ImageTagMutability GetImageTagMutabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MUTABLE_HASH)
          {
            return ImageTagMutability::MUTABLE;
          }
          else if (hashCode == IMMUTABLE_HASH)
          {
            return ImageTagMutability::IMMUTABLE;
          }
          else if (hashCode == IMMUTABLE_WITH_EXCLUSION_HASH)
          {
            return ImageTagMutability::IMMUTABLE_WITH_EXCLUSION;
          }
          else if (hashCode == MUTABLE_WITH_EXCLUSION_HASH)
          {
            return ImageTagMutability::MUTABLE_WITH_EXCLUSION;
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
          case ImageTagMutability::IMMUTABLE_WITH_EXCLUSION:
            return "IMMUTABLE_WITH_EXCLUSION";
          case ImageTagMutability::MUTABLE_WITH_EXCLUSION:
            return "MUTABLE_WITH_EXCLUSION";
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
