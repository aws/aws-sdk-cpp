/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CertificateUsageType.h>
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
      namespace CertificateUsageTypeMapper
      {

        static const int SIGNING_HASH = HashingUtils::HashString("SIGNING");
        static const int ENCRYPTION_HASH = HashingUtils::HashString("ENCRYPTION");


        CertificateUsageType GetCertificateUsageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIGNING_HASH)
          {
            return CertificateUsageType::SIGNING;
          }
          else if (hashCode == ENCRYPTION_HASH)
          {
            return CertificateUsageType::ENCRYPTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateUsageType>(hashCode);
          }

          return CertificateUsageType::NOT_SET;
        }

        Aws::String GetNameForCertificateUsageType(CertificateUsageType enumValue)
        {
          switch(enumValue)
          {
          case CertificateUsageType::NOT_SET:
            return {};
          case CertificateUsageType::SIGNING:
            return "SIGNING";
          case CertificateUsageType::ENCRYPTION:
            return "ENCRYPTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateUsageTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
