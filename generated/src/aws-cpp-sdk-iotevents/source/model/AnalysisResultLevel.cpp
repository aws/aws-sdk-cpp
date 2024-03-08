/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AnalysisResultLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEvents
  {
    namespace Model
    {
      namespace AnalysisResultLevelMapper
      {

        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int WARNING_HASH = HashingUtils::HashString("WARNING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        AnalysisResultLevel GetAnalysisResultLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFO_HASH)
          {
            return AnalysisResultLevel::INFO;
          }
          else if (hashCode == WARNING_HASH)
          {
            return AnalysisResultLevel::WARNING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return AnalysisResultLevel::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisResultLevel>(hashCode);
          }

          return AnalysisResultLevel::NOT_SET;
        }

        Aws::String GetNameForAnalysisResultLevel(AnalysisResultLevel enumValue)
        {
          switch(enumValue)
          {
          case AnalysisResultLevel::NOT_SET:
            return {};
          case AnalysisResultLevel::INFO:
            return "INFO";
          case AnalysisResultLevel::WARNING:
            return "WARNING";
          case AnalysisResultLevel::ERROR_:
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

      } // namespace AnalysisResultLevelMapper
    } // namespace Model
  } // namespace IoTEvents
} // namespace Aws
