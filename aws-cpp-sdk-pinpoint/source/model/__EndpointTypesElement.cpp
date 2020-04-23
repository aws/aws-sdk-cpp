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

#include <aws/pinpoint/model/__EndpointTypesElement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace __EndpointTypesElementMapper
      {

        static const int GCM_HASH = HashingUtils::HashString("GCM");
        static const int APNS_HASH = HashingUtils::HashString("APNS");
        static const int APNS_SANDBOX_HASH = HashingUtils::HashString("APNS_SANDBOX");
        static const int APNS_VOIP_HASH = HashingUtils::HashString("APNS_VOIP");
        static const int APNS_VOIP_SANDBOX_HASH = HashingUtils::HashString("APNS_VOIP_SANDBOX");
        static const int ADM_HASH = HashingUtils::HashString("ADM");
        static const int SMS_HASH = HashingUtils::HashString("SMS");
        static const int VOICE_HASH = HashingUtils::HashString("VOICE");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
        static const int BAIDU_HASH = HashingUtils::HashString("BAIDU");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        __EndpointTypesElement Get__EndpointTypesElementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GCM_HASH)
          {
            return __EndpointTypesElement::GCM;
          }
          else if (hashCode == APNS_HASH)
          {
            return __EndpointTypesElement::APNS;
          }
          else if (hashCode == APNS_SANDBOX_HASH)
          {
            return __EndpointTypesElement::APNS_SANDBOX;
          }
          else if (hashCode == APNS_VOIP_HASH)
          {
            return __EndpointTypesElement::APNS_VOIP;
          }
          else if (hashCode == APNS_VOIP_SANDBOX_HASH)
          {
            return __EndpointTypesElement::APNS_VOIP_SANDBOX;
          }
          else if (hashCode == ADM_HASH)
          {
            return __EndpointTypesElement::ADM;
          }
          else if (hashCode == SMS_HASH)
          {
            return __EndpointTypesElement::SMS;
          }
          else if (hashCode == VOICE_HASH)
          {
            return __EndpointTypesElement::VOICE;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return __EndpointTypesElement::EMAIL;
          }
          else if (hashCode == BAIDU_HASH)
          {
            return __EndpointTypesElement::BAIDU;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return __EndpointTypesElement::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<__EndpointTypesElement>(hashCode);
          }

          return __EndpointTypesElement::NOT_SET;
        }

        Aws::String GetNameFor__EndpointTypesElement(__EndpointTypesElement enumValue)
        {
          switch(enumValue)
          {
          case __EndpointTypesElement::GCM:
            return "GCM";
          case __EndpointTypesElement::APNS:
            return "APNS";
          case __EndpointTypesElement::APNS_SANDBOX:
            return "APNS_SANDBOX";
          case __EndpointTypesElement::APNS_VOIP:
            return "APNS_VOIP";
          case __EndpointTypesElement::APNS_VOIP_SANDBOX:
            return "APNS_VOIP_SANDBOX";
          case __EndpointTypesElement::ADM:
            return "ADM";
          case __EndpointTypesElement::SMS:
            return "SMS";
          case __EndpointTypesElement::VOICE:
            return "VOICE";
          case __EndpointTypesElement::EMAIL:
            return "EMAIL";
          case __EndpointTypesElement::BAIDU:
            return "BAIDU";
          case __EndpointTypesElement::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace __EndpointTypesElementMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
