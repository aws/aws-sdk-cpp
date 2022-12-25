/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmfcTimedMetadataBoxVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace CmfcTimedMetadataBoxVersionMapper
      {

        static const int VERSION_0_HASH = HashingUtils::HashString("VERSION_0");
        static const int VERSION_1_HASH = HashingUtils::HashString("VERSION_1");


        CmfcTimedMetadataBoxVersion GetCmfcTimedMetadataBoxVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VERSION_0_HASH)
          {
            return CmfcTimedMetadataBoxVersion::VERSION_0;
          }
          else if (hashCode == VERSION_1_HASH)
          {
            return CmfcTimedMetadataBoxVersion::VERSION_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmfcTimedMetadataBoxVersion>(hashCode);
          }

          return CmfcTimedMetadataBoxVersion::NOT_SET;
        }

        Aws::String GetNameForCmfcTimedMetadataBoxVersion(CmfcTimedMetadataBoxVersion enumValue)
        {
          switch(enumValue)
          {
          case CmfcTimedMetadataBoxVersion::VERSION_0:
            return "VERSION_0";
          case CmfcTimedMetadataBoxVersion::VERSION_1:
            return "VERSION_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmfcTimedMetadataBoxVersionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
