/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/CertificateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace CertificateTypeMapper
      {

        static const int ClientCertAuth_HASH = HashingUtils::HashString("ClientCertAuth");
        static const int ClientLDAPS_HASH = HashingUtils::HashString("ClientLDAPS");


        CertificateType GetCertificateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ClientCertAuth_HASH)
          {
            return CertificateType::ClientCertAuth;
          }
          else if (hashCode == ClientLDAPS_HASH)
          {
            return CertificateType::ClientLDAPS;
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
          case CertificateType::ClientCertAuth:
            return "ClientCertAuth";
          case CertificateType::ClientLDAPS:
            return "ClientLDAPS";
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
  } // namespace DirectoryService
} // namespace Aws
