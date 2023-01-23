/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CertificateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace CertificateTypeMapper
      {

        static const int IMPORTED_HASH = HashingUtils::HashString("IMPORTED");
        static const int AMAZON_ISSUED_HASH = HashingUtils::HashString("AMAZON_ISSUED");
        static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");


        CertificateType GetCertificateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMPORTED_HASH)
          {
            return CertificateType::IMPORTED;
          }
          else if (hashCode == AMAZON_ISSUED_HASH)
          {
            return CertificateType::AMAZON_ISSUED;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return CertificateType::PRIVATE_;
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
          case CertificateType::IMPORTED:
            return "IMPORTED";
          case CertificateType::AMAZON_ISSUED:
            return "AMAZON_ISSUED";
          case CertificateType::PRIVATE_:
            return "PRIVATE";
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
  } // namespace ACM
} // namespace Aws
