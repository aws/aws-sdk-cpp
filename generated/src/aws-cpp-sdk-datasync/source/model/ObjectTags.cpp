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

        static constexpr uint32_t PRESERVE_HASH = ConstExprHashingUtils::HashString("PRESERVE");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        ObjectTags GetObjectTagsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
