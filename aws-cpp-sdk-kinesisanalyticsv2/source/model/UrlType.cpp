/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/UrlType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
  {
    namespace Model
    {
      namespace UrlTypeMapper
      {

        static const int FLINK_DASHBOARD_URL_HASH = HashingUtils::HashString("FLINK_DASHBOARD_URL");


        UrlType GetUrlTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLINK_DASHBOARD_URL_HASH)
          {
            return UrlType::FLINK_DASHBOARD_URL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UrlType>(hashCode);
          }

          return UrlType::NOT_SET;
        }

        Aws::String GetNameForUrlType(UrlType enumValue)
        {
          switch(enumValue)
          {
          case UrlType::FLINK_DASHBOARD_URL:
            return "FLINK_DASHBOARD_URL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UrlTypeMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
