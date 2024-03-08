/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ScanningConfigurationFailureCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace ScanningConfigurationFailureCodeMapper
      {

        static const int REPOSITORY_NOT_FOUND_HASH = HashingUtils::HashString("REPOSITORY_NOT_FOUND");


        ScanningConfigurationFailureCode GetScanningConfigurationFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REPOSITORY_NOT_FOUND_HASH)
          {
            return ScanningConfigurationFailureCode::REPOSITORY_NOT_FOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanningConfigurationFailureCode>(hashCode);
          }

          return ScanningConfigurationFailureCode::NOT_SET;
        }

        Aws::String GetNameForScanningConfigurationFailureCode(ScanningConfigurationFailureCode enumValue)
        {
          switch(enumValue)
          {
          case ScanningConfigurationFailureCode::NOT_SET:
            return {};
          case ScanningConfigurationFailureCode::REPOSITORY_NOT_FOUND:
            return "REPOSITORY_NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanningConfigurationFailureCodeMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
