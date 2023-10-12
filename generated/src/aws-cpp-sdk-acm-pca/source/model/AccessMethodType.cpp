/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/AccessMethodType.h>
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
      namespace AccessMethodTypeMapper
      {

        static constexpr uint32_t CA_REPOSITORY_HASH = ConstExprHashingUtils::HashString("CA_REPOSITORY");
        static constexpr uint32_t RESOURCE_PKI_MANIFEST_HASH = ConstExprHashingUtils::HashString("RESOURCE_PKI_MANIFEST");
        static constexpr uint32_t RESOURCE_PKI_NOTIFY_HASH = ConstExprHashingUtils::HashString("RESOURCE_PKI_NOTIFY");


        AccessMethodType GetAccessMethodTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CA_REPOSITORY_HASH)
          {
            return AccessMethodType::CA_REPOSITORY;
          }
          else if (hashCode == RESOURCE_PKI_MANIFEST_HASH)
          {
            return AccessMethodType::RESOURCE_PKI_MANIFEST;
          }
          else if (hashCode == RESOURCE_PKI_NOTIFY_HASH)
          {
            return AccessMethodType::RESOURCE_PKI_NOTIFY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessMethodType>(hashCode);
          }

          return AccessMethodType::NOT_SET;
        }

        Aws::String GetNameForAccessMethodType(AccessMethodType enumValue)
        {
          switch(enumValue)
          {
          case AccessMethodType::NOT_SET:
            return {};
          case AccessMethodType::CA_REPOSITORY:
            return "CA_REPOSITORY";
          case AccessMethodType::RESOURCE_PKI_MANIFEST:
            return "RESOURCE_PKI_MANIFEST";
          case AccessMethodType::RESOURCE_PKI_NOTIFY:
            return "RESOURCE_PKI_NOTIFY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessMethodTypeMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
