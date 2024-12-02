/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcBlockPublicAccessExclusionsAllowed.h>
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
      namespace VpcBlockPublicAccessExclusionsAllowedMapper
      {

        static const int allowed_HASH = HashingUtils::HashString("allowed");
        static const int not_allowed_HASH = HashingUtils::HashString("not-allowed");


        VpcBlockPublicAccessExclusionsAllowed GetVpcBlockPublicAccessExclusionsAllowedForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == allowed_HASH)
          {
            return VpcBlockPublicAccessExclusionsAllowed::allowed;
          }
          else if (hashCode == not_allowed_HASH)
          {
            return VpcBlockPublicAccessExclusionsAllowed::not_allowed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcBlockPublicAccessExclusionsAllowed>(hashCode);
          }

          return VpcBlockPublicAccessExclusionsAllowed::NOT_SET;
        }

        Aws::String GetNameForVpcBlockPublicAccessExclusionsAllowed(VpcBlockPublicAccessExclusionsAllowed enumValue)
        {
          switch(enumValue)
          {
          case VpcBlockPublicAccessExclusionsAllowed::NOT_SET:
            return {};
          case VpcBlockPublicAccessExclusionsAllowed::allowed:
            return "allowed";
          case VpcBlockPublicAccessExclusionsAllowed::not_allowed:
            return "not-allowed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcBlockPublicAccessExclusionsAllowedMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
