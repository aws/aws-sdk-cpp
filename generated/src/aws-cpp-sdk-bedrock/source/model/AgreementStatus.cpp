/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AgreementStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace AgreementStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int NOT_AVAILABLE_HASH = HashingUtils::HashString("NOT_AVAILABLE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        AgreementStatus GetAgreementStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return AgreementStatus::AVAILABLE;
          }
          else if (hashCode == PENDING_HASH)
          {
            return AgreementStatus::PENDING;
          }
          else if (hashCode == NOT_AVAILABLE_HASH)
          {
            return AgreementStatus::NOT_AVAILABLE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return AgreementStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgreementStatus>(hashCode);
          }

          return AgreementStatus::NOT_SET;
        }

        Aws::String GetNameForAgreementStatus(AgreementStatus enumValue)
        {
          switch(enumValue)
          {
          case AgreementStatus::NOT_SET:
            return {};
          case AgreementStatus::AVAILABLE:
            return "AVAILABLE";
          case AgreementStatus::PENDING:
            return "PENDING";
          case AgreementStatus::NOT_AVAILABLE:
            return "NOT_AVAILABLE";
          case AgreementStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgreementStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
