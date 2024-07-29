/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AdditionalAnalyses.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace AdditionalAnalysesMapper
      {

        static const int ALLOWED_HASH = HashingUtils::HashString("ALLOWED");
        static const int REQUIRED_HASH = HashingUtils::HashString("REQUIRED");
        static const int NOT_ALLOWED_HASH = HashingUtils::HashString("NOT_ALLOWED");


        AdditionalAnalyses GetAdditionalAnalysesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOWED_HASH)
          {
            return AdditionalAnalyses::ALLOWED;
          }
          else if (hashCode == REQUIRED_HASH)
          {
            return AdditionalAnalyses::REQUIRED;
          }
          else if (hashCode == NOT_ALLOWED_HASH)
          {
            return AdditionalAnalyses::NOT_ALLOWED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdditionalAnalyses>(hashCode);
          }

          return AdditionalAnalyses::NOT_SET;
        }

        Aws::String GetNameForAdditionalAnalyses(AdditionalAnalyses enumValue)
        {
          switch(enumValue)
          {
          case AdditionalAnalyses::NOT_SET:
            return {};
          case AdditionalAnalyses::ALLOWED:
            return "ALLOWED";
          case AdditionalAnalyses::REQUIRED:
            return "REQUIRED";
          case AdditionalAnalyses::NOT_ALLOWED:
            return "NOT_ALLOWED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdditionalAnalysesMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
