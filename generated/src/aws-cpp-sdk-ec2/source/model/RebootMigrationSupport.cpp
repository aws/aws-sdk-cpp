/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RebootMigrationSupport.h>
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
      namespace RebootMigrationSupportMapper
      {

        static const int unsupported_HASH = HashingUtils::HashString("unsupported");
        static const int supported_HASH = HashingUtils::HashString("supported");


        RebootMigrationSupport GetRebootMigrationSupportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unsupported_HASH)
          {
            return RebootMigrationSupport::unsupported;
          }
          else if (hashCode == supported_HASH)
          {
            return RebootMigrationSupport::supported;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RebootMigrationSupport>(hashCode);
          }

          return RebootMigrationSupport::NOT_SET;
        }

        Aws::String GetNameForRebootMigrationSupport(RebootMigrationSupport enumValue)
        {
          switch(enumValue)
          {
          case RebootMigrationSupport::NOT_SET:
            return {};
          case RebootMigrationSupport::unsupported:
            return "unsupported";
          case RebootMigrationSupport::supported:
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

      } // namespace RebootMigrationSupportMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
