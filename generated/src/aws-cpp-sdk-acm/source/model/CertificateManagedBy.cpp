/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CertificateManagedBy.h>
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
      namespace CertificateManagedByMapper
      {

        static const int CLOUDFRONT_HASH = HashingUtils::HashString("CLOUDFRONT");


        CertificateManagedBy GetCertificateManagedByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUDFRONT_HASH)
          {
            return CertificateManagedBy::CLOUDFRONT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateManagedBy>(hashCode);
          }

          return CertificateManagedBy::NOT_SET;
        }

        Aws::String GetNameForCertificateManagedBy(CertificateManagedBy enumValue)
        {
          switch(enumValue)
          {
          case CertificateManagedBy::NOT_SET:
            return {};
          case CertificateManagedBy::CLOUDFRONT:
            return "CLOUDFRONT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateManagedByMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
