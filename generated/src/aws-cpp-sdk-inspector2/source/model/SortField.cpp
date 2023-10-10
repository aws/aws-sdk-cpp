/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/SortField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace SortFieldMapper
      {

        static const int AWS_ACCOUNT_ID_HASH = HashingUtils::HashString("AWS_ACCOUNT_ID");
        static const int FINDING_TYPE_HASH = HashingUtils::HashString("FINDING_TYPE");
        static const int SEVERITY_HASH = HashingUtils::HashString("SEVERITY");
        static const int FIRST_OBSERVED_AT_HASH = HashingUtils::HashString("FIRST_OBSERVED_AT");
        static const int LAST_OBSERVED_AT_HASH = HashingUtils::HashString("LAST_OBSERVED_AT");
        static const int FINDING_STATUS_HASH = HashingUtils::HashString("FINDING_STATUS");
        static const int RESOURCE_TYPE_HASH = HashingUtils::HashString("RESOURCE_TYPE");
        static const int ECR_IMAGE_PUSHED_AT_HASH = HashingUtils::HashString("ECR_IMAGE_PUSHED_AT");
        static const int ECR_IMAGE_REPOSITORY_NAME_HASH = HashingUtils::HashString("ECR_IMAGE_REPOSITORY_NAME");
        static const int ECR_IMAGE_REGISTRY_HASH = HashingUtils::HashString("ECR_IMAGE_REGISTRY");
        static const int NETWORK_PROTOCOL_HASH = HashingUtils::HashString("NETWORK_PROTOCOL");
        static const int COMPONENT_TYPE_HASH = HashingUtils::HashString("COMPONENT_TYPE");
        static const int VULNERABILITY_ID_HASH = HashingUtils::HashString("VULNERABILITY_ID");
        static const int VULNERABILITY_SOURCE_HASH = HashingUtils::HashString("VULNERABILITY_SOURCE");
        static const int INSPECTOR_SCORE_HASH = HashingUtils::HashString("INSPECTOR_SCORE");
        static const int VENDOR_SEVERITY_HASH = HashingUtils::HashString("VENDOR_SEVERITY");
        static const int EPSS_SCORE_HASH = HashingUtils::HashString("EPSS_SCORE");


        SortField GetSortFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_ACCOUNT_ID_HASH)
          {
            return SortField::AWS_ACCOUNT_ID;
          }
          else if (hashCode == FINDING_TYPE_HASH)
          {
            return SortField::FINDING_TYPE;
          }
          else if (hashCode == SEVERITY_HASH)
          {
            return SortField::SEVERITY;
          }
          else if (hashCode == FIRST_OBSERVED_AT_HASH)
          {
            return SortField::FIRST_OBSERVED_AT;
          }
          else if (hashCode == LAST_OBSERVED_AT_HASH)
          {
            return SortField::LAST_OBSERVED_AT;
          }
          else if (hashCode == FINDING_STATUS_HASH)
          {
            return SortField::FINDING_STATUS;
          }
          else if (hashCode == RESOURCE_TYPE_HASH)
          {
            return SortField::RESOURCE_TYPE;
          }
          else if (hashCode == ECR_IMAGE_PUSHED_AT_HASH)
          {
            return SortField::ECR_IMAGE_PUSHED_AT;
          }
          else if (hashCode == ECR_IMAGE_REPOSITORY_NAME_HASH)
          {
            return SortField::ECR_IMAGE_REPOSITORY_NAME;
          }
          else if (hashCode == ECR_IMAGE_REGISTRY_HASH)
          {
            return SortField::ECR_IMAGE_REGISTRY;
          }
          else if (hashCode == NETWORK_PROTOCOL_HASH)
          {
            return SortField::NETWORK_PROTOCOL;
          }
          else if (hashCode == COMPONENT_TYPE_HASH)
          {
            return SortField::COMPONENT_TYPE;
          }
          else if (hashCode == VULNERABILITY_ID_HASH)
          {
            return SortField::VULNERABILITY_ID;
          }
          else if (hashCode == VULNERABILITY_SOURCE_HASH)
          {
            return SortField::VULNERABILITY_SOURCE;
          }
          else if (hashCode == INSPECTOR_SCORE_HASH)
          {
            return SortField::INSPECTOR_SCORE;
          }
          else if (hashCode == VENDOR_SEVERITY_HASH)
          {
            return SortField::VENDOR_SEVERITY;
          }
          else if (hashCode == EPSS_SCORE_HASH)
          {
            return SortField::EPSS_SCORE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortField>(hashCode);
          }

          return SortField::NOT_SET;
        }

        Aws::String GetNameForSortField(SortField enumValue)
        {
          switch(enumValue)
          {
          case SortField::NOT_SET:
            return {};
          case SortField::AWS_ACCOUNT_ID:
            return "AWS_ACCOUNT_ID";
          case SortField::FINDING_TYPE:
            return "FINDING_TYPE";
          case SortField::SEVERITY:
            return "SEVERITY";
          case SortField::FIRST_OBSERVED_AT:
            return "FIRST_OBSERVED_AT";
          case SortField::LAST_OBSERVED_AT:
            return "LAST_OBSERVED_AT";
          case SortField::FINDING_STATUS:
            return "FINDING_STATUS";
          case SortField::RESOURCE_TYPE:
            return "RESOURCE_TYPE";
          case SortField::ECR_IMAGE_PUSHED_AT:
            return "ECR_IMAGE_PUSHED_AT";
          case SortField::ECR_IMAGE_REPOSITORY_NAME:
            return "ECR_IMAGE_REPOSITORY_NAME";
          case SortField::ECR_IMAGE_REGISTRY:
            return "ECR_IMAGE_REGISTRY";
          case SortField::NETWORK_PROTOCOL:
            return "NETWORK_PROTOCOL";
          case SortField::COMPONENT_TYPE:
            return "COMPONENT_TYPE";
          case SortField::VULNERABILITY_ID:
            return "VULNERABILITY_ID";
          case SortField::VULNERABILITY_SOURCE:
            return "VULNERABILITY_SOURCE";
          case SortField::INSPECTOR_SCORE:
            return "INSPECTOR_SCORE";
          case SortField::VENDOR_SEVERITY:
            return "VENDOR_SEVERITY";
          case SortField::EPSS_SCORE:
            return "EPSS_SCORE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortFieldMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
