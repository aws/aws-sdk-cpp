/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UnavailabilityReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace UnavailabilityReasonCodeMapper
      {

        static constexpr uint32_t OBJECT_EXCEEDS_SIZE_QUOTA_HASH = ConstExprHashingUtils::HashString("OBJECT_EXCEEDS_SIZE_QUOTA");
        static constexpr uint32_t UNSUPPORTED_OBJECT_TYPE_HASH = ConstExprHashingUtils::HashString("UNSUPPORTED_OBJECT_TYPE");
        static constexpr uint32_t UNSUPPORTED_FINDING_TYPE_HASH = ConstExprHashingUtils::HashString("UNSUPPORTED_FINDING_TYPE");
        static constexpr uint32_t INVALID_CLASSIFICATION_RESULT_HASH = ConstExprHashingUtils::HashString("INVALID_CLASSIFICATION_RESULT");
        static constexpr uint32_t OBJECT_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("OBJECT_UNAVAILABLE");


        UnavailabilityReasonCode GetUnavailabilityReasonCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OBJECT_EXCEEDS_SIZE_QUOTA_HASH)
          {
            return UnavailabilityReasonCode::OBJECT_EXCEEDS_SIZE_QUOTA;
          }
          else if (hashCode == UNSUPPORTED_OBJECT_TYPE_HASH)
          {
            return UnavailabilityReasonCode::UNSUPPORTED_OBJECT_TYPE;
          }
          else if (hashCode == UNSUPPORTED_FINDING_TYPE_HASH)
          {
            return UnavailabilityReasonCode::UNSUPPORTED_FINDING_TYPE;
          }
          else if (hashCode == INVALID_CLASSIFICATION_RESULT_HASH)
          {
            return UnavailabilityReasonCode::INVALID_CLASSIFICATION_RESULT;
          }
          else if (hashCode == OBJECT_UNAVAILABLE_HASH)
          {
            return UnavailabilityReasonCode::OBJECT_UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnavailabilityReasonCode>(hashCode);
          }

          return UnavailabilityReasonCode::NOT_SET;
        }

        Aws::String GetNameForUnavailabilityReasonCode(UnavailabilityReasonCode enumValue)
        {
          switch(enumValue)
          {
          case UnavailabilityReasonCode::NOT_SET:
            return {};
          case UnavailabilityReasonCode::OBJECT_EXCEEDS_SIZE_QUOTA:
            return "OBJECT_EXCEEDS_SIZE_QUOTA";
          case UnavailabilityReasonCode::UNSUPPORTED_OBJECT_TYPE:
            return "UNSUPPORTED_OBJECT_TYPE";
          case UnavailabilityReasonCode::UNSUPPORTED_FINDING_TYPE:
            return "UNSUPPORTED_FINDING_TYPE";
          case UnavailabilityReasonCode::INVALID_CLASSIFICATION_RESULT:
            return "INVALID_CLASSIFICATION_RESULT";
          case UnavailabilityReasonCode::OBJECT_UNAVAILABLE:
            return "OBJECT_UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnavailabilityReasonCodeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
