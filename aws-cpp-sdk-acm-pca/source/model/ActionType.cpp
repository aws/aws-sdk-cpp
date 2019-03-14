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

#include <aws/acm-pca/model/ActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace ActionTypeMapper
      {

        static const int IssueCertificate_HASH = HashingUtils::HashString("IssueCertificate");
        static const int GetCertificate_HASH = HashingUtils::HashString("GetCertificate");
        static const int ListPermissions_HASH = HashingUtils::HashString("ListPermissions");


        ActionType GetActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IssueCertificate_HASH)
          {
            return ActionType::IssueCertificate;
          }
          else if (hashCode == GetCertificate_HASH)
          {
            return ActionType::GetCertificate;
          }
          else if (hashCode == ListPermissions_HASH)
          {
            return ActionType::ListPermissions;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionType>(hashCode);
          }

          return ActionType::NOT_SET;
        }

        Aws::String GetNameForActionType(ActionType enumValue)
        {
          switch(enumValue)
          {
          case ActionType::IssueCertificate:
            return "IssueCertificate";
          case ActionType::GetCertificate:
            return "GetCertificate";
          case ActionType::ListPermissions:
            return "ListPermissions";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionTypeMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
