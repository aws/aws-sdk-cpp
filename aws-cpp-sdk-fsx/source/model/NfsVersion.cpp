/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/NfsVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace NfsVersionMapper
      {

        static const int NFS3_HASH = HashingUtils::HashString("NFS3");


        NfsVersion GetNfsVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NFS3_HASH)
          {
            return NfsVersion::NFS3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NfsVersion>(hashCode);
          }

          return NfsVersion::NOT_SET;
        }

        Aws::String GetNameForNfsVersion(NfsVersion enumValue)
        {
          switch(enumValue)
          {
          case NfsVersion::NFS3:
            return "NFS3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NfsVersionMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
