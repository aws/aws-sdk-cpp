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

#include <aws/cloudformation/model/StackSetOperationAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace StackSetOperationActionMapper
      {

        static const int CREATE_HASH = HashingUtils::HashString("CREATE");
        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int DETECT_DRIFT_HASH = HashingUtils::HashString("DETECT_DRIFT");


        StackSetOperationAction GetStackSetOperationActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_HASH)
          {
            return StackSetOperationAction::CREATE;
          }
          else if (hashCode == UPDATE_HASH)
          {
            return StackSetOperationAction::UPDATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return StackSetOperationAction::DELETE_;
          }
          else if (hashCode == DETECT_DRIFT_HASH)
          {
            return StackSetOperationAction::DETECT_DRIFT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackSetOperationAction>(hashCode);
          }

          return StackSetOperationAction::NOT_SET;
        }

        Aws::String GetNameForStackSetOperationAction(StackSetOperationAction enumValue)
        {
          switch(enumValue)
          {
          case StackSetOperationAction::CREATE:
            return "CREATE";
          case StackSetOperationAction::UPDATE:
            return "UPDATE";
          case StackSetOperationAction::DELETE_:
            return "DELETE";
          case StackSetOperationAction::DETECT_DRIFT:
            return "DETECT_DRIFT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackSetOperationActionMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
