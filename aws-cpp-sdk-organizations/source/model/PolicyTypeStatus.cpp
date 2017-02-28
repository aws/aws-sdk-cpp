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
#include <aws/organizations/model/PolicyTypeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace PolicyTypeStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int PENDING_ENABLE_HASH = HashingUtils::HashString("PENDING_ENABLE");
        static const int PENDING_DISABLE_HASH = HashingUtils::HashString("PENDING_DISABLE");


        PolicyTypeStatus GetPolicyTypeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return PolicyTypeStatus::ENABLED;
          }
          else if (hashCode == PENDING_ENABLE_HASH)
          {
            return PolicyTypeStatus::PENDING_ENABLE;
          }
          else if (hashCode == PENDING_DISABLE_HASH)
          {
            return PolicyTypeStatus::PENDING_DISABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyTypeStatus>(hashCode);
          }

          return PolicyTypeStatus::NOT_SET;
        }

        Aws::String GetNameForPolicyTypeStatus(PolicyTypeStatus enumValue)
        {
          switch(enumValue)
          {
          case PolicyTypeStatus::ENABLED:
            return "ENABLED";
          case PolicyTypeStatus::PENDING_ENABLE:
            return "PENDING_ENABLE";
          case PolicyTypeStatus::PENDING_DISABLE:
            return "PENDING_DISABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PolicyTypeStatusMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
