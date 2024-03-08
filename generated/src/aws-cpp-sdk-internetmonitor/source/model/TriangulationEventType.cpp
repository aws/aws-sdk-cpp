/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/TriangulationEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace InternetMonitor
  {
    namespace Model
    {
      namespace TriangulationEventTypeMapper
      {

        static const int AWS_HASH = HashingUtils::HashString("AWS");
        static const int Internet_HASH = HashingUtils::HashString("Internet");


        TriangulationEventType GetTriangulationEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_HASH)
          {
            return TriangulationEventType::AWS;
          }
          else if (hashCode == Internet_HASH)
          {
            return TriangulationEventType::Internet;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TriangulationEventType>(hashCode);
          }

          return TriangulationEventType::NOT_SET;
        }

        Aws::String GetNameForTriangulationEventType(TriangulationEventType enumValue)
        {
          switch(enumValue)
          {
          case TriangulationEventType::NOT_SET:
            return {};
          case TriangulationEventType::AWS:
            return "AWS";
          case TriangulationEventType::Internet:
            return "Internet";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TriangulationEventTypeMapper
    } // namespace Model
  } // namespace InternetMonitor
} // namespace Aws
