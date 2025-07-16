/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/Oauth2FlowType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCore
  {
    namespace Model
    {
      namespace Oauth2FlowTypeMapper
      {

        static const int USER_FEDERATION_HASH = HashingUtils::HashString("USER_FEDERATION");
        static const int M2M_HASH = HashingUtils::HashString("M2M");


        Oauth2FlowType GetOauth2FlowTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_FEDERATION_HASH)
          {
            return Oauth2FlowType::USER_FEDERATION;
          }
          else if (hashCode == M2M_HASH)
          {
            return Oauth2FlowType::M2M;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Oauth2FlowType>(hashCode);
          }

          return Oauth2FlowType::NOT_SET;
        }

        Aws::String GetNameForOauth2FlowType(Oauth2FlowType enumValue)
        {
          switch(enumValue)
          {
          case Oauth2FlowType::NOT_SET:
            return {};
          case Oauth2FlowType::USER_FEDERATION:
            return "USER_FEDERATION";
          case Oauth2FlowType::M2M:
            return "M2M";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Oauth2FlowTypeMapper
    } // namespace Model
  } // namespace BedrockAgentCore
} // namespace Aws
