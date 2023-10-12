/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/TriggeredBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfig
  {
    namespace Model
    {
      namespace TriggeredByMapper
      {

        static constexpr uint32_t USER_HASH = ConstExprHashingUtils::HashString("USER");
        static constexpr uint32_t APPCONFIG_HASH = ConstExprHashingUtils::HashString("APPCONFIG");
        static constexpr uint32_t CLOUDWATCH_ALARM_HASH = ConstExprHashingUtils::HashString("CLOUDWATCH_ALARM");
        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");


        TriggeredBy GetTriggeredByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return TriggeredBy::USER;
          }
          else if (hashCode == APPCONFIG_HASH)
          {
            return TriggeredBy::APPCONFIG;
          }
          else if (hashCode == CLOUDWATCH_ALARM_HASH)
          {
            return TriggeredBy::CLOUDWATCH_ALARM;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return TriggeredBy::INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TriggeredBy>(hashCode);
          }

          return TriggeredBy::NOT_SET;
        }

        Aws::String GetNameForTriggeredBy(TriggeredBy enumValue)
        {
          switch(enumValue)
          {
          case TriggeredBy::NOT_SET:
            return {};
          case TriggeredBy::USER:
            return "USER";
          case TriggeredBy::APPCONFIG:
            return "APPCONFIG";
          case TriggeredBy::CLOUDWATCH_ALARM:
            return "CLOUDWATCH_ALARM";
          case TriggeredBy::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TriggeredByMapper
    } // namespace Model
  } // namespace AppConfig
} // namespace Aws
