/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnalysisFilterAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace AnalysisFilterAttributeMapper
      {

        static const int QUICKSIGHT_USER_HASH = HashingUtils::HashString("QUICKSIGHT_USER");


        AnalysisFilterAttribute GetAnalysisFilterAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUICKSIGHT_USER_HASH)
          {
            return AnalysisFilterAttribute::QUICKSIGHT_USER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisFilterAttribute>(hashCode);
          }

          return AnalysisFilterAttribute::NOT_SET;
        }

        Aws::String GetNameForAnalysisFilterAttribute(AnalysisFilterAttribute enumValue)
        {
          switch(enumValue)
          {
          case AnalysisFilterAttribute::QUICKSIGHT_USER:
            return "QUICKSIGHT_USER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalysisFilterAttributeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
