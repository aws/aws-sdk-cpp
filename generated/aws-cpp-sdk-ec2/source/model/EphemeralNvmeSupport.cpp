/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EphemeralNvmeSupport.h>
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
      namespace EphemeralNvmeSupportMapper
      {

        static const int unsupported_HASH = HashingUtils::HashString("unsupported");
        static const int supported_HASH = HashingUtils::HashString("supported");
        static const int required_HASH = HashingUtils::HashString("required");


        EphemeralNvmeSupport GetEphemeralNvmeSupportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unsupported_HASH)
          {
            return EphemeralNvmeSupport::unsupported;
          }
          else if (hashCode == supported_HASH)
          {
            return EphemeralNvmeSupport::supported;
          }
          else if (hashCode == required_HASH)
          {
            return EphemeralNvmeSupport::required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EphemeralNvmeSupport>(hashCode);
          }

          return EphemeralNvmeSupport::NOT_SET;
        }

        Aws::String GetNameForEphemeralNvmeSupport(EphemeralNvmeSupport enumValue)
        {
          switch(enumValue)
          {
          case EphemeralNvmeSupport::unsupported:
            return "unsupported";
          case EphemeralNvmeSupport::supported:
            return "supported";
          case EphemeralNvmeSupport::required:
            return "required";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EphemeralNvmeSupportMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
