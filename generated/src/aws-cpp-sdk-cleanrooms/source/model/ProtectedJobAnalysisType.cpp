/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedJobAnalysisType.h>
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
      namespace ProtectedJobAnalysisTypeMapper
      {

        static const int DIRECT_ANALYSIS_HASH = HashingUtils::HashString("DIRECT_ANALYSIS");


        ProtectedJobAnalysisType GetProtectedJobAnalysisTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIRECT_ANALYSIS_HASH)
          {
            return ProtectedJobAnalysisType::DIRECT_ANALYSIS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectedJobAnalysisType>(hashCode);
          }

          return ProtectedJobAnalysisType::NOT_SET;
        }

        Aws::String GetNameForProtectedJobAnalysisType(ProtectedJobAnalysisType enumValue)
        {
          switch(enumValue)
          {
          case ProtectedJobAnalysisType::NOT_SET:
            return {};
          case ProtectedJobAnalysisType::DIRECT_ANALYSIS:
            return "DIRECT_ANALYSIS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtectedJobAnalysisTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
