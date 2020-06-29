/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/CreateAccountState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace CreateAccountStateMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        CreateAccountState GetCreateAccountStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return CreateAccountState::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return CreateAccountState::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CreateAccountState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CreateAccountState>(hashCode);
          }

          return CreateAccountState::NOT_SET;
        }

        Aws::String GetNameForCreateAccountState(CreateAccountState enumValue)
        {
          switch(enumValue)
          {
          case CreateAccountState::IN_PROGRESS:
            return "IN_PROGRESS";
          case CreateAccountState::SUCCEEDED:
            return "SUCCEEDED";
          case CreateAccountState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CreateAccountStateMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
