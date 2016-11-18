/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-idp/model/ExplicitAuthFlowsType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace ExplicitAuthFlowsTypeMapper
      {

        static const int ADMIN_NO_SRP_AUTH_HASH = HashingUtils::HashString("ADMIN_NO_SRP_AUTH");
        static const int CUSTOM_AUTH_FLOW_ONLY_HASH = HashingUtils::HashString("CUSTOM_AUTH_FLOW_ONLY");


        ExplicitAuthFlowsType GetExplicitAuthFlowsTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADMIN_NO_SRP_AUTH_HASH)
          {
            return ExplicitAuthFlowsType::ADMIN_NO_SRP_AUTH;
          }
          else if (hashCode == CUSTOM_AUTH_FLOW_ONLY_HASH)
          {
            return ExplicitAuthFlowsType::CUSTOM_AUTH_FLOW_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExplicitAuthFlowsType>(hashCode);
          }

          return ExplicitAuthFlowsType::NOT_SET;
        }

        Aws::String GetNameForExplicitAuthFlowsType(ExplicitAuthFlowsType enumValue)
        {
          switch(enumValue)
          {
          case ExplicitAuthFlowsType::ADMIN_NO_SRP_AUTH:
            return "ADMIN_NO_SRP_AUTH";
          case ExplicitAuthFlowsType::CUSTOM_AUTH_FLOW_ONLY:
            return "CUSTOM_AUTH_FLOW_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ExplicitAuthFlowsTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
