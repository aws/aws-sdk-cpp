/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/ChecksumAggregationMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EBS
  {
    namespace Model
    {
      namespace ChecksumAggregationMethodMapper
      {

        static const int LINEAR_HASH = HashingUtils::HashString("LINEAR");


        ChecksumAggregationMethod GetChecksumAggregationMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINEAR_HASH)
          {
            return ChecksumAggregationMethod::LINEAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChecksumAggregationMethod>(hashCode);
          }

          return ChecksumAggregationMethod::NOT_SET;
        }

        Aws::String GetNameForChecksumAggregationMethod(ChecksumAggregationMethod enumValue)
        {
          switch(enumValue)
          {
          case ChecksumAggregationMethod::LINEAR:
            return "LINEAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChecksumAggregationMethodMapper
    } // namespace Model
  } // namespace EBS
} // namespace Aws
