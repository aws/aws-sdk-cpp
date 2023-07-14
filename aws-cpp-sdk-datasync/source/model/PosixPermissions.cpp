/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/PosixPermissions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace PosixPermissionsMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int PRESERVE_HASH = HashingUtils::HashString("PRESERVE");


        PosixPermissions GetPosixPermissionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return PosixPermissions::NONE;
          }
          else if (hashCode == PRESERVE_HASH)
          {
            return PosixPermissions::PRESERVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PosixPermissions>(hashCode);
          }

          return PosixPermissions::NOT_SET;
        }

        Aws::String GetNameForPosixPermissions(PosixPermissions enumValue)
        {
          switch(enumValue)
          {
          case PosixPermissions::NONE:
            return "NONE";
          case PosixPermissions::PRESERVE:
            return "PRESERVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PosixPermissionsMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
