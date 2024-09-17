/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SbomValidationErrorCode.h>
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
      namespace SbomValidationErrorCodeMapper
      {

        static const int INCOMPATIBLE_FORMAT_HASH = HashingUtils::HashString("INCOMPATIBLE_FORMAT");
        static const int FILE_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("FILE_SIZE_LIMIT_EXCEEDED");


        SbomValidationErrorCode GetSbomValidationErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCOMPATIBLE_FORMAT_HASH)
          {
            return SbomValidationErrorCode::INCOMPATIBLE_FORMAT;
          }
          else if (hashCode == FILE_SIZE_LIMIT_EXCEEDED_HASH)
          {
            return SbomValidationErrorCode::FILE_SIZE_LIMIT_EXCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SbomValidationErrorCode>(hashCode);
          }

          return SbomValidationErrorCode::NOT_SET;
        }

        Aws::String GetNameForSbomValidationErrorCode(SbomValidationErrorCode enumValue)
        {
          switch(enumValue)
          {
          case SbomValidationErrorCode::NOT_SET:
            return {};
          case SbomValidationErrorCode::INCOMPATIBLE_FORMAT:
            return "INCOMPATIBLE_FORMAT";
          case SbomValidationErrorCode::FILE_SIZE_LIMIT_EXCEEDED:
            return "FILE_SIZE_LIMIT_EXCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SbomValidationErrorCodeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
