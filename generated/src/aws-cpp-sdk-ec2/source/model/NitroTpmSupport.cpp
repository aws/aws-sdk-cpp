/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NitroTpmSupport.h>
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
      namespace NitroTpmSupportMapper
      {

        static const int unsupported_HASH = HashingUtils::HashString("unsupported");
        static const int supported_HASH = HashingUtils::HashString("supported");


        NitroTpmSupport GetNitroTpmSupportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unsupported_HASH)
          {
            return NitroTpmSupport::unsupported;
          }
          else if (hashCode == supported_HASH)
          {
            return NitroTpmSupport::supported;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NitroTpmSupport>(hashCode);
          }

          return NitroTpmSupport::NOT_SET;
        }

        Aws::String GetNameForNitroTpmSupport(NitroTpmSupport enumValue)
        {
          switch(enumValue)
          {
          case NitroTpmSupport::NOT_SET:
            return {};
          case NitroTpmSupport::unsupported:
            return "unsupported";
          case NitroTpmSupport::supported:
            return "supported";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NitroTpmSupportMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
