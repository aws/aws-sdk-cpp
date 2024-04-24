/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/DeleteUniqueIdErrorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EntityResolution
  {
    namespace Model
    {
      namespace DeleteUniqueIdErrorTypeMapper
      {

        static const int SERVICE_ERROR_HASH = HashingUtils::HashString("SERVICE_ERROR");
        static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");


        DeleteUniqueIdErrorType GetDeleteUniqueIdErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_ERROR_HASH)
          {
            return DeleteUniqueIdErrorType::SERVICE_ERROR;
          }
          else if (hashCode == VALIDATION_ERROR_HASH)
          {
            return DeleteUniqueIdErrorType::VALIDATION_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeleteUniqueIdErrorType>(hashCode);
          }

          return DeleteUniqueIdErrorType::NOT_SET;
        }

        Aws::String GetNameForDeleteUniqueIdErrorType(DeleteUniqueIdErrorType enumValue)
        {
          switch(enumValue)
          {
          case DeleteUniqueIdErrorType::NOT_SET:
            return {};
          case DeleteUniqueIdErrorType::SERVICE_ERROR:
            return "SERVICE_ERROR";
          case DeleteUniqueIdErrorType::VALIDATION_ERROR:
            return "VALIDATION_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeleteUniqueIdErrorTypeMapper
    } // namespace Model
  } // namespace EntityResolution
} // namespace Aws
