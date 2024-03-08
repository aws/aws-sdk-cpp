/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/SummaryChecksumAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BackupStorage
  {
    namespace Model
    {
      namespace SummaryChecksumAlgorithmMapper
      {

        static const int SUMMARY_HASH = HashingUtils::HashString("SUMMARY");


        SummaryChecksumAlgorithm GetSummaryChecksumAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUMMARY_HASH)
          {
            return SummaryChecksumAlgorithm::SUMMARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SummaryChecksumAlgorithm>(hashCode);
          }

          return SummaryChecksumAlgorithm::NOT_SET;
        }

        Aws::String GetNameForSummaryChecksumAlgorithm(SummaryChecksumAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case SummaryChecksumAlgorithm::NOT_SET:
            return {};
          case SummaryChecksumAlgorithm::SUMMARY:
            return "SUMMARY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SummaryChecksumAlgorithmMapper
    } // namespace Model
  } // namespace BackupStorage
} // namespace Aws
