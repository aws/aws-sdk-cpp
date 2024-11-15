/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/CampaignDeletionPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCampaignsV2
  {
    namespace Model
    {
      namespace CampaignDeletionPolicyMapper
      {

        static const int RETAIN_ALL_HASH = HashingUtils::HashString("RETAIN_ALL");
        static const int DELETE_ALL_HASH = HashingUtils::HashString("DELETE_ALL");


        CampaignDeletionPolicy GetCampaignDeletionPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RETAIN_ALL_HASH)
          {
            return CampaignDeletionPolicy::RETAIN_ALL;
          }
          else if (hashCode == DELETE_ALL_HASH)
          {
            return CampaignDeletionPolicy::DELETE_ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CampaignDeletionPolicy>(hashCode);
          }

          return CampaignDeletionPolicy::NOT_SET;
        }

        Aws::String GetNameForCampaignDeletionPolicy(CampaignDeletionPolicy enumValue)
        {
          switch(enumValue)
          {
          case CampaignDeletionPolicy::NOT_SET:
            return {};
          case CampaignDeletionPolicy::RETAIN_ALL:
            return "RETAIN_ALL";
          case CampaignDeletionPolicy::DELETE_ALL:
            return "DELETE_ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CampaignDeletionPolicyMapper
    } // namespace Model
  } // namespace ConnectCampaignsV2
} // namespace Aws
