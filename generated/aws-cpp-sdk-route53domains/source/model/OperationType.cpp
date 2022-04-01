/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/OperationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Domains
  {
    namespace Model
    {
      namespace OperationTypeMapper
      {

        static const int REGISTER_DOMAIN_HASH = HashingUtils::HashString("REGISTER_DOMAIN");
        static const int DELETE_DOMAIN_HASH = HashingUtils::HashString("DELETE_DOMAIN");
        static const int TRANSFER_IN_DOMAIN_HASH = HashingUtils::HashString("TRANSFER_IN_DOMAIN");
        static const int UPDATE_DOMAIN_CONTACT_HASH = HashingUtils::HashString("UPDATE_DOMAIN_CONTACT");
        static const int UPDATE_NAMESERVER_HASH = HashingUtils::HashString("UPDATE_NAMESERVER");
        static const int CHANGE_PRIVACY_PROTECTION_HASH = HashingUtils::HashString("CHANGE_PRIVACY_PROTECTION");
        static const int DOMAIN_LOCK_HASH = HashingUtils::HashString("DOMAIN_LOCK");
        static const int ENABLE_AUTORENEW_HASH = HashingUtils::HashString("ENABLE_AUTORENEW");
        static const int DISABLE_AUTORENEW_HASH = HashingUtils::HashString("DISABLE_AUTORENEW");
        static const int ADD_DNSSEC_HASH = HashingUtils::HashString("ADD_DNSSEC");
        static const int REMOVE_DNSSEC_HASH = HashingUtils::HashString("REMOVE_DNSSEC");
        static const int EXPIRE_DOMAIN_HASH = HashingUtils::HashString("EXPIRE_DOMAIN");
        static const int TRANSFER_OUT_DOMAIN_HASH = HashingUtils::HashString("TRANSFER_OUT_DOMAIN");
        static const int CHANGE_DOMAIN_OWNER_HASH = HashingUtils::HashString("CHANGE_DOMAIN_OWNER");
        static const int RENEW_DOMAIN_HASH = HashingUtils::HashString("RENEW_DOMAIN");
        static const int PUSH_DOMAIN_HASH = HashingUtils::HashString("PUSH_DOMAIN");
        static const int INTERNAL_TRANSFER_OUT_DOMAIN_HASH = HashingUtils::HashString("INTERNAL_TRANSFER_OUT_DOMAIN");
        static const int INTERNAL_TRANSFER_IN_DOMAIN_HASH = HashingUtils::HashString("INTERNAL_TRANSFER_IN_DOMAIN");


        OperationType GetOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGISTER_DOMAIN_HASH)
          {
            return OperationType::REGISTER_DOMAIN;
          }
          else if (hashCode == DELETE_DOMAIN_HASH)
          {
            return OperationType::DELETE_DOMAIN;
          }
          else if (hashCode == TRANSFER_IN_DOMAIN_HASH)
          {
            return OperationType::TRANSFER_IN_DOMAIN;
          }
          else if (hashCode == UPDATE_DOMAIN_CONTACT_HASH)
          {
            return OperationType::UPDATE_DOMAIN_CONTACT;
          }
          else if (hashCode == UPDATE_NAMESERVER_HASH)
          {
            return OperationType::UPDATE_NAMESERVER;
          }
          else if (hashCode == CHANGE_PRIVACY_PROTECTION_HASH)
          {
            return OperationType::CHANGE_PRIVACY_PROTECTION;
          }
          else if (hashCode == DOMAIN_LOCK_HASH)
          {
            return OperationType::DOMAIN_LOCK;
          }
          else if (hashCode == ENABLE_AUTORENEW_HASH)
          {
            return OperationType::ENABLE_AUTORENEW;
          }
          else if (hashCode == DISABLE_AUTORENEW_HASH)
          {
            return OperationType::DISABLE_AUTORENEW;
          }
          else if (hashCode == ADD_DNSSEC_HASH)
          {
            return OperationType::ADD_DNSSEC;
          }
          else if (hashCode == REMOVE_DNSSEC_HASH)
          {
            return OperationType::REMOVE_DNSSEC;
          }
          else if (hashCode == EXPIRE_DOMAIN_HASH)
          {
            return OperationType::EXPIRE_DOMAIN;
          }
          else if (hashCode == TRANSFER_OUT_DOMAIN_HASH)
          {
            return OperationType::TRANSFER_OUT_DOMAIN;
          }
          else if (hashCode == CHANGE_DOMAIN_OWNER_HASH)
          {
            return OperationType::CHANGE_DOMAIN_OWNER;
          }
          else if (hashCode == RENEW_DOMAIN_HASH)
          {
            return OperationType::RENEW_DOMAIN;
          }
          else if (hashCode == PUSH_DOMAIN_HASH)
          {
            return OperationType::PUSH_DOMAIN;
          }
          else if (hashCode == INTERNAL_TRANSFER_OUT_DOMAIN_HASH)
          {
            return OperationType::INTERNAL_TRANSFER_OUT_DOMAIN;
          }
          else if (hashCode == INTERNAL_TRANSFER_IN_DOMAIN_HASH)
          {
            return OperationType::INTERNAL_TRANSFER_IN_DOMAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationType>(hashCode);
          }

          return OperationType::NOT_SET;
        }

        Aws::String GetNameForOperationType(OperationType enumValue)
        {
          switch(enumValue)
          {
          case OperationType::REGISTER_DOMAIN:
            return "REGISTER_DOMAIN";
          case OperationType::DELETE_DOMAIN:
            return "DELETE_DOMAIN";
          case OperationType::TRANSFER_IN_DOMAIN:
            return "TRANSFER_IN_DOMAIN";
          case OperationType::UPDATE_DOMAIN_CONTACT:
            return "UPDATE_DOMAIN_CONTACT";
          case OperationType::UPDATE_NAMESERVER:
            return "UPDATE_NAMESERVER";
          case OperationType::CHANGE_PRIVACY_PROTECTION:
            return "CHANGE_PRIVACY_PROTECTION";
          case OperationType::DOMAIN_LOCK:
            return "DOMAIN_LOCK";
          case OperationType::ENABLE_AUTORENEW:
            return "ENABLE_AUTORENEW";
          case OperationType::DISABLE_AUTORENEW:
            return "DISABLE_AUTORENEW";
          case OperationType::ADD_DNSSEC:
            return "ADD_DNSSEC";
          case OperationType::REMOVE_DNSSEC:
            return "REMOVE_DNSSEC";
          case OperationType::EXPIRE_DOMAIN:
            return "EXPIRE_DOMAIN";
          case OperationType::TRANSFER_OUT_DOMAIN:
            return "TRANSFER_OUT_DOMAIN";
          case OperationType::CHANGE_DOMAIN_OWNER:
            return "CHANGE_DOMAIN_OWNER";
          case OperationType::RENEW_DOMAIN:
            return "RENEW_DOMAIN";
          case OperationType::PUSH_DOMAIN:
            return "PUSH_DOMAIN";
          case OperationType::INTERNAL_TRANSFER_OUT_DOMAIN:
            return "INTERNAL_TRANSFER_OUT_DOMAIN";
          case OperationType::INTERNAL_TRANSFER_IN_DOMAIN:
            return "INTERNAL_TRANSFER_IN_DOMAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationTypeMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
