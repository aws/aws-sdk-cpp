/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t IssueCertificate_HASH = ConstExprHashingUtils::HashString("IssueCertificate");
        static constexpr uint32_t GetCertificate_HASH = ConstExprHashingUtils::HashString("GetCertificate");
        static constexpr uint32_t ListPermissions_HASH = ConstExprHashingUtils::HashString("ListPermissions");


        ActionType GetActionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ActionType::NOT_SET:
            return {};
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
