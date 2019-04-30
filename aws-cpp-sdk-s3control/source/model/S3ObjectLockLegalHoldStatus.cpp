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

#include <aws/s3control/model/S3ObjectLockLegalHoldStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace S3ObjectLockLegalHoldStatusMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int ON_HASH = HashingUtils::HashString("ON");


        S3ObjectLockLegalHoldStatus GetS3ObjectLockLegalHoldStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return S3ObjectLockLegalHoldStatus::OFF;
          }
          else if (hashCode == ON_HASH)
          {
            return S3ObjectLockLegalHoldStatus::ON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3ObjectLockLegalHoldStatus>(hashCode);
          }

          return S3ObjectLockLegalHoldStatus::NOT_SET;
        }

        Aws::String GetNameForS3ObjectLockLegalHoldStatus(S3ObjectLockLegalHoldStatus enumValue)
        {
          switch(enumValue)
          {
          case S3ObjectLockLegalHoldStatus::OFF:
            return "OFF";
          case S3ObjectLockLegalHoldStatus::ON:
            return "ON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3ObjectLockLegalHoldStatusMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
