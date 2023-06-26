/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessLogDeliveryStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace VerifiedAccessLogDeliveryStatusCodeMapper
      {

        static const int success_HASH = HashingUtils::HashString("success");
        static const int failed_HASH = HashingUtils::HashString("failed");


        VerifiedAccessLogDeliveryStatusCode GetVerifiedAccessLogDeliveryStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == success_HASH)
          {
            return VerifiedAccessLogDeliveryStatusCode::success;
          }
          else if (hashCode == failed_HASH)
          {
            return VerifiedAccessLogDeliveryStatusCode::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerifiedAccessLogDeliveryStatusCode>(hashCode);
          }

          return VerifiedAccessLogDeliveryStatusCode::NOT_SET;
        }

        Aws::String GetNameForVerifiedAccessLogDeliveryStatusCode(VerifiedAccessLogDeliveryStatusCode enumValue)
        {
          switch(enumValue)
          {
          case VerifiedAccessLogDeliveryStatusCode::success:
            return "success";
          case VerifiedAccessLogDeliveryStatusCode::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerifiedAccessLogDeliveryStatusCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
