/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CertificateProviderOperation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace CertificateProviderOperationMapper
      {

        static const int CreateCertificateFromCsr_HASH = HashingUtils::HashString("CreateCertificateFromCsr");


        CertificateProviderOperation GetCertificateProviderOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreateCertificateFromCsr_HASH)
          {
            return CertificateProviderOperation::CreateCertificateFromCsr;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateProviderOperation>(hashCode);
          }

          return CertificateProviderOperation::NOT_SET;
        }

        Aws::String GetNameForCertificateProviderOperation(CertificateProviderOperation enumValue)
        {
          switch(enumValue)
          {
          case CertificateProviderOperation::NOT_SET:
            return {};
          case CertificateProviderOperation::CreateCertificateFromCsr:
            return "CreateCertificateFromCsr";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateProviderOperationMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
