/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SbomValidationResult.h>
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
      namespace SbomValidationResultMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");


        SbomValidationResult GetSbomValidationResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return SbomValidationResult::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return SbomValidationResult::SUCCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SbomValidationResult>(hashCode);
          }

          return SbomValidationResult::NOT_SET;
        }

        Aws::String GetNameForSbomValidationResult(SbomValidationResult enumValue)
        {
          switch(enumValue)
          {
          case SbomValidationResult::NOT_SET:
            return {};
          case SbomValidationResult::FAILED:
            return "FAILED";
          case SbomValidationResult::SUCCEEDED:
            return "SUCCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SbomValidationResultMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
