/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ImageActionType.h>
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
      namespace ImageActionTypeMapper
      {

        static const int EXPIRE_HASH = HashingUtils::HashString("EXPIRE");


        ImageActionType GetImageActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXPIRE_HASH)
          {
            return ImageActionType::EXPIRE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageActionType>(hashCode);
          }

          return ImageActionType::NOT_SET;
        }

        Aws::String GetNameForImageActionType(ImageActionType enumValue)
        {
          switch(enumValue)
          {
          case ImageActionType::EXPIRE:
            return "EXPIRE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageActionTypeMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
