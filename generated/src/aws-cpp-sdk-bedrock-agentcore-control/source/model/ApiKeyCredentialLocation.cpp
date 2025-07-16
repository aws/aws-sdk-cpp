/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ApiKeyCredentialLocation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCoreControl
  {
    namespace Model
    {
      namespace ApiKeyCredentialLocationMapper
      {

        static const int HEADER_HASH = HashingUtils::HashString("HEADER");
        static const int QUERY_PARAMETER_HASH = HashingUtils::HashString("QUERY_PARAMETER");


        ApiKeyCredentialLocation GetApiKeyCredentialLocationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEADER_HASH)
          {
            return ApiKeyCredentialLocation::HEADER;
          }
          else if (hashCode == QUERY_PARAMETER_HASH)
          {
            return ApiKeyCredentialLocation::QUERY_PARAMETER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApiKeyCredentialLocation>(hashCode);
          }

          return ApiKeyCredentialLocation::NOT_SET;
        }

        Aws::String GetNameForApiKeyCredentialLocation(ApiKeyCredentialLocation enumValue)
        {
          switch(enumValue)
          {
          case ApiKeyCredentialLocation::NOT_SET:
            return {};
          case ApiKeyCredentialLocation::HEADER:
            return "HEADER";
          case ApiKeyCredentialLocation::QUERY_PARAMETER:
            return "QUERY_PARAMETER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApiKeyCredentialLocationMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
