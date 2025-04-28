/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/DomainStatus.h>
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
      namespace DomainStatusMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int inactive_HASH = HashingUtils::HashString("inactive");


        DomainStatus GetDomainStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return DomainStatus::active;
          }
          else if (hashCode == inactive_HASH)
          {
            return DomainStatus::inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainStatus>(hashCode);
          }

          return DomainStatus::NOT_SET;
        }

        Aws::String GetNameForDomainStatus(DomainStatus enumValue)
        {
          switch(enumValue)
          {
          case DomainStatus::NOT_SET:
            return {};
          case DomainStatus::active:
            return "active";
          case DomainStatus::inactive:
            return "inactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainStatusMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
