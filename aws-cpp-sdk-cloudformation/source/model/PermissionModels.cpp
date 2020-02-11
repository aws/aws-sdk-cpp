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

#include <aws/cloudformation/model/PermissionModels.h>
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
      namespace PermissionModelsMapper
      {

        static const int SERVICE_MANAGED_HASH = HashingUtils::HashString("SERVICE_MANAGED");
        static const int SELF_MANAGED_HASH = HashingUtils::HashString("SELF_MANAGED");


        PermissionModels GetPermissionModelsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_MANAGED_HASH)
          {
            return PermissionModels::SERVICE_MANAGED;
          }
          else if (hashCode == SELF_MANAGED_HASH)
          {
            return PermissionModels::SELF_MANAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionModels>(hashCode);
          }

          return PermissionModels::NOT_SET;
        }

        Aws::String GetNameForPermissionModels(PermissionModels enumValue)
        {
          switch(enumValue)
          {
          case PermissionModels::SERVICE_MANAGED:
            return "SERVICE_MANAGED";
          case PermissionModels::SELF_MANAGED:
            return "SELF_MANAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionModelsMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
