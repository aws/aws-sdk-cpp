/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/model/StreamViewType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace StreamViewTypeMapper
      {

        static const int NEW_IMAGE_HASH = HashingUtils::HashString("NEW_IMAGE");
        static const int OLD_IMAGE_HASH = HashingUtils::HashString("OLD_IMAGE");
        static const int NEW_AND_OLD_IMAGES_HASH = HashingUtils::HashString("NEW_AND_OLD_IMAGES");
        static const int KEYS_ONLY_HASH = HashingUtils::HashString("KEYS_ONLY");


        StreamViewType GetStreamViewTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW_IMAGE_HASH)
          {
            return StreamViewType::NEW_IMAGE;
          }
          else if (hashCode == OLD_IMAGE_HASH)
          {
            return StreamViewType::OLD_IMAGE;
          }
          else if (hashCode == NEW_AND_OLD_IMAGES_HASH)
          {
            return StreamViewType::NEW_AND_OLD_IMAGES;
          }
          else if (hashCode == KEYS_ONLY_HASH)
          {
            return StreamViewType::KEYS_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamViewType>(hashCode);
          }

          return StreamViewType::NOT_SET;
        }

        Aws::String GetNameForStreamViewType(StreamViewType enumValue)
        {
          switch(enumValue)
          {
          case StreamViewType::NEW_IMAGE:
            return "NEW_IMAGE";
          case StreamViewType::OLD_IMAGE:
            return "OLD_IMAGE";
          case StreamViewType::NEW_AND_OLD_IMAGES:
            return "NEW_AND_OLD_IMAGES";
          case StreamViewType::KEYS_ONLY:
            return "KEYS_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace StreamViewTypeMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
