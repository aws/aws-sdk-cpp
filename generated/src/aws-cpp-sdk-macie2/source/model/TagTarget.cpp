/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/TagTarget.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace TagTargetMapper
      {

        static const int S3_OBJECT_HASH = HashingUtils::HashString("S3_OBJECT");


        TagTarget GetTagTargetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_OBJECT_HASH)
          {
            return TagTarget::S3_OBJECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TagTarget>(hashCode);
          }

          return TagTarget::NOT_SET;
        }

        Aws::String GetNameForTagTarget(TagTarget enumValue)
        {
          switch(enumValue)
          {
          case TagTarget::S3_OBJECT:
            return "S3_OBJECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TagTargetMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
