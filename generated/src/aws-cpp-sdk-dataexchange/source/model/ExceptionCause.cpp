/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ExceptionCause.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace ExceptionCauseMapper
      {

        static const int InsufficientS3BucketPolicy_HASH = HashingUtils::HashString("InsufficientS3BucketPolicy");
        static const int S3AccessDenied_HASH = HashingUtils::HashString("S3AccessDenied");


        ExceptionCause GetExceptionCauseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InsufficientS3BucketPolicy_HASH)
          {
            return ExceptionCause::InsufficientS3BucketPolicy;
          }
          else if (hashCode == S3AccessDenied_HASH)
          {
            return ExceptionCause::S3AccessDenied;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExceptionCause>(hashCode);
          }

          return ExceptionCause::NOT_SET;
        }

        Aws::String GetNameForExceptionCause(ExceptionCause enumValue)
        {
          switch(enumValue)
          {
          case ExceptionCause::NOT_SET:
            return {};
          case ExceptionCause::InsufficientS3BucketPolicy:
            return "InsufficientS3BucketPolicy";
          case ExceptionCause::S3AccessDenied:
            return "S3AccessDenied";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExceptionCauseMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
