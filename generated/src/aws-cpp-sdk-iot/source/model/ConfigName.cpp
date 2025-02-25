/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ConfigName.h>
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
      namespace ConfigNameMapper
      {

        static const int CERT_AGE_THRESHOLD_IN_DAYS_HASH = HashingUtils::HashString("CERT_AGE_THRESHOLD_IN_DAYS");
        static const int CERT_EXPIRATION_THRESHOLD_IN_DAYS_HASH = HashingUtils::HashString("CERT_EXPIRATION_THRESHOLD_IN_DAYS");


        ConfigName GetConfigNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CERT_AGE_THRESHOLD_IN_DAYS_HASH)
          {
            return ConfigName::CERT_AGE_THRESHOLD_IN_DAYS;
          }
          else if (hashCode == CERT_EXPIRATION_THRESHOLD_IN_DAYS_HASH)
          {
            return ConfigName::CERT_EXPIRATION_THRESHOLD_IN_DAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigName>(hashCode);
          }

          return ConfigName::NOT_SET;
        }

        Aws::String GetNameForConfigName(ConfigName enumValue)
        {
          switch(enumValue)
          {
          case ConfigName::NOT_SET:
            return {};
          case ConfigName::CERT_AGE_THRESHOLD_IN_DAYS:
            return "CERT_AGE_THRESHOLD_IN_DAYS";
          case ConfigName::CERT_EXPIRATION_THRESHOLD_IN_DAYS:
            return "CERT_EXPIRATION_THRESHOLD_IN_DAYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigNameMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
