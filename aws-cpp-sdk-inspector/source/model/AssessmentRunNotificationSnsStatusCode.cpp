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

#include <aws/inspector/model/AssessmentRunNotificationSnsStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace AssessmentRunNotificationSnsStatusCodeMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int TOPIC_DOES_NOT_EXIST_HASH = HashingUtils::HashString("TOPIC_DOES_NOT_EXIST");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");


        AssessmentRunNotificationSnsStatusCode GetAssessmentRunNotificationSnsStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return AssessmentRunNotificationSnsStatusCode::SUCCESS;
          }
          else if (hashCode == TOPIC_DOES_NOT_EXIST_HASH)
          {
            return AssessmentRunNotificationSnsStatusCode::TOPIC_DOES_NOT_EXIST;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return AssessmentRunNotificationSnsStatusCode::ACCESS_DENIED;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return AssessmentRunNotificationSnsStatusCode::INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssessmentRunNotificationSnsStatusCode>(hashCode);
          }

          return AssessmentRunNotificationSnsStatusCode::NOT_SET;
        }

        Aws::String GetNameForAssessmentRunNotificationSnsStatusCode(AssessmentRunNotificationSnsStatusCode enumValue)
        {
          switch(enumValue)
          {
          case AssessmentRunNotificationSnsStatusCode::SUCCESS:
            return "SUCCESS";
          case AssessmentRunNotificationSnsStatusCode::TOPIC_DOES_NOT_EXIST:
            return "TOPIC_DOES_NOT_EXIST";
          case AssessmentRunNotificationSnsStatusCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case AssessmentRunNotificationSnsStatusCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssessmentRunNotificationSnsStatusCodeMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
