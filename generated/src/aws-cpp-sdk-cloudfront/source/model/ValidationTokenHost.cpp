/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ValidationTokenHost.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace ValidationTokenHostMapper
      {

        static const int cloudfront_HASH = HashingUtils::HashString("cloudfront");
        static const int self_hosted_HASH = HashingUtils::HashString("self-hosted");


        ValidationTokenHost GetValidationTokenHostForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cloudfront_HASH)
          {
            return ValidationTokenHost::cloudfront;
          }
          else if (hashCode == self_hosted_HASH)
          {
            return ValidationTokenHost::self_hosted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationTokenHost>(hashCode);
          }

          return ValidationTokenHost::NOT_SET;
        }

        Aws::String GetNameForValidationTokenHost(ValidationTokenHost enumValue)
        {
          switch(enumValue)
          {
          case ValidationTokenHost::NOT_SET:
            return {};
          case ValidationTokenHost::cloudfront:
            return "cloudfront";
          case ValidationTokenHost::self_hosted:
            return "self-hosted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationTokenHostMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
