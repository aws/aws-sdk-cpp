/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageReferenceOptionName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ImageReferenceOptionNameMapper
      {

        static const int state_name_HASH = HashingUtils::HashString("state-name");
        static const int version_depth_HASH = HashingUtils::HashString("version-depth");


        ImageReferenceOptionName GetImageReferenceOptionNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == state_name_HASH)
          {
            return ImageReferenceOptionName::state_name;
          }
          else if (hashCode == version_depth_HASH)
          {
            return ImageReferenceOptionName::version_depth;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageReferenceOptionName>(hashCode);
          }

          return ImageReferenceOptionName::NOT_SET;
        }

        Aws::String GetNameForImageReferenceOptionName(ImageReferenceOptionName enumValue)
        {
          switch(enumValue)
          {
          case ImageReferenceOptionName::NOT_SET:
            return {};
          case ImageReferenceOptionName::state_name:
            return "state-name";
          case ImageReferenceOptionName::version_depth:
            return "version-depth";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageReferenceOptionNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
