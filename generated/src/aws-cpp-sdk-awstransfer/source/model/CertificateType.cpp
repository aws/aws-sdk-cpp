/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CertificateType.h>
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
      namespace CertificateTypeMapper
      {

        static const int CERTIFICATE_HASH = HashingUtils::HashString("CERTIFICATE");
        static const int CERTIFICATE_WITH_PRIVATE_KEY_HASH = HashingUtils::HashString("CERTIFICATE_WITH_PRIVATE_KEY");


        CertificateType GetCertificateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CERTIFICATE_HASH)
          {
            return CertificateType::CERTIFICATE;
          }
          else if (hashCode == CERTIFICATE_WITH_PRIVATE_KEY_HASH)
          {
            return CertificateType::CERTIFICATE_WITH_PRIVATE_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateType>(hashCode);
          }

          return CertificateType::NOT_SET;
        }

        Aws::String GetNameForCertificateType(CertificateType enumValue)
        {
          switch(enumValue)
          {
          case CertificateType::NOT_SET:
            return {};
          case CertificateType::CERTIFICATE:
            return "CERTIFICATE";
          case CertificateType::CERTIFICATE_WITH_PRIVATE_KEY:
            return "CERTIFICATE_WITH_PRIVATE_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
