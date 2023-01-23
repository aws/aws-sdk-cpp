/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/SmbVersion.h>
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
      namespace SmbVersionMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int SMB2_HASH = HashingUtils::HashString("SMB2");
        static const int SMB3_HASH = HashingUtils::HashString("SMB3");


        SmbVersion GetSmbVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return SmbVersion::AUTOMATIC;
          }
          else if (hashCode == SMB2_HASH)
          {
            return SmbVersion::SMB2;
          }
          else if (hashCode == SMB3_HASH)
          {
            return SmbVersion::SMB3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmbVersion>(hashCode);
          }

          return SmbVersion::NOT_SET;
        }

        Aws::String GetNameForSmbVersion(SmbVersion enumValue)
        {
          switch(enumValue)
          {
          case SmbVersion::AUTOMATIC:
            return "AUTOMATIC";
          case SmbVersion::SMB2:
            return "SMB2";
          case SmbVersion::SMB3:
            return "SMB3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmbVersionMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
