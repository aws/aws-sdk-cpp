/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/FailureReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace FailureReasonMapper
      {

        static const int REQUEST_TIMED_OUT_HASH = HashingUtils::HashString("REQUEST_TIMED_OUT");
        static const int UNSUPPORTED_ALGORITHM_HASH = HashingUtils::HashString("UNSUPPORTED_ALGORITHM");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        FailureReason GetFailureReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUEST_TIMED_OUT_HASH)
          {
            return FailureReason::REQUEST_TIMED_OUT;
          }
          else if (hashCode == UNSUPPORTED_ALGORITHM_HASH)
          {
            return FailureReason::UNSUPPORTED_ALGORITHM;
          }
          else if (hashCode == OTHER_HASH)
          {
            return FailureReason::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailureReason>(hashCode);
          }

          return FailureReason::NOT_SET;
        }

        Aws::String GetNameForFailureReason(FailureReason enumValue)
        {
          switch(enumValue)
          {
          case FailureReason::REQUEST_TIMED_OUT:
            return "REQUEST_TIMED_OUT";
          case FailureReason::UNSUPPORTED_ALGORITHM:
            return "UNSUPPORTED_ALGORITHM";
          case FailureReason::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailureReasonMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
