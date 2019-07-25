/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
