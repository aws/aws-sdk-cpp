/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/TagResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace TagResourceTypeMapper
      {

        static const int healthcheck_HASH = HashingUtils::HashString("healthcheck");
        static const int hostedzone_HASH = HashingUtils::HashString("hostedzone");


        TagResourceType GetTagResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == healthcheck_HASH)
          {
            return TagResourceType::healthcheck;
          }
          else if (hashCode == hostedzone_HASH)
          {
            return TagResourceType::hostedzone;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TagResourceType>(hashCode);
          }

          return TagResourceType::NOT_SET;
        }

        Aws::String GetNameForTagResourceType(TagResourceType enumValue)
        {
          switch(enumValue)
          {
          case TagResourceType::healthcheck:
            return "healthcheck";
          case TagResourceType::hostedzone:
            return "hostedzone";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TagResourceTypeMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws
