/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/LogSubscription.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace LogSubscriptionMapper
      {

        static const int ENABLE_HASH = HashingUtils::HashString("ENABLE");
        static const int DISABLE_HASH = HashingUtils::HashString("DISABLE");


        LogSubscription GetLogSubscriptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLE_HASH)
          {
            return LogSubscription::ENABLE;
          }
          else if (hashCode == DISABLE_HASH)
          {
            return LogSubscription::DISABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogSubscription>(hashCode);
          }

          return LogSubscription::NOT_SET;
        }

        Aws::String GetNameForLogSubscription(LogSubscription enumValue)
        {
          switch(enumValue)
          {
          case LogSubscription::ENABLE:
            return "ENABLE";
          case LogSubscription::DISABLE:
            return "DISABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogSubscriptionMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
