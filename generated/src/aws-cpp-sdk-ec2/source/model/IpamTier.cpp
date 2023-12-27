/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamTier.h>
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
      namespace IpamTierMapper
      {

        static const int free_HASH = HashingUtils::HashString("free");
        static const int advanced_HASH = HashingUtils::HashString("advanced");


        IpamTier GetIpamTierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == free_HASH)
          {
            return IpamTier::free;
          }
          else if (hashCode == advanced_HASH)
          {
            return IpamTier::advanced;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamTier>(hashCode);
          }

          return IpamTier::NOT_SET;
        }

        Aws::String GetNameForIpamTier(IpamTier enumValue)
        {
          switch(enumValue)
          {
          case IpamTier::NOT_SET:
            return {};
          case IpamTier::free:
            return "free";
          case IpamTier::advanced:
            return "advanced";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamTierMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
