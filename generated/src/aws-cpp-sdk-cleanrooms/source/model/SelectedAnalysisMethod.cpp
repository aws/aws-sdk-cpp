/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SelectedAnalysisMethod.h>
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
      namespace SelectedAnalysisMethodMapper
      {

        static const int DIRECT_QUERY_HASH = HashingUtils::HashString("DIRECT_QUERY");
        static const int DIRECT_JOB_HASH = HashingUtils::HashString("DIRECT_JOB");


        SelectedAnalysisMethod GetSelectedAnalysisMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIRECT_QUERY_HASH)
          {
            return SelectedAnalysisMethod::DIRECT_QUERY;
          }
          else if (hashCode == DIRECT_JOB_HASH)
          {
            return SelectedAnalysisMethod::DIRECT_JOB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SelectedAnalysisMethod>(hashCode);
          }

          return SelectedAnalysisMethod::NOT_SET;
        }

        Aws::String GetNameForSelectedAnalysisMethod(SelectedAnalysisMethod enumValue)
        {
          switch(enumValue)
          {
          case SelectedAnalysisMethod::NOT_SET:
            return {};
          case SelectedAnalysisMethod::DIRECT_QUERY:
            return "DIRECT_QUERY";
          case SelectedAnalysisMethod::DIRECT_JOB:
            return "DIRECT_JOB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SelectedAnalysisMethodMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
