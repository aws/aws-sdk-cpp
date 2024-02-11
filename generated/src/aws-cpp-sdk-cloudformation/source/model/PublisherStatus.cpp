/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/PublisherStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace PublisherStatusMapper
      {

        static const int VERIFIED_HASH = HashingUtils::HashString("VERIFIED");
        static const int UNVERIFIED_HASH = HashingUtils::HashString("UNVERIFIED");


        PublisherStatus GetPublisherStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VERIFIED_HASH)
          {
            return PublisherStatus::VERIFIED;
          }
          else if (hashCode == UNVERIFIED_HASH)
          {
            return PublisherStatus::UNVERIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PublisherStatus>(hashCode);
          }

          return PublisherStatus::NOT_SET;
        }

        Aws::String GetNameForPublisherStatus(PublisherStatus enumValue)
        {
          switch(enumValue)
          {
          case PublisherStatus::NOT_SET:
            return {};
          case PublisherStatus::VERIFIED:
            return "VERIFIED";
          case PublisherStatus::UNVERIFIED:
            return "UNVERIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PublisherStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
