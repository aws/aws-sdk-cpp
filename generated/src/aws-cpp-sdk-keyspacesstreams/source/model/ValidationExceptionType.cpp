/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/ValidationExceptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KeyspacesStreams
  {
    namespace Model
    {
      namespace ValidationExceptionTypeMapper
      {

        static const int InvalidFormat_HASH = HashingUtils::HashString("InvalidFormat");
        static const int TrimmedDataAccess_HASH = HashingUtils::HashString("TrimmedDataAccess");
        static const int ExpiredIterator_HASH = HashingUtils::HashString("ExpiredIterator");
        static const int ExpiredNextToken_HASH = HashingUtils::HashString("ExpiredNextToken");


        ValidationExceptionType GetValidationExceptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvalidFormat_HASH)
          {
            return ValidationExceptionType::InvalidFormat;
          }
          else if (hashCode == TrimmedDataAccess_HASH)
          {
            return ValidationExceptionType::TrimmedDataAccess;
          }
          else if (hashCode == ExpiredIterator_HASH)
          {
            return ValidationExceptionType::ExpiredIterator;
          }
          else if (hashCode == ExpiredNextToken_HASH)
          {
            return ValidationExceptionType::ExpiredNextToken;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationExceptionType>(hashCode);
          }

          return ValidationExceptionType::NOT_SET;
        }

        Aws::String GetNameForValidationExceptionType(ValidationExceptionType enumValue)
        {
          switch(enumValue)
          {
          case ValidationExceptionType::NOT_SET:
            return {};
          case ValidationExceptionType::InvalidFormat:
            return "InvalidFormat";
          case ValidationExceptionType::TrimmedDataAccess:
            return "TrimmedDataAccess";
          case ValidationExceptionType::ExpiredIterator:
            return "ExpiredIterator";
          case ValidationExceptionType::ExpiredNextToken:
            return "ExpiredNextToken";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationExceptionTypeMapper
    } // namespace Model
  } // namespace KeyspacesStreams
} // namespace Aws
