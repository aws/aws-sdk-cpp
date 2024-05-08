/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PhcSupport.h>
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
      namespace PhcSupportMapper
      {

        static const int unsupported_HASH = HashingUtils::HashString("unsupported");
        static const int supported_HASH = HashingUtils::HashString("supported");


        PhcSupport GetPhcSupportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unsupported_HASH)
          {
            return PhcSupport::unsupported;
          }
          else if (hashCode == supported_HASH)
          {
            return PhcSupport::supported;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhcSupport>(hashCode);
          }

          return PhcSupport::NOT_SET;
        }

        Aws::String GetNameForPhcSupport(PhcSupport enumValue)
        {
          switch(enumValue)
          {
          case PhcSupport::NOT_SET:
            return {};
          case PhcSupport::unsupported:
            return "unsupported";
          case PhcSupport::supported:
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

      } // namespace PhcSupportMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
