/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/ScanState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruSecurity
  {
    namespace Model
    {
      namespace ScanStateMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Successful_HASH = HashingUtils::HashString("Successful");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        ScanState GetScanStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return ScanState::InProgress;
          }
          else if (hashCode == Successful_HASH)
          {
            return ScanState::Successful;
          }
          else if (hashCode == Failed_HASH)
          {
            return ScanState::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanState>(hashCode);
          }

          return ScanState::NOT_SET;
        }

        Aws::String GetNameForScanState(ScanState enumValue)
        {
          switch(enumValue)
          {
          case ScanState::NOT_SET:
            return {};
          case ScanState::InProgress:
            return "InProgress";
          case ScanState::Successful:
            return "Successful";
          case ScanState::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanStateMapper
    } // namespace Model
  } // namespace CodeGuruSecurity
} // namespace Aws
