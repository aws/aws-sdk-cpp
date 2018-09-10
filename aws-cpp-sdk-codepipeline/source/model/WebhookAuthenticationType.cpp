﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codepipeline/model/WebhookAuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace WebhookAuthenticationTypeMapper
      {

        static const int GITHUB_HMAC_HASH = HashingUtils::HashString("GITHUB_HMAC");
        static const int IP_HASH = HashingUtils::HashString("IP");
        static const int UNAUTHENTICATED_HASH = HashingUtils::HashString("UNAUTHENTICATED");


        WebhookAuthenticationType GetWebhookAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GITHUB_HMAC_HASH)
          {
            return WebhookAuthenticationType::GITHUB_HMAC;
          }
          else if (hashCode == IP_HASH)
          {
            return WebhookAuthenticationType::IP;
          }
          else if (hashCode == UNAUTHENTICATED_HASH)
          {
            return WebhookAuthenticationType::UNAUTHENTICATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebhookAuthenticationType>(hashCode);
          }

          return WebhookAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForWebhookAuthenticationType(WebhookAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case WebhookAuthenticationType::GITHUB_HMAC:
            return "GITHUB_HMAC";
          case WebhookAuthenticationType::IP:
            return "IP";
          case WebhookAuthenticationType::UNAUTHENTICATED:
            return "UNAUTHENTICATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace WebhookAuthenticationTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
