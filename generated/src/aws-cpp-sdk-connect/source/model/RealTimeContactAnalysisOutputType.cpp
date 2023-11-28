/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisOutputType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace RealTimeContactAnalysisOutputTypeMapper
      {

        static const int Raw_HASH = HashingUtils::HashString("Raw");
        static const int Redacted_HASH = HashingUtils::HashString("Redacted");


        RealTimeContactAnalysisOutputType GetRealTimeContactAnalysisOutputTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Raw_HASH)
          {
            return RealTimeContactAnalysisOutputType::Raw;
          }
          else if (hashCode == Redacted_HASH)
          {
            return RealTimeContactAnalysisOutputType::Redacted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RealTimeContactAnalysisOutputType>(hashCode);
          }

          return RealTimeContactAnalysisOutputType::NOT_SET;
        }

        Aws::String GetNameForRealTimeContactAnalysisOutputType(RealTimeContactAnalysisOutputType enumValue)
        {
          switch(enumValue)
          {
          case RealTimeContactAnalysisOutputType::NOT_SET:
            return {};
          case RealTimeContactAnalysisOutputType::Raw:
            return "Raw";
          case RealTimeContactAnalysisOutputType::Redacted:
            return "Redacted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RealTimeContactAnalysisOutputTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
