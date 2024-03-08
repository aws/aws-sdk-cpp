/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ServiceNowAuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace ServiceNowAuthenticationTypeMapper
      {

        static const int HTTP_BASIC_HASH = HashingUtils::HashString("HTTP_BASIC");
        static const int OAUTH2_HASH = HashingUtils::HashString("OAUTH2");


        ServiceNowAuthenticationType GetServiceNowAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_BASIC_HASH)
          {
            return ServiceNowAuthenticationType::HTTP_BASIC;
          }
          else if (hashCode == OAUTH2_HASH)
          {
            return ServiceNowAuthenticationType::OAUTH2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceNowAuthenticationType>(hashCode);
          }

          return ServiceNowAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForServiceNowAuthenticationType(ServiceNowAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case ServiceNowAuthenticationType::NOT_SET:
            return {};
          case ServiceNowAuthenticationType::HTTP_BASIC:
            return "HTTP_BASIC";
          case ServiceNowAuthenticationType::OAUTH2:
            return "OAUTH2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceNowAuthenticationTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
