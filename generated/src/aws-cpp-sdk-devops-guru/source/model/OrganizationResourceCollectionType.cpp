/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/OrganizationResourceCollectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace OrganizationResourceCollectionTypeMapper
      {

        static constexpr uint32_t AWS_CLOUD_FORMATION_HASH = ConstExprHashingUtils::HashString("AWS_CLOUD_FORMATION");
        static constexpr uint32_t AWS_SERVICE_HASH = ConstExprHashingUtils::HashString("AWS_SERVICE");
        static constexpr uint32_t AWS_ACCOUNT_HASH = ConstExprHashingUtils::HashString("AWS_ACCOUNT");
        static constexpr uint32_t AWS_TAGS_HASH = ConstExprHashingUtils::HashString("AWS_TAGS");


        OrganizationResourceCollectionType GetOrganizationResourceCollectionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_CLOUD_FORMATION_HASH)
          {
            return OrganizationResourceCollectionType::AWS_CLOUD_FORMATION;
          }
          else if (hashCode == AWS_SERVICE_HASH)
          {
            return OrganizationResourceCollectionType::AWS_SERVICE;
          }
          else if (hashCode == AWS_ACCOUNT_HASH)
          {
            return OrganizationResourceCollectionType::AWS_ACCOUNT;
          }
          else if (hashCode == AWS_TAGS_HASH)
          {
            return OrganizationResourceCollectionType::AWS_TAGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationResourceCollectionType>(hashCode);
          }

          return OrganizationResourceCollectionType::NOT_SET;
        }

        Aws::String GetNameForOrganizationResourceCollectionType(OrganizationResourceCollectionType enumValue)
        {
          switch(enumValue)
          {
          case OrganizationResourceCollectionType::NOT_SET:
            return {};
          case OrganizationResourceCollectionType::AWS_CLOUD_FORMATION:
            return "AWS_CLOUD_FORMATION";
          case OrganizationResourceCollectionType::AWS_SERVICE:
            return "AWS_SERVICE";
          case OrganizationResourceCollectionType::AWS_ACCOUNT:
            return "AWS_ACCOUNT";
          case OrganizationResourceCollectionType::AWS_TAGS:
            return "AWS_TAGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrganizationResourceCollectionTypeMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
