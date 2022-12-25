/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PropagateTags.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace PropagateTagsMapper
      {

        static const int TASK_DEFINITION_HASH = HashingUtils::HashString("TASK_DEFINITION");


        PropagateTags GetPropagateTagsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TASK_DEFINITION_HASH)
          {
            return PropagateTags::TASK_DEFINITION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PropagateTags>(hashCode);
          }

          return PropagateTags::NOT_SET;
        }

        Aws::String GetNameForPropagateTags(PropagateTags enumValue)
        {
          switch(enumValue)
          {
          case PropagateTags::TASK_DEFINITION:
            return "TASK_DEFINITION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PropagateTagsMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
