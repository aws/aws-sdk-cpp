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
