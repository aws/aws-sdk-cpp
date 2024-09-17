/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/CertificateProviderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMRContainers
  {
    namespace Model
    {
      namespace CertificateProviderTypeMapper
      {

        static const int PEM_HASH = HashingUtils::HashString("PEM");


        CertificateProviderType GetCertificateProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PEM_HASH)
          {
            return CertificateProviderType::PEM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateProviderType>(hashCode);
          }

          return CertificateProviderType::NOT_SET;
        }

        Aws::String GetNameForCertificateProviderType(CertificateProviderType enumValue)
        {
          switch(enumValue)
          {
          case CertificateProviderType::NOT_SET:
            return {};
          case CertificateProviderType::PEM:
            return "PEM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateProviderTypeMapper
    } // namespace Model
  } // namespace EMRContainers
} // namespace Aws
