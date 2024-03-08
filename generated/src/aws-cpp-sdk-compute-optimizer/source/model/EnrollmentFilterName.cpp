/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/EnrollmentFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace EnrollmentFilterNameMapper
      {

        static const int Status_HASH = HashingUtils::HashString("Status");


        EnrollmentFilterName GetEnrollmentFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Status_HASH)
          {
            return EnrollmentFilterName::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnrollmentFilterName>(hashCode);
          }

          return EnrollmentFilterName::NOT_SET;
        }

        Aws::String GetNameForEnrollmentFilterName(EnrollmentFilterName enumValue)
        {
          switch(enumValue)
          {
          case EnrollmentFilterName::NOT_SET:
            return {};
          case EnrollmentFilterName::Status:
            return "Status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnrollmentFilterNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
