/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/FailureReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMRContainers
  {
    namespace Model
    {
      namespace FailureReasonMapper
      {

        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");
        static constexpr uint32_t USER_ERROR_HASH = ConstExprHashingUtils::HashString("USER_ERROR");
        static constexpr uint32_t VALIDATION_ERROR_HASH = ConstExprHashingUtils::HashString("VALIDATION_ERROR");
        static constexpr uint32_t CLUSTER_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("CLUSTER_UNAVAILABLE");


        FailureReason GetFailureReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return FailureReason::INTERNAL_ERROR;
          }
          else if (hashCode == USER_ERROR_HASH)
          {
            return FailureReason::USER_ERROR;
          }
          else if (hashCode == VALIDATION_ERROR_HASH)
          {
            return FailureReason::VALIDATION_ERROR;
          }
          else if (hashCode == CLUSTER_UNAVAILABLE_HASH)
          {
            return FailureReason::CLUSTER_UNAVAILABLE;
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
          case FailureReason::NOT_SET:
            return {};
          case FailureReason::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case FailureReason::USER_ERROR:
            return "USER_ERROR";
          case FailureReason::VALIDATION_ERROR:
            return "VALIDATION_ERROR";
          case FailureReason::CLUSTER_UNAVAILABLE:
            return "CLUSTER_UNAVAILABLE";
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
  } // namespace EMRContainers
} // namespace Aws
