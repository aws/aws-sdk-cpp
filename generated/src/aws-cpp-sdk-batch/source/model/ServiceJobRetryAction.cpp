/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceJobRetryAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace ServiceJobRetryActionMapper
      {

        static const int RETRY_HASH = HashingUtils::HashString("RETRY");
        static const int EXIT_HASH = HashingUtils::HashString("EXIT");


        ServiceJobRetryAction GetServiceJobRetryActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RETRY_HASH)
          {
            return ServiceJobRetryAction::RETRY;
          }
          else if (hashCode == EXIT_HASH)
          {
            return ServiceJobRetryAction::EXIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceJobRetryAction>(hashCode);
          }

          return ServiceJobRetryAction::NOT_SET;
        }

        Aws::String GetNameForServiceJobRetryAction(ServiceJobRetryAction enumValue)
        {
          switch(enumValue)
          {
          case ServiceJobRetryAction::NOT_SET:
            return {};
          case ServiceJobRetryAction::RETRY:
            return "RETRY";
          case ServiceJobRetryAction::EXIT:
            return "EXIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceJobRetryActionMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
