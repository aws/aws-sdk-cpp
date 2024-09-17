/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ResourceAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ResourceActionMapper
      {

        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
        static const int CREATE_HASH = HashingUtils::HashString("CREATE");


        ResourceAction GetResourceActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATE_HASH)
          {
            return ResourceAction::UPDATE;
          }
          else if (hashCode == CREATE_HASH)
          {
            return ResourceAction::CREATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceAction>(hashCode);
          }

          return ResourceAction::NOT_SET;
        }

        Aws::String GetNameForResourceAction(ResourceAction enumValue)
        {
          switch(enumValue)
          {
          case ResourceAction::NOT_SET:
            return {};
          case ResourceAction::UPDATE:
            return "UPDATE";
          case ResourceAction::CREATE:
            return "CREATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceActionMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
