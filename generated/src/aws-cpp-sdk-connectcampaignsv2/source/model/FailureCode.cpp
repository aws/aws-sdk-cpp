﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/FailureCode.h>
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
      namespace FailureCodeMapper
      {

        static const int InvalidInput_HASH = HashingUtils::HashString("InvalidInput");
        static const int RequestThrottled_HASH = HashingUtils::HashString("RequestThrottled");
        static const int UnknownError_HASH = HashingUtils::HashString("UnknownError");
        static const int BufferLimitExceeded_HASH = HashingUtils::HashString("BufferLimitExceeded");


        FailureCode GetFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvalidInput_HASH)
          {
            return FailureCode::InvalidInput;
          }
          else if (hashCode == RequestThrottled_HASH)
          {
            return FailureCode::RequestThrottled;
          }
          else if (hashCode == UnknownError_HASH)
          {
            return FailureCode::UnknownError;
          }
          else if (hashCode == BufferLimitExceeded_HASH)
          {
            return FailureCode::BufferLimitExceeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailureCode>(hashCode);
          }

          return FailureCode::NOT_SET;
        }

        Aws::String GetNameForFailureCode(FailureCode enumValue)
        {
          switch(enumValue)
          {
          case FailureCode::NOT_SET:
            return {};
          case FailureCode::InvalidInput:
            return "InvalidInput";
          case FailureCode::RequestThrottled:
            return "RequestThrottled";
          case FailureCode::UnknownError:
            return "UnknownError";
          case FailureCode::BufferLimitExceeded:
            return "BufferLimitExceeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailureCodeMapper
    } // namespace Model
  } // namespace ConnectCampaignsV2
} // namespace Aws
