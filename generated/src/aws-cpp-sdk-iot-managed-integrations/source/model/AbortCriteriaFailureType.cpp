/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/AbortCriteriaFailureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace AbortCriteriaFailureTypeMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        AbortCriteriaFailureType GetAbortCriteriaFailureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return AbortCriteriaFailureType::FAILED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return AbortCriteriaFailureType::REJECTED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return AbortCriteriaFailureType::TIMED_OUT;
          }
          else if (hashCode == ALL_HASH)
          {
            return AbortCriteriaFailureType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AbortCriteriaFailureType>(hashCode);
          }

          return AbortCriteriaFailureType::NOT_SET;
        }

        Aws::String GetNameForAbortCriteriaFailureType(AbortCriteriaFailureType enumValue)
        {
          switch(enumValue)
          {
          case AbortCriteriaFailureType::NOT_SET:
            return {};
          case AbortCriteriaFailureType::FAILED:
            return "FAILED";
          case AbortCriteriaFailureType::REJECTED:
            return "REJECTED";
          case AbortCriteriaFailureType::TIMED_OUT:
            return "TIMED_OUT";
          case AbortCriteriaFailureType::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AbortCriteriaFailureTypeMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
