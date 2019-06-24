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

#include <aws/application-insights/model/FeedbackValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace FeedbackValueMapper
      {

        static const int NOT_SPECIFIED_HASH = HashingUtils::HashString("NOT_SPECIFIED");
        static const int USEFUL_HASH = HashingUtils::HashString("USEFUL");
        static const int NOT_USEFUL_HASH = HashingUtils::HashString("NOT_USEFUL");


        FeedbackValue GetFeedbackValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_SPECIFIED_HASH)
          {
            return FeedbackValue::NOT_SPECIFIED;
          }
          else if (hashCode == USEFUL_HASH)
          {
            return FeedbackValue::USEFUL;
          }
          else if (hashCode == NOT_USEFUL_HASH)
          {
            return FeedbackValue::NOT_USEFUL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeedbackValue>(hashCode);
          }

          return FeedbackValue::NOT_SET;
        }

        Aws::String GetNameForFeedbackValue(FeedbackValue enumValue)
        {
          switch(enumValue)
          {
          case FeedbackValue::NOT_SPECIFIED:
            return "NOT_SPECIFIED";
          case FeedbackValue::USEFUL:
            return "USEFUL";
          case FeedbackValue::NOT_USEFUL:
            return "NOT_USEFUL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeedbackValueMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
