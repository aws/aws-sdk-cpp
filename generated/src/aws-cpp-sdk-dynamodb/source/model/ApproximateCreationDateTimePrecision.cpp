/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ApproximateCreationDateTimePrecision.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace ApproximateCreationDateTimePrecisionMapper
      {

        static const int MILLISECOND_HASH = HashingUtils::HashString("MILLISECOND");
        static const int MICROSECOND_HASH = HashingUtils::HashString("MICROSECOND");


        ApproximateCreationDateTimePrecision GetApproximateCreationDateTimePrecisionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MILLISECOND_HASH)
          {
            return ApproximateCreationDateTimePrecision::MILLISECOND;
          }
          else if (hashCode == MICROSECOND_HASH)
          {
            return ApproximateCreationDateTimePrecision::MICROSECOND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApproximateCreationDateTimePrecision>(hashCode);
          }

          return ApproximateCreationDateTimePrecision::NOT_SET;
        }

        Aws::String GetNameForApproximateCreationDateTimePrecision(ApproximateCreationDateTimePrecision enumValue)
        {
          switch(enumValue)
          {
          case ApproximateCreationDateTimePrecision::NOT_SET:
            return {};
          case ApproximateCreationDateTimePrecision::MILLISECOND:
            return "MILLISECOND";
          case ApproximateCreationDateTimePrecision::MICROSECOND:
            return "MICROSECOND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApproximateCreationDateTimePrecisionMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
