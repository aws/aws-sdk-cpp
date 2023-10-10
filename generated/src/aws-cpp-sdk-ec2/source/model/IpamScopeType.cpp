/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamScopeType.h>
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
      namespace IpamScopeTypeMapper
      {

        static const int public__HASH = HashingUtils::HashString("public");
        static const int private__HASH = HashingUtils::HashString("private");


        IpamScopeType GetIpamScopeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == public__HASH)
          {
            return IpamScopeType::public_;
          }
          else if (hashCode == private__HASH)
          {
            return IpamScopeType::private_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamScopeType>(hashCode);
          }

          return IpamScopeType::NOT_SET;
        }

        Aws::String GetNameForIpamScopeType(IpamScopeType enumValue)
        {
          switch(enumValue)
          {
          case IpamScopeType::NOT_SET:
            return {};
          case IpamScopeType::public_:
            return "public";
          case IpamScopeType::private_:
            return "private";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamScopeTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
