/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/StackErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace StackErrorCodeMapper
      {

        static const int STORAGE_CONNECTOR_ERROR_HASH = HashingUtils::HashString("STORAGE_CONNECTOR_ERROR");
        static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVICE_ERROR");


        StackErrorCode GetStackErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STORAGE_CONNECTOR_ERROR_HASH)
          {
            return StackErrorCode::STORAGE_CONNECTOR_ERROR;
          }
          else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
          {
            return StackErrorCode::INTERNAL_SERVICE_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackErrorCode>(hashCode);
          }

          return StackErrorCode::NOT_SET;
        }

        Aws::String GetNameForStackErrorCode(StackErrorCode enumValue)
        {
          switch(enumValue)
          {
          case StackErrorCode::STORAGE_CONNECTOR_ERROR:
            return "STORAGE_CONNECTOR_ERROR";
          case StackErrorCode::INTERNAL_SERVICE_ERROR:
            return "INTERNAL_SERVICE_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackErrorCodeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
