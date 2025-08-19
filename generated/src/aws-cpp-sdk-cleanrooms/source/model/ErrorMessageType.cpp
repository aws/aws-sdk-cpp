/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ErrorMessageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace ErrorMessageTypeMapper
      {

        static const int DETAILED_HASH = HashingUtils::HashString("DETAILED");


        ErrorMessageType GetErrorMessageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DETAILED_HASH)
          {
            return ErrorMessageType::DETAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorMessageType>(hashCode);
          }

          return ErrorMessageType::NOT_SET;
        }

        Aws::String GetNameForErrorMessageType(ErrorMessageType enumValue)
        {
          switch(enumValue)
          {
          case ErrorMessageType::NOT_SET:
            return {};
          case ErrorMessageType::DETAILED:
            return "DETAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorMessageTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
