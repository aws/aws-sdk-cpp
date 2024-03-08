/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/Severity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruReviewer
  {
    namespace Model
    {
      namespace SeverityMapper
      {

        static const int Info_HASH = HashingUtils::HashString("Info");
        static const int Low_HASH = HashingUtils::HashString("Low");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int High_HASH = HashingUtils::HashString("High");
        static const int Critical_HASH = HashingUtils::HashString("Critical");


        Severity GetSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Info_HASH)
          {
            return Severity::Info;
          }
          else if (hashCode == Low_HASH)
          {
            return Severity::Low;
          }
          else if (hashCode == Medium_HASH)
          {
            return Severity::Medium;
          }
          else if (hashCode == High_HASH)
          {
            return Severity::High;
          }
          else if (hashCode == Critical_HASH)
          {
            return Severity::Critical;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Severity>(hashCode);
          }

          return Severity::NOT_SET;
        }

        Aws::String GetNameForSeverity(Severity enumValue)
        {
          switch(enumValue)
          {
          case Severity::NOT_SET:
            return {};
          case Severity::Info:
            return "Info";
          case Severity::Low:
            return "Low";
          case Severity::Medium:
            return "Medium";
          case Severity::High:
            return "High";
          case Severity::Critical:
            return "Critical";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SeverityMapper
    } // namespace Model
  } // namespace CodeGuruReviewer
} // namespace Aws
