/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CertificateStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace CertificateStatusTypeMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t PENDING_ROTATION_HASH = ConstExprHashingUtils::HashString("PENDING_ROTATION");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");


        CertificateStatusType GetCertificateStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return CertificateStatusType::ACTIVE;
          }
          else if (hashCode == PENDING_ROTATION_HASH)
          {
            return CertificateStatusType::PENDING_ROTATION;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return CertificateStatusType::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateStatusType>(hashCode);
          }

          return CertificateStatusType::NOT_SET;
        }

        Aws::String GetNameForCertificateStatusType(CertificateStatusType enumValue)
        {
          switch(enumValue)
          {
          case CertificateStatusType::NOT_SET:
            return {};
          case CertificateStatusType::ACTIVE:
            return "ACTIVE";
          case CertificateStatusType::PENDING_ROTATION:
            return "PENDING_ROTATION";
          case CertificateStatusType::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateStatusTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
