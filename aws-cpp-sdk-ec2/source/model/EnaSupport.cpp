/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnaSupport.h>
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
      namespace EnaSupportMapper
      {

        static const int unsupported_HASH = HashingUtils::HashString("unsupported");
        static const int supported_HASH = HashingUtils::HashString("supported");
        static const int required_HASH = HashingUtils::HashString("required");


        EnaSupport GetEnaSupportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unsupported_HASH)
          {
            return EnaSupport::unsupported;
          }
          else if (hashCode == supported_HASH)
          {
            return EnaSupport::supported;
          }
          else if (hashCode == required_HASH)
          {
            return EnaSupport::required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnaSupport>(hashCode);
          }

          return EnaSupport::NOT_SET;
        }

        Aws::String GetNameForEnaSupport(EnaSupport enumValue)
        {
          switch(enumValue)
          {
          case EnaSupport::unsupported:
            return "unsupported";
          case EnaSupport::supported:
            return "supported";
          case EnaSupport::required:
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

      } // namespace EnaSupportMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
