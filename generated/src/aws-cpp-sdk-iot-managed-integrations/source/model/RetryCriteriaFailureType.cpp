/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/RetryCriteriaFailureType.h>
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
      namespace RetryCriteriaFailureTypeMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        RetryCriteriaFailureType GetRetryCriteriaFailureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return RetryCriteriaFailureType::FAILED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return RetryCriteriaFailureType::TIMED_OUT;
          }
          else if (hashCode == ALL_HASH)
          {
            return RetryCriteriaFailureType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetryCriteriaFailureType>(hashCode);
          }

          return RetryCriteriaFailureType::NOT_SET;
        }

        Aws::String GetNameForRetryCriteriaFailureType(RetryCriteriaFailureType enumValue)
        {
          switch(enumValue)
          {
          case RetryCriteriaFailureType::NOT_SET:
            return {};
          case RetryCriteriaFailureType::FAILED:
            return "FAILED";
          case RetryCriteriaFailureType::TIMED_OUT:
            return "TIMED_OUT";
          case RetryCriteriaFailureType::ALL:
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

      } // namespace RetryCriteriaFailureTypeMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
