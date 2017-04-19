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
#include <aws/lex-models/model/ChannelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace ChannelTypeMapper
      {

        static const int Facebook_HASH = HashingUtils::HashString("Facebook");
        static const int Slack_HASH = HashingUtils::HashString("Slack");
        static const int Twilio_Sms_HASH = HashingUtils::HashString("Twilio-Sms");


        ChannelType GetChannelTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Facebook_HASH)
          {
            return ChannelType::Facebook;
          }
          else if (hashCode == Slack_HASH)
          {
            return ChannelType::Slack;
          }
          else if (hashCode == Twilio_Sms_HASH)
          {
            return ChannelType::Twilio_Sms;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelType>(hashCode);
          }

          return ChannelType::NOT_SET;
        }

        Aws::String GetNameForChannelType(ChannelType enumValue)
        {
          switch(enumValue)
          {
          case ChannelType::Facebook:
            return "Facebook";
          case ChannelType::Slack:
            return "Slack";
          case ChannelType::Twilio_Sms:
            return "Twilio-Sms";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ChannelTypeMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
