/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AutomatedDiscoveryAccountUpdateErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace AutomatedDiscoveryAccountUpdateErrorCodeMapper
      {

        static const int ACCOUNT_PAUSED_HASH = HashingUtils::HashString("ACCOUNT_PAUSED");
        static const int ACCOUNT_NOT_FOUND_HASH = HashingUtils::HashString("ACCOUNT_NOT_FOUND");


        AutomatedDiscoveryAccountUpdateErrorCode GetAutomatedDiscoveryAccountUpdateErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_PAUSED_HASH)
          {
            return AutomatedDiscoveryAccountUpdateErrorCode::ACCOUNT_PAUSED;
          }
          else if (hashCode == ACCOUNT_NOT_FOUND_HASH)
          {
            return AutomatedDiscoveryAccountUpdateErrorCode::ACCOUNT_NOT_FOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedDiscoveryAccountUpdateErrorCode>(hashCode);
          }

          return AutomatedDiscoveryAccountUpdateErrorCode::NOT_SET;
        }

        Aws::String GetNameForAutomatedDiscoveryAccountUpdateErrorCode(AutomatedDiscoveryAccountUpdateErrorCode enumValue)
        {
          switch(enumValue)
          {
          case AutomatedDiscoveryAccountUpdateErrorCode::NOT_SET:
            return {};
          case AutomatedDiscoveryAccountUpdateErrorCode::ACCOUNT_PAUSED:
            return "ACCOUNT_PAUSED";
          case AutomatedDiscoveryAccountUpdateErrorCode::ACCOUNT_NOT_FOUND:
            return "ACCOUNT_NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomatedDiscoveryAccountUpdateErrorCodeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
