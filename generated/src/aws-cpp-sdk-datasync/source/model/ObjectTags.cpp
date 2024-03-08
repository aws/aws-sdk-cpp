/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ObjectTags.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace ObjectTagsMapper
      {

        static const int PRESERVE_HASH = HashingUtils::HashString("PRESERVE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ObjectTags GetObjectTagsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRESERVE_HASH)
          {
            return ObjectTags::PRESERVE;
          }
          else if (hashCode == NONE_HASH)
          {
            return ObjectTags::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectTags>(hashCode);
          }

          return ObjectTags::NOT_SET;
        }

        Aws::String GetNameForObjectTags(ObjectTags enumValue)
        {
          switch(enumValue)
          {
          case ObjectTags::NOT_SET:
            return {};
          case ObjectTags::PRESERVE:
            return "PRESERVE";
          case ObjectTags::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectTagsMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
