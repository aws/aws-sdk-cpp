/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/StepStateChangeReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace StepStateChangeReasonCodeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");


        StepStateChangeReasonCode GetStepStateChangeReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return StepStateChangeReasonCode::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepStateChangeReasonCode>(hashCode);
          }

          return StepStateChangeReasonCode::NOT_SET;
        }

        Aws::String GetNameForStepStateChangeReasonCode(StepStateChangeReasonCode enumValue)
        {
          switch(enumValue)
          {
          case StepStateChangeReasonCode::NONE:
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

      } // namespace StepStateChangeReasonCodeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
