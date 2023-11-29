/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TagOnCreatePolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace TagOnCreatePolicyMapper
      {

        static const int FROM_PARENT_RESOURCE_HASH = HashingUtils::HashString("FROM_PARENT_RESOURCE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        TagOnCreatePolicy GetTagOnCreatePolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FROM_PARENT_RESOURCE_HASH)
          {
            return TagOnCreatePolicy::FROM_PARENT_RESOURCE;
          }
          else if (hashCode == NONE_HASH)
          {
            return TagOnCreatePolicy::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TagOnCreatePolicy>(hashCode);
          }

          return TagOnCreatePolicy::NOT_SET;
        }

        Aws::String GetNameForTagOnCreatePolicy(TagOnCreatePolicy enumValue)
        {
          switch(enumValue)
          {
          case TagOnCreatePolicy::NOT_SET:
            return {};
          case TagOnCreatePolicy::FROM_PARENT_RESOURCE:
            return "FROM_PARENT_RESOURCE";
          case TagOnCreatePolicy::NONE:
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

      } // namespace TagOnCreatePolicyMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
