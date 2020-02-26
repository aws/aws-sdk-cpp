/*
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

#include <aws/securityhub/model/IntegrationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace IntegrationTypeMapper
      {

        static const int SEND_FINDINGS_TO_SECURITY_HUB_HASH = HashingUtils::HashString("SEND_FINDINGS_TO_SECURITY_HUB");
        static const int RECEIVE_FINDINGS_FROM_SECURITY_HUB_HASH = HashingUtils::HashString("RECEIVE_FINDINGS_FROM_SECURITY_HUB");


        IntegrationType GetIntegrationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEND_FINDINGS_TO_SECURITY_HUB_HASH)
          {
            return IntegrationType::SEND_FINDINGS_TO_SECURITY_HUB;
          }
          else if (hashCode == RECEIVE_FINDINGS_FROM_SECURITY_HUB_HASH)
          {
            return IntegrationType::RECEIVE_FINDINGS_FROM_SECURITY_HUB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntegrationType>(hashCode);
          }

          return IntegrationType::NOT_SET;
        }

        Aws::String GetNameForIntegrationType(IntegrationType enumValue)
        {
          switch(enumValue)
          {
          case IntegrationType::SEND_FINDINGS_TO_SECURITY_HUB:
            return "SEND_FINDINGS_TO_SECURITY_HUB";
          case IntegrationType::RECEIVE_FINDINGS_FROM_SECURITY_HUB:
            return "RECEIVE_FINDINGS_FROM_SECURITY_HUB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntegrationTypeMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
