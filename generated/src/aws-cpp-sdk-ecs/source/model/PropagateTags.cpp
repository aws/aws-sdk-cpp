/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/PropagateTags.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace PropagateTagsMapper
      {

        static constexpr uint32_t TASK_DEFINITION_HASH = ConstExprHashingUtils::HashString("TASK_DEFINITION");
        static constexpr uint32_t SERVICE_HASH = ConstExprHashingUtils::HashString("SERVICE");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        PropagateTags GetPropagateTagsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TASK_DEFINITION_HASH)
          {
            return PropagateTags::TASK_DEFINITION;
          }
          else if (hashCode == SERVICE_HASH)
          {
            return PropagateTags::SERVICE;
          }
          else if (hashCode == NONE_HASH)
          {
            return PropagateTags::NONE;
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
          case PropagateTags::NOT_SET:
            return {};
          case PropagateTags::TASK_DEFINITION:
            return "TASK_DEFINITION";
          case PropagateTags::SERVICE:
            return "SERVICE";
          case PropagateTags::NONE:
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

      } // namespace PropagateTagsMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
