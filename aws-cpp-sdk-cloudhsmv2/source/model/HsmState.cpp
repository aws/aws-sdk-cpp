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

#include <aws/cloudhsmv2/model/HsmState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudHSMV2
  {
    namespace Model
    {
      namespace HsmStateMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DEGRADED_HASH = HashingUtils::HashString("DEGRADED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        HsmState GetHsmStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return HsmState::CREATE_IN_PROGRESS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return HsmState::ACTIVE;
          }
          else if (hashCode == DEGRADED_HASH)
          {
            return HsmState::DEGRADED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return HsmState::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETED_HASH)
          {
            return HsmState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HsmState>(hashCode);
          }

          return HsmState::NOT_SET;
        }

        Aws::String GetNameForHsmState(HsmState enumValue)
        {
          switch(enumValue)
          {
          case HsmState::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case HsmState::ACTIVE:
            return "ACTIVE";
          case HsmState::DEGRADED:
            return "DEGRADED";
          case HsmState::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case HsmState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HsmStateMapper
    } // namespace Model
  } // namespace CloudHSMV2
} // namespace Aws
