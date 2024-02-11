/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PackageVersionAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace PackageVersionActionMapper
      {

        static const int PUBLISH_HASH = HashingUtils::HashString("PUBLISH");
        static const int DEPRECATE_HASH = HashingUtils::HashString("DEPRECATE");


        PackageVersionAction GetPackageVersionActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLISH_HASH)
          {
            return PackageVersionAction::PUBLISH;
          }
          else if (hashCode == DEPRECATE_HASH)
          {
            return PackageVersionAction::DEPRECATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageVersionAction>(hashCode);
          }

          return PackageVersionAction::NOT_SET;
        }

        Aws::String GetNameForPackageVersionAction(PackageVersionAction enumValue)
        {
          switch(enumValue)
          {
          case PackageVersionAction::NOT_SET:
            return {};
          case PackageVersionAction::PUBLISH:
            return "PUBLISH";
          case PackageVersionAction::DEPRECATE:
            return "DEPRECATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageVersionActionMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
