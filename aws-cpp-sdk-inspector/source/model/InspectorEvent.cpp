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

#include <aws/inspector/model/InspectorEvent.h>
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
      namespace InspectorEventMapper
      {

        static const int ASSESSMENT_RUN_STARTED_HASH = HashingUtils::HashString("ASSESSMENT_RUN_STARTED");
        static const int ASSESSMENT_RUN_COMPLETED_HASH = HashingUtils::HashString("ASSESSMENT_RUN_COMPLETED");
        static const int ASSESSMENT_RUN_STATE_CHANGED_HASH = HashingUtils::HashString("ASSESSMENT_RUN_STATE_CHANGED");
        static const int FINDING_REPORTED_HASH = HashingUtils::HashString("FINDING_REPORTED");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        InspectorEvent GetInspectorEventForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSESSMENT_RUN_STARTED_HASH)
          {
            return InspectorEvent::ASSESSMENT_RUN_STARTED;
          }
          else if (hashCode == ASSESSMENT_RUN_COMPLETED_HASH)
          {
            return InspectorEvent::ASSESSMENT_RUN_COMPLETED;
          }
          else if (hashCode == ASSESSMENT_RUN_STATE_CHANGED_HASH)
          {
            return InspectorEvent::ASSESSMENT_RUN_STATE_CHANGED;
          }
          else if (hashCode == FINDING_REPORTED_HASH)
          {
            return InspectorEvent::FINDING_REPORTED;
          }
          else if (hashCode == OTHER_HASH)
          {
            return InspectorEvent::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InspectorEvent>(hashCode);
          }

          return InspectorEvent::NOT_SET;
        }

        Aws::String GetNameForInspectorEvent(InspectorEvent enumValue)
        {
          switch(enumValue)
          {
          case InspectorEvent::ASSESSMENT_RUN_STARTED:
            return "ASSESSMENT_RUN_STARTED";
          case InspectorEvent::ASSESSMENT_RUN_COMPLETED:
            return "ASSESSMENT_RUN_COMPLETED";
          case InspectorEvent::ASSESSMENT_RUN_STATE_CHANGED:
            return "ASSESSMENT_RUN_STATE_CHANGED";
          case InspectorEvent::FINDING_REPORTED:
            return "FINDING_REPORTED";
          case InspectorEvent::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InspectorEventMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
