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

        static const int OBJECT_EXCEEDS_SIZE_QUOTA_HASH = HashingUtils::HashString("OBJECT_EXCEEDS_SIZE_QUOTA");
        static const int UNSUPPORTED_OBJECT_TYPE_HASH = HashingUtils::HashString("UNSUPPORTED_OBJECT_TYPE");
        static const int UNSUPPORTED_FINDING_TYPE_HASH = HashingUtils::HashString("UNSUPPORTED_FINDING_TYPE");
        static const int INVALID_CLASSIFICATION_RESULT_HASH = HashingUtils::HashString("INVALID_CLASSIFICATION_RESULT");
        static const int OBJECT_UNAVAILABLE_HASH = HashingUtils::HashString("OBJECT_UNAVAILABLE");
        static const int ACCOUNT_NOT_IN_ORGANIZATION_HASH = HashingUtils::HashString("ACCOUNT_NOT_IN_ORGANIZATION");
        static const int MISSING_GET_MEMBER_PERMISSION_HASH = HashingUtils::HashString("MISSING_GET_MEMBER_PERMISSION");
        static const int ROLE_TOO_PERMISSIVE_HASH = HashingUtils::HashString("ROLE_TOO_PERMISSIVE");
        static const int MEMBER_ROLE_TOO_PERMISSIVE_HASH = HashingUtils::HashString("MEMBER_ROLE_TOO_PERMISSIVE");
        static const int INVALID_RESULT_SIGNATURE_HASH = HashingUtils::HashString("INVALID_RESULT_SIGNATURE");
        static const int RESULT_NOT_SIGNED_HASH = HashingUtils::HashString("RESULT_NOT_SIGNED");


        UnavailabilityReasonCode GetUnavailabilityReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == ACCOUNT_NOT_IN_ORGANIZATION_HASH)
          {
            return UnavailabilityReasonCode::ACCOUNT_NOT_IN_ORGANIZATION;
          }
          else if (hashCode == MISSING_GET_MEMBER_PERMISSION_HASH)
          {
            return UnavailabilityReasonCode::MISSING_GET_MEMBER_PERMISSION;
          }
          else if (hashCode == ROLE_TOO_PERMISSIVE_HASH)
          {
            return UnavailabilityReasonCode::ROLE_TOO_PERMISSIVE;
          }
          else if (hashCode == MEMBER_ROLE_TOO_PERMISSIVE_HASH)
          {
            return UnavailabilityReasonCode::MEMBER_ROLE_TOO_PERMISSIVE;
          }
          else if (hashCode == INVALID_RESULT_SIGNATURE_HASH)
          {
            return UnavailabilityReasonCode::INVALID_RESULT_SIGNATURE;
          }
          else if (hashCode == RESULT_NOT_SIGNED_HASH)
          {
            return UnavailabilityReasonCode::RESULT_NOT_SIGNED;
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
          case UnavailabilityReasonCode::ACCOUNT_NOT_IN_ORGANIZATION:
            return "ACCOUNT_NOT_IN_ORGANIZATION";
          case UnavailabilityReasonCode::MISSING_GET_MEMBER_PERMISSION:
            return "MISSING_GET_MEMBER_PERMISSION";
          case UnavailabilityReasonCode::ROLE_TOO_PERMISSIVE:
            return "ROLE_TOO_PERMISSIVE";
          case UnavailabilityReasonCode::MEMBER_ROLE_TOO_PERMISSIVE:
            return "MEMBER_ROLE_TOO_PERMISSIVE";
          case UnavailabilityReasonCode::INVALID_RESULT_SIGNATURE:
            return "INVALID_RESULT_SIGNATURE";
          case UnavailabilityReasonCode::RESULT_NOT_SIGNED:
            return "RESULT_NOT_SIGNED";
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
