/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPublicAddressAssociationStatus.h>
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
      namespace IpamPublicAddressAssociationStatusMapper
      {

        static const int associated_HASH = HashingUtils::HashString("associated");
        static const int disassociated_HASH = HashingUtils::HashString("disassociated");


        IpamPublicAddressAssociationStatus GetIpamPublicAddressAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == associated_HASH)
          {
            return IpamPublicAddressAssociationStatus::associated;
          }
          else if (hashCode == disassociated_HASH)
          {
            return IpamPublicAddressAssociationStatus::disassociated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamPublicAddressAssociationStatus>(hashCode);
          }

          return IpamPublicAddressAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForIpamPublicAddressAssociationStatus(IpamPublicAddressAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case IpamPublicAddressAssociationStatus::NOT_SET:
            return {};
          case IpamPublicAddressAssociationStatus::associated:
            return "associated";
          case IpamPublicAddressAssociationStatus::disassociated:
            return "disassociated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamPublicAddressAssociationStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
