/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/SourceConnectorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace SourceConnectorTypeMapper
      {

        static constexpr uint32_t Salesforce_HASH = ConstExprHashingUtils::HashString("Salesforce");
        static constexpr uint32_t Marketo_HASH = ConstExprHashingUtils::HashString("Marketo");
        static constexpr uint32_t Zendesk_HASH = ConstExprHashingUtils::HashString("Zendesk");
        static constexpr uint32_t Servicenow_HASH = ConstExprHashingUtils::HashString("Servicenow");
        static constexpr uint32_t S3_HASH = ConstExprHashingUtils::HashString("S3");


        SourceConnectorType GetSourceConnectorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Salesforce_HASH)
          {
            return SourceConnectorType::Salesforce;
          }
          else if (hashCode == Marketo_HASH)
          {
            return SourceConnectorType::Marketo;
          }
          else if (hashCode == Zendesk_HASH)
          {
            return SourceConnectorType::Zendesk;
          }
          else if (hashCode == Servicenow_HASH)
          {
            return SourceConnectorType::Servicenow;
          }
          else if (hashCode == S3_HASH)
          {
            return SourceConnectorType::S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceConnectorType>(hashCode);
          }

          return SourceConnectorType::NOT_SET;
        }

        Aws::String GetNameForSourceConnectorType(SourceConnectorType enumValue)
        {
          switch(enumValue)
          {
          case SourceConnectorType::NOT_SET:
            return {};
          case SourceConnectorType::Salesforce:
            return "Salesforce";
          case SourceConnectorType::Marketo:
            return "Marketo";
          case SourceConnectorType::Zendesk:
            return "Zendesk";
          case SourceConnectorType::Servicenow:
            return "Servicenow";
          case SourceConnectorType::S3:
            return "S3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceConnectorTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
