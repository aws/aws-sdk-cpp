/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AttachedFileInvalidRequestExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace AttachedFileInvalidRequestExceptionReasonMapper
      {

        static const int INVALID_FILE_SIZE_HASH = HashingUtils::HashString("INVALID_FILE_SIZE");
        static const int INVALID_FILE_TYPE_HASH = HashingUtils::HashString("INVALID_FILE_TYPE");
        static const int INVALID_FILE_NAME_HASH = HashingUtils::HashString("INVALID_FILE_NAME");


        AttachedFileInvalidRequestExceptionReason GetAttachedFileInvalidRequestExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_FILE_SIZE_HASH)
          {
            return AttachedFileInvalidRequestExceptionReason::INVALID_FILE_SIZE;
          }
          else if (hashCode == INVALID_FILE_TYPE_HASH)
          {
            return AttachedFileInvalidRequestExceptionReason::INVALID_FILE_TYPE;
          }
          else if (hashCode == INVALID_FILE_NAME_HASH)
          {
            return AttachedFileInvalidRequestExceptionReason::INVALID_FILE_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachedFileInvalidRequestExceptionReason>(hashCode);
          }

          return AttachedFileInvalidRequestExceptionReason::NOT_SET;
        }

        Aws::String GetNameForAttachedFileInvalidRequestExceptionReason(AttachedFileInvalidRequestExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case AttachedFileInvalidRequestExceptionReason::NOT_SET:
            return {};
          case AttachedFileInvalidRequestExceptionReason::INVALID_FILE_SIZE:
            return "INVALID_FILE_SIZE";
          case AttachedFileInvalidRequestExceptionReason::INVALID_FILE_TYPE:
            return "INVALID_FILE_TYPE";
          case AttachedFileInvalidRequestExceptionReason::INVALID_FILE_NAME:
            return "INVALID_FILE_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachedFileInvalidRequestExceptionReasonMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
