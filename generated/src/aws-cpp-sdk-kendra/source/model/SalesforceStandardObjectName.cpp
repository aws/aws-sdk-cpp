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

        static constexpr uint32_t ACCOUNT_HASH = ConstExprHashingUtils::HashString("ACCOUNT");
        static constexpr uint32_t CAMPAIGN_HASH = ConstExprHashingUtils::HashString("CAMPAIGN");
        static constexpr uint32_t CASE_HASH = ConstExprHashingUtils::HashString("CASE");
        static constexpr uint32_t CONTACT_HASH = ConstExprHashingUtils::HashString("CONTACT");
        static constexpr uint32_t CONTRACT_HASH = ConstExprHashingUtils::HashString("CONTRACT");
        static constexpr uint32_t DOCUMENT_HASH = ConstExprHashingUtils::HashString("DOCUMENT");
        static constexpr uint32_t GROUP_HASH = ConstExprHashingUtils::HashString("GROUP");
        static constexpr uint32_t IDEA_HASH = ConstExprHashingUtils::HashString("IDEA");
        static constexpr uint32_t LEAD_HASH = ConstExprHashingUtils::HashString("LEAD");
        static constexpr uint32_t OPPORTUNITY_HASH = ConstExprHashingUtils::HashString("OPPORTUNITY");
        static constexpr uint32_t PARTNER_HASH = ConstExprHashingUtils::HashString("PARTNER");
        static constexpr uint32_t PRICEBOOK_HASH = ConstExprHashingUtils::HashString("PRICEBOOK");
        static constexpr uint32_t PRODUCT_HASH = ConstExprHashingUtils::HashString("PRODUCT");
        static constexpr uint32_t PROFILE_HASH = ConstExprHashingUtils::HashString("PROFILE");
        static constexpr uint32_t SOLUTION_HASH = ConstExprHashingUtils::HashString("SOLUTION");
        static constexpr uint32_t TASK_HASH = ConstExprHashingUtils::HashString("TASK");
        static constexpr uint32_t USER_HASH = ConstExprHashingUtils::HashString("USER");


        SalesforceStandardObjectName GetSalesforceStandardObjectNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case SalesforceStandardObjectName::NOT_SET:
            return {};
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
