/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/CustomDomainAssociationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace CustomDomainAssociationStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int PENDING_CERTIFICATE_DNS_VALIDATION_HASH = HashingUtils::HashString("PENDING_CERTIFICATE_DNS_VALIDATION");
        static const int BINDING_CERTIFICATE_HASH = HashingUtils::HashString("BINDING_CERTIFICATE");


        CustomDomainAssociationStatus GetCustomDomainAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return CustomDomainAssociationStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return CustomDomainAssociationStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return CustomDomainAssociationStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return CustomDomainAssociationStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return CustomDomainAssociationStatus::DELETE_FAILED;
          }
          else if (hashCode == PENDING_CERTIFICATE_DNS_VALIDATION_HASH)
          {
            return CustomDomainAssociationStatus::PENDING_CERTIFICATE_DNS_VALIDATION;
          }
          else if (hashCode == BINDING_CERTIFICATE_HASH)
          {
            return CustomDomainAssociationStatus::BINDING_CERTIFICATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomDomainAssociationStatus>(hashCode);
          }

          return CustomDomainAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForCustomDomainAssociationStatus(CustomDomainAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case CustomDomainAssociationStatus::NOT_SET:
            return {};
          case CustomDomainAssociationStatus::CREATING:
            return "CREATING";
          case CustomDomainAssociationStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case CustomDomainAssociationStatus::ACTIVE:
            return "ACTIVE";
          case CustomDomainAssociationStatus::DELETING:
            return "DELETING";
          case CustomDomainAssociationStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case CustomDomainAssociationStatus::PENDING_CERTIFICATE_DNS_VALIDATION:
            return "PENDING_CERTIFICATE_DNS_VALIDATION";
          case CustomDomainAssociationStatus::BINDING_CERTIFICATE:
            return "BINDING_CERTIFICATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomDomainAssociationStatusMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
