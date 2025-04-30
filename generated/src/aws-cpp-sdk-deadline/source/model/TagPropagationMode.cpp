/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/TagPropagationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace TagPropagationModeMapper
      {

        static const int NO_PROPAGATION_HASH = HashingUtils::HashString("NO_PROPAGATION");
        static const int PROPAGATE_TAGS_TO_WORKERS_AT_LAUNCH_HASH = HashingUtils::HashString("PROPAGATE_TAGS_TO_WORKERS_AT_LAUNCH");


        TagPropagationMode GetTagPropagationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_PROPAGATION_HASH)
          {
            return TagPropagationMode::NO_PROPAGATION;
          }
          else if (hashCode == PROPAGATE_TAGS_TO_WORKERS_AT_LAUNCH_HASH)
          {
            return TagPropagationMode::PROPAGATE_TAGS_TO_WORKERS_AT_LAUNCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TagPropagationMode>(hashCode);
          }

          return TagPropagationMode::NOT_SET;
        }

        Aws::String GetNameForTagPropagationMode(TagPropagationMode enumValue)
        {
          switch(enumValue)
          {
          case TagPropagationMode::NOT_SET:
            return {};
          case TagPropagationMode::NO_PROPAGATION:
            return "NO_PROPAGATION";
          case TagPropagationMode::PROPAGATE_TAGS_TO_WORKERS_AT_LAUNCH:
            return "PROPAGATE_TAGS_TO_WORKERS_AT_LAUNCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TagPropagationModeMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
