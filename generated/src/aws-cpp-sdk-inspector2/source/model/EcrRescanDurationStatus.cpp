/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/EcrRescanDurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace EcrRescanDurationStatusMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        EcrRescanDurationStatus GetEcrRescanDurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return EcrRescanDurationStatus::SUCCESS;
          }
          else if (hashCode == PENDING_HASH)
          {
            return EcrRescanDurationStatus::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EcrRescanDurationStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EcrRescanDurationStatus>(hashCode);
          }

          return EcrRescanDurationStatus::NOT_SET;
        }

        Aws::String GetNameForEcrRescanDurationStatus(EcrRescanDurationStatus enumValue)
        {
          switch(enumValue)
          {
          case EcrRescanDurationStatus::NOT_SET:
            return {};
          case EcrRescanDurationStatus::SUCCESS:
            return "SUCCESS";
          case EcrRescanDurationStatus::PENDING:
            return "PENDING";
          case EcrRescanDurationStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EcrRescanDurationStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
