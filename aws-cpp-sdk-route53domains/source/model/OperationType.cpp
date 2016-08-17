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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace OperationTypeMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
