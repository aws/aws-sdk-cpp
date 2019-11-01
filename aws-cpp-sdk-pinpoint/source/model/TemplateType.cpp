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

#include <aws/pinpoint/model/TemplateType.h>
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
      namespace TemplateTypeMapper
      {

        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
        static const int SMS_HASH = HashingUtils::HashString("SMS");
        static const int VOICE_HASH = HashingUtils::HashString("VOICE");
        static const int PUSH_HASH = HashingUtils::HashString("PUSH");


        TemplateType GetTemplateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMAIL_HASH)
          {
            return TemplateType::EMAIL;
          }
          else if (hashCode == SMS_HASH)
          {
            return TemplateType::SMS;
          }
          else if (hashCode == VOICE_HASH)
          {
            return TemplateType::VOICE;
          }
          else if (hashCode == PUSH_HASH)
          {
            return TemplateType::PUSH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateType>(hashCode);
          }

          return TemplateType::NOT_SET;
        }

        Aws::String GetNameForTemplateType(TemplateType enumValue)
        {
          switch(enumValue)
          {
          case TemplateType::EMAIL:
            return "EMAIL";
          case TemplateType::SMS:
            return "SMS";
          case TemplateType::VOICE:
            return "VOICE";
          case TemplateType::PUSH:
            return "PUSH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemplateTypeMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
