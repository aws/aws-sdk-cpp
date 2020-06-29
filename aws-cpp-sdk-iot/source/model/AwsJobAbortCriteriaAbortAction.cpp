/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AwsJobAbortCriteriaAbortAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace AwsJobAbortCriteriaAbortActionMapper
      {

        static const int CANCEL_HASH = HashingUtils::HashString("CANCEL");


        AwsJobAbortCriteriaAbortAction GetAwsJobAbortCriteriaAbortActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CANCEL_HASH)
          {
            return AwsJobAbortCriteriaAbortAction::CANCEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AwsJobAbortCriteriaAbortAction>(hashCode);
          }

          return AwsJobAbortCriteriaAbortAction::NOT_SET;
        }

        Aws::String GetNameForAwsJobAbortCriteriaAbortAction(AwsJobAbortCriteriaAbortAction enumValue)
        {
          switch(enumValue)
          {
          case AwsJobAbortCriteriaAbortAction::CANCEL:
            return "CANCEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AwsJobAbortCriteriaAbortActionMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
