/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NitroEnclavesSupport.h>
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
      namespace NitroEnclavesSupportMapper
      {

        static const int unsupported_HASH = HashingUtils::HashString("unsupported");
        static const int supported_HASH = HashingUtils::HashString("supported");


        NitroEnclavesSupport GetNitroEnclavesSupportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unsupported_HASH)
          {
            return NitroEnclavesSupport::unsupported;
          }
          else if (hashCode == supported_HASH)
          {
            return NitroEnclavesSupport::supported;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NitroEnclavesSupport>(hashCode);
          }

          return NitroEnclavesSupport::NOT_SET;
        }

        Aws::String GetNameForNitroEnclavesSupport(NitroEnclavesSupport enumValue)
        {
          switch(enumValue)
          {
          case NitroEnclavesSupport::NOT_SET:
            return {};
          case NitroEnclavesSupport::unsupported:
            return "unsupported";
          case NitroEnclavesSupport::supported:
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

      } // namespace NitroEnclavesSupportMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
