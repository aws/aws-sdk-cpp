/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientCertificateRevocationListStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ClientCertificateRevocationListStatusCodeMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int active_HASH = HashingUtils::HashString("active");


        ClientCertificateRevocationListStatusCode GetClientCertificateRevocationListStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return ClientCertificateRevocationListStatusCode::pending;
          }
          else if (hashCode == active_HASH)
          {
            return ClientCertificateRevocationListStatusCode::active;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientCertificateRevocationListStatusCode>(hashCode);
          }

          return ClientCertificateRevocationListStatusCode::NOT_SET;
        }

        Aws::String GetNameForClientCertificateRevocationListStatusCode(ClientCertificateRevocationListStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ClientCertificateRevocationListStatusCode::pending:
            return "pending";
          case ClientCertificateRevocationListStatusCode::active:
            return "active";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientCertificateRevocationListStatusCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
