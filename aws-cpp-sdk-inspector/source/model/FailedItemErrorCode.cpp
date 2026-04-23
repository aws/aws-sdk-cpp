/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/inspector/model/FailedItemErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace FailedItemErrorCodeMapper
      {

        static const int INVALID_ARN_HASH = HashingUtils::HashString("INVALID_ARN");
        static const int DUPLICATE_ARN_HASH = HashingUtils::HashString("DUPLICATE_ARN");
        static const int ITEM_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ITEM_DOES_NOT_EXIST");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LIMIT_EXCEEDED");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");


        FailedItemErrorCode GetFailedItemErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_ARN_HASH)
          {
            return FailedItemErrorCode::INVALID_ARN;
          }
          else if (hashCode == DUPLICATE_ARN_HASH)
          {
            return FailedItemErrorCode::DUPLICATE_ARN;
          }
          else if (hashCode == ITEM_DOES_NOT_EXIST_HASH)
          {
            return FailedItemErrorCode::ITEM_DOES_NOT_EXIST;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return FailedItemErrorCode::ACCESS_DENIED;
          }
          else if (hashCode == LIMIT_EXCEEDED_HASH)
          {
            return FailedItemErrorCode::LIMIT_EXCEEDED;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return FailedItemErrorCode::INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailedItemErrorCode>(hashCode);
          }

          return FailedItemErrorCode::NOT_SET;
        }

        Aws::String GetNameForFailedItemErrorCode(FailedItemErrorCode enumValue)
        {
          switch(enumValue)
          {
          case FailedItemErrorCode::INVALID_ARN:
            return "INVALID_ARN";
          case FailedItemErrorCode::DUPLICATE_ARN:
            return "DUPLICATE_ARN";
          case FailedItemErrorCode::ITEM_DOES_NOT_EXIST:
            return "ITEM_DOES_NOT_EXIST";
          case FailedItemErrorCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case FailedItemErrorCode::LIMIT_EXCEEDED:
            return "LIMIT_EXCEEDED";
          case FailedItemErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailedItemErrorCodeMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
