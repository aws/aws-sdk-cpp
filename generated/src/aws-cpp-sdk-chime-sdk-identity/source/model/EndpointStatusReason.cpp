/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/EndpointStatusReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKIdentity
  {
    namespace Model
    {
      namespace EndpointStatusReasonMapper
      {

        static const int INVALID_DEVICE_TOKEN_HASH = HashingUtils::HashString("INVALID_DEVICE_TOKEN");
        static const int INVALID_PINPOINT_ARN_HASH = HashingUtils::HashString("INVALID_PINPOINT_ARN");


        EndpointStatusReason GetEndpointStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_DEVICE_TOKEN_HASH)
          {
            return EndpointStatusReason::INVALID_DEVICE_TOKEN;
          }
          else if (hashCode == INVALID_PINPOINT_ARN_HASH)
          {
            return EndpointStatusReason::INVALID_PINPOINT_ARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointStatusReason>(hashCode);
          }

          return EndpointStatusReason::NOT_SET;
        }

        Aws::String GetNameForEndpointStatusReason(EndpointStatusReason enumValue)
        {
          switch(enumValue)
          {
          case EndpointStatusReason::NOT_SET:
            return {};
          case EndpointStatusReason::INVALID_DEVICE_TOKEN:
            return "INVALID_DEVICE_TOKEN";
          case EndpointStatusReason::INVALID_PINPOINT_ARN:
            return "INVALID_PINPOINT_ARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointStatusReasonMapper
    } // namespace Model
  } // namespace ChimeSDKIdentity
} // namespace Aws
