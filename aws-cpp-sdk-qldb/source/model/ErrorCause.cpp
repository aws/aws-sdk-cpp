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

#include <aws/qldb/model/ErrorCause.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QLDB
  {
    namespace Model
    {
      namespace ErrorCauseMapper
      {

        static const int KINESIS_STREAM_NOT_FOUND_HASH = HashingUtils::HashString("KINESIS_STREAM_NOT_FOUND");
        static const int IAM_PERMISSION_REVOKED_HASH = HashingUtils::HashString("IAM_PERMISSION_REVOKED");


        ErrorCause GetErrorCauseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KINESIS_STREAM_NOT_FOUND_HASH)
          {
            return ErrorCause::KINESIS_STREAM_NOT_FOUND;
          }
          else if (hashCode == IAM_PERMISSION_REVOKED_HASH)
          {
            return ErrorCause::IAM_PERMISSION_REVOKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCause>(hashCode);
          }

          return ErrorCause::NOT_SET;
        }

        Aws::String GetNameForErrorCause(ErrorCause enumValue)
        {
          switch(enumValue)
          {
          case ErrorCause::KINESIS_STREAM_NOT_FOUND:
            return "KINESIS_STREAM_NOT_FOUND";
          case ErrorCause::IAM_PERMISSION_REVOKED:
            return "IAM_PERMISSION_REVOKED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCauseMapper
    } // namespace Model
  } // namespace QLDB
} // namespace Aws
