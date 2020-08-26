/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/GoogleAnalyticsConnectorOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace GoogleAnalyticsConnectorOperatorMapper
      {

        static const int PROJECTION_HASH = HashingUtils::HashString("PROJECTION");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");


        GoogleAnalyticsConnectorOperator GetGoogleAnalyticsConnectorOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECTION_HASH)
          {
            return GoogleAnalyticsConnectorOperator::PROJECTION;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return GoogleAnalyticsConnectorOperator::BETWEEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GoogleAnalyticsConnectorOperator>(hashCode);
          }

          return GoogleAnalyticsConnectorOperator::NOT_SET;
        }

        Aws::String GetNameForGoogleAnalyticsConnectorOperator(GoogleAnalyticsConnectorOperator enumValue)
        {
          switch(enumValue)
          {
          case GoogleAnalyticsConnectorOperator::PROJECTION:
            return "PROJECTION";
          case GoogleAnalyticsConnectorOperator::BETWEEN:
            return "BETWEEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GoogleAnalyticsConnectorOperatorMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
