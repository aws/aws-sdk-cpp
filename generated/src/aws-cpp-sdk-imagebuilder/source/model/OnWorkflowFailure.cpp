/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/OnWorkflowFailure.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace OnWorkflowFailureMapper
      {

        static const int CONTINUE_HASH = HashingUtils::HashString("CONTINUE");
        static const int ABORT_HASH = HashingUtils::HashString("ABORT");


        OnWorkflowFailure GetOnWorkflowFailureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTINUE_HASH)
          {
            return OnWorkflowFailure::CONTINUE;
          }
          else if (hashCode == ABORT_HASH)
          {
            return OnWorkflowFailure::ABORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OnWorkflowFailure>(hashCode);
          }

          return OnWorkflowFailure::NOT_SET;
        }

        Aws::String GetNameForOnWorkflowFailure(OnWorkflowFailure enumValue)
        {
          switch(enumValue)
          {
          case OnWorkflowFailure::NOT_SET:
            return {};
          case OnWorkflowFailure::CONTINUE:
            return "CONTINUE";
          case OnWorkflowFailure::ABORT:
            return "ABORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OnWorkflowFailureMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
