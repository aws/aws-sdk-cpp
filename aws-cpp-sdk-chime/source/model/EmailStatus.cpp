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

#include <aws/chime/model/EmailStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace EmailStatusMapper
      {

        static const int NotSent_HASH = HashingUtils::HashString("NotSent");
        static const int Sent_HASH = HashingUtils::HashString("Sent");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        EmailStatus GetEmailStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotSent_HASH)
          {
            return EmailStatus::NotSent;
          }
          else if (hashCode == Sent_HASH)
          {
            return EmailStatus::Sent;
          }
          else if (hashCode == Failed_HASH)
          {
            return EmailStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmailStatus>(hashCode);
          }

          return EmailStatus::NOT_SET;
        }

        Aws::String GetNameForEmailStatus(EmailStatus enumValue)
        {
          switch(enumValue)
          {
          case EmailStatus::NotSent:
            return "NotSent";
          case EmailStatus::Sent:
            return "Sent";
          case EmailStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EmailStatusMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
