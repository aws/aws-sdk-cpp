/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/ProfileOutboundRequestFailureCode.h>
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
      namespace ProfileOutboundRequestFailureCodeMapper
      {

        static const int UnknownError_HASH = HashingUtils::HashString("UnknownError");
        static const int ResourceNotFound_HASH = HashingUtils::HashString("ResourceNotFound");
        static const int Conflict_HASH = HashingUtils::HashString("Conflict");
        static const int RequestThrottled_HASH = HashingUtils::HashString("RequestThrottled");
        static const int InvalidInput_HASH = HashingUtils::HashString("InvalidInput");


        ProfileOutboundRequestFailureCode GetProfileOutboundRequestFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UnknownError_HASH)
          {
            return ProfileOutboundRequestFailureCode::UnknownError;
          }
          else if (hashCode == ResourceNotFound_HASH)
          {
            return ProfileOutboundRequestFailureCode::ResourceNotFound;
          }
          else if (hashCode == Conflict_HASH)
          {
            return ProfileOutboundRequestFailureCode::Conflict;
          }
          else if (hashCode == RequestThrottled_HASH)
          {
            return ProfileOutboundRequestFailureCode::RequestThrottled;
          }
          else if (hashCode == InvalidInput_HASH)
          {
            return ProfileOutboundRequestFailureCode::InvalidInput;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProfileOutboundRequestFailureCode>(hashCode);
          }

          return ProfileOutboundRequestFailureCode::NOT_SET;
        }

        Aws::String GetNameForProfileOutboundRequestFailureCode(ProfileOutboundRequestFailureCode enumValue)
        {
          switch(enumValue)
          {
          case ProfileOutboundRequestFailureCode::NOT_SET:
            return {};
          case ProfileOutboundRequestFailureCode::UnknownError:
            return "UnknownError";
          case ProfileOutboundRequestFailureCode::ResourceNotFound:
            return "ResourceNotFound";
          case ProfileOutboundRequestFailureCode::Conflict:
            return "Conflict";
          case ProfileOutboundRequestFailureCode::RequestThrottled:
            return "RequestThrottled";
          case ProfileOutboundRequestFailureCode::InvalidInput:
            return "InvalidInput";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProfileOutboundRequestFailureCodeMapper
    } // namespace Model
  } // namespace ConnectCampaignsV2
} // namespace Aws
