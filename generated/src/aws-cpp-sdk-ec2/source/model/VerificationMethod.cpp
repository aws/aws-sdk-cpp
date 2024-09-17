/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerificationMethod.h>
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
      namespace VerificationMethodMapper
      {

        static const int remarks_x509_HASH = HashingUtils::HashString("remarks-x509");
        static const int dns_token_HASH = HashingUtils::HashString("dns-token");


        VerificationMethod GetVerificationMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == remarks_x509_HASH)
          {
            return VerificationMethod::remarks_x509;
          }
          else if (hashCode == dns_token_HASH)
          {
            return VerificationMethod::dns_token;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerificationMethod>(hashCode);
          }

          return VerificationMethod::NOT_SET;
        }

        Aws::String GetNameForVerificationMethod(VerificationMethod enumValue)
        {
          switch(enumValue)
          {
          case VerificationMethod::NOT_SET:
            return {};
          case VerificationMethod::remarks_x509:
            return "remarks-x509";
          case VerificationMethod::dns_token:
            return "dns-token";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerificationMethodMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
