/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/StageValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DLM
  {
    namespace Model
    {
      namespace StageValuesMapper
      {

        static const int PRE_HASH = HashingUtils::HashString("PRE");
        static const int POST_HASH = HashingUtils::HashString("POST");


        StageValues GetStageValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRE_HASH)
          {
            return StageValues::PRE;
          }
          else if (hashCode == POST_HASH)
          {
            return StageValues::POST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StageValues>(hashCode);
          }

          return StageValues::NOT_SET;
        }

        Aws::String GetNameForStageValues(StageValues enumValue)
        {
          switch(enumValue)
          {
          case StageValues::NOT_SET:
            return {};
          case StageValues::PRE:
            return "PRE";
          case StageValues::POST:
            return "POST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StageValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
