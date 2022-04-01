/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SalesforceStandardObjectName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace SalesforceStandardObjectNameMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int CAMPAIGN_HASH = HashingUtils::HashString("CAMPAIGN");
        static const int CASE_HASH = HashingUtils::HashString("CASE");
        static const int CONTACT_HASH = HashingUtils::HashString("CONTACT");
        static const int CONTRACT_HASH = HashingUtils::HashString("CONTRACT");
        static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");
        static const int GROUP_HASH = HashingUtils::HashString("GROUP");
        static const int IDEA_HASH = HashingUtils::HashString("IDEA");
        static const int LEAD_HASH = HashingUtils::HashString("LEAD");
        static const int OPPORTUNITY_HASH = HashingUtils::HashString("OPPORTUNITY");
        static const int PARTNER_HASH = HashingUtils::HashString("PARTNER");
        static const int PRICEBOOK_HASH = HashingUtils::HashString("PRICEBOOK");
        static const int PRODUCT_HASH = HashingUtils::HashString("PRODUCT");
        static const int PROFILE_HASH = HashingUtils::HashString("PROFILE");
        static const int SOLUTION_HASH = HashingUtils::HashString("SOLUTION");
        static const int TASK_HASH = HashingUtils::HashString("TASK");
        static const int USER_HASH = HashingUtils::HashString("USER");


        SalesforceStandardObjectName GetSalesforceStandardObjectNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return SalesforceStandardObjectName::ACCOUNT;
          }
          else if (hashCode == CAMPAIGN_HASH)
          {
            return SalesforceStandardObjectName::CAMPAIGN;
          }
          else if (hashCode == CASE_HASH)
          {
            return SalesforceStandardObjectName::CASE;
          }
          else if (hashCode == CONTACT_HASH)
          {
            return SalesforceStandardObjectName::CONTACT;
          }
          else if (hashCode == CONTRACT_HASH)
          {
            return SalesforceStandardObjectName::CONTRACT;
          }
          else if (hashCode == DOCUMENT_HASH)
          {
            return SalesforceStandardObjectName::DOCUMENT;
          }
          else if (hashCode == GROUP_HASH)
          {
            return SalesforceStandardObjectName::GROUP;
          }
          else if (hashCode == IDEA_HASH)
          {
            return SalesforceStandardObjectName::IDEA;
          }
          else if (hashCode == LEAD_HASH)
          {
            return SalesforceStandardObjectName::LEAD;
          }
          else if (hashCode == OPPORTUNITY_HASH)
          {
            return SalesforceStandardObjectName::OPPORTUNITY;
          }
          else if (hashCode == PARTNER_HASH)
          {
            return SalesforceStandardObjectName::PARTNER;
          }
          else if (hashCode == PRICEBOOK_HASH)
          {
            return SalesforceStandardObjectName::PRICEBOOK;
          }
          else if (hashCode == PRODUCT_HASH)
          {
            return SalesforceStandardObjectName::PRODUCT;
          }
          else if (hashCode == PROFILE_HASH)
          {
            return SalesforceStandardObjectName::PROFILE;
          }
          else if (hashCode == SOLUTION_HASH)
          {
            return SalesforceStandardObjectName::SOLUTION;
          }
          else if (hashCode == TASK_HASH)
          {
            return SalesforceStandardObjectName::TASK;
          }
          else if (hashCode == USER_HASH)
          {
            return SalesforceStandardObjectName::USER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SalesforceStandardObjectName>(hashCode);
          }

          return SalesforceStandardObjectName::NOT_SET;
        }

        Aws::String GetNameForSalesforceStandardObjectName(SalesforceStandardObjectName enumValue)
        {
          switch(enumValue)
          {
          case SalesforceStandardObjectName::ACCOUNT:
            return "ACCOUNT";
          case SalesforceStandardObjectName::CAMPAIGN:
            return "CAMPAIGN";
          case SalesforceStandardObjectName::CASE:
            return "CASE";
          case SalesforceStandardObjectName::CONTACT:
            return "CONTACT";
          case SalesforceStandardObjectName::CONTRACT:
            return "CONTRACT";
          case SalesforceStandardObjectName::DOCUMENT:
            return "DOCUMENT";
          case SalesforceStandardObjectName::GROUP:
            return "GROUP";
          case SalesforceStandardObjectName::IDEA:
            return "IDEA";
          case SalesforceStandardObjectName::LEAD:
            return "LEAD";
          case SalesforceStandardObjectName::OPPORTUNITY:
            return "OPPORTUNITY";
          case SalesforceStandardObjectName::PARTNER:
            return "PARTNER";
          case SalesforceStandardObjectName::PRICEBOOK:
            return "PRICEBOOK";
          case SalesforceStandardObjectName::PRODUCT:
            return "PRODUCT";
          case SalesforceStandardObjectName::PROFILE:
            return "PROFILE";
          case SalesforceStandardObjectName::SOLUTION:
            return "SOLUTION";
          case SalesforceStandardObjectName::TASK:
            return "TASK";
          case SalesforceStandardObjectName::USER:
            return "USER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SalesforceStandardObjectNameMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
