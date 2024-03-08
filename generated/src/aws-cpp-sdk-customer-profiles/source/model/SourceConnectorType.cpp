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

        static const int Salesforce_HASH = HashingUtils::HashString("Salesforce");
        static const int Marketo_HASH = HashingUtils::HashString("Marketo");
        static const int Zendesk_HASH = HashingUtils::HashString("Zendesk");
        static const int Servicenow_HASH = HashingUtils::HashString("Servicenow");
        static const int S3_HASH = HashingUtils::HashString("S3");


        SourceConnectorType GetSourceConnectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
