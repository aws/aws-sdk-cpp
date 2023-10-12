/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPoolAwsService.h>
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
      namespace IpamPoolAwsServiceMapper
      {

        static constexpr uint32_t ec2_HASH = ConstExprHashingUtils::HashString("ec2");


        IpamPoolAwsService GetIpamPoolAwsServiceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ec2_HASH)
          {
            return IpamPoolAwsService::ec2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamPoolAwsService>(hashCode);
          }

          return IpamPoolAwsService::NOT_SET;
        }

        Aws::String GetNameForIpamPoolAwsService(IpamPoolAwsService enumValue)
        {
          switch(enumValue)
          {
          case IpamPoolAwsService::NOT_SET:
            return {};
          case IpamPoolAwsService::ec2:
            return "ec2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamPoolAwsServiceMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
