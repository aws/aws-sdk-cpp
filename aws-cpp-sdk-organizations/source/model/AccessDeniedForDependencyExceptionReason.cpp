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

#include <aws/organizations/model/AccessDeniedForDependencyExceptionReason.h>
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
      namespace AccessDeniedForDependencyExceptionReasonMapper
      {

        static const int ACCESS_DENIED_DURING_CREATE_SERVICE_LINKED_ROLE_HASH = HashingUtils::HashString("ACCESS_DENIED_DURING_CREATE_SERVICE_LINKED_ROLE");


        AccessDeniedForDependencyExceptionReason GetAccessDeniedForDependencyExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_DURING_CREATE_SERVICE_LINKED_ROLE_HASH)
          {
            return AccessDeniedForDependencyExceptionReason::ACCESS_DENIED_DURING_CREATE_SERVICE_LINKED_ROLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessDeniedForDependencyExceptionReason>(hashCode);
          }

          return AccessDeniedForDependencyExceptionReason::NOT_SET;
        }

        Aws::String GetNameForAccessDeniedForDependencyExceptionReason(AccessDeniedForDependencyExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case AccessDeniedForDependencyExceptionReason::ACCESS_DENIED_DURING_CREATE_SERVICE_LINKED_ROLE:
            return "ACCESS_DENIED_DURING_CREATE_SERVICE_LINKED_ROLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessDeniedForDependencyExceptionReasonMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
