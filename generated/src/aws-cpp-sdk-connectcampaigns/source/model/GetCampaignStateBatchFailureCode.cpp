/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/GetCampaignStateBatchFailureCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCampaigns
  {
    namespace Model
    {
      namespace GetCampaignStateBatchFailureCodeMapper
      {

        static constexpr uint32_t ResourceNotFound_HASH = ConstExprHashingUtils::HashString("ResourceNotFound");
        static constexpr uint32_t UnknownError_HASH = ConstExprHashingUtils::HashString("UnknownError");


        GetCampaignStateBatchFailureCode GetGetCampaignStateBatchFailureCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceNotFound_HASH)
          {
            return GetCampaignStateBatchFailureCode::ResourceNotFound;
          }
          else if (hashCode == UnknownError_HASH)
          {
            return GetCampaignStateBatchFailureCode::UnknownError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GetCampaignStateBatchFailureCode>(hashCode);
          }

          return GetCampaignStateBatchFailureCode::NOT_SET;
        }

        Aws::String GetNameForGetCampaignStateBatchFailureCode(GetCampaignStateBatchFailureCode enumValue)
        {
          switch(enumValue)
          {
          case GetCampaignStateBatchFailureCode::NOT_SET:
            return {};
          case GetCampaignStateBatchFailureCode::ResourceNotFound:
            return "ResourceNotFound";
          case GetCampaignStateBatchFailureCode::UnknownError:
            return "UnknownError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GetCampaignStateBatchFailureCodeMapper
    } // namespace Model
  } // namespace ConnectCampaigns
} // namespace Aws
