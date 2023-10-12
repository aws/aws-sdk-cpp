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

        static constexpr uint32_t Info_HASH = ConstExprHashingUtils::HashString("Info");
        static constexpr uint32_t Low_HASH = ConstExprHashingUtils::HashString("Low");
        static constexpr uint32_t Medium_HASH = ConstExprHashingUtils::HashString("Medium");
        static constexpr uint32_t High_HASH = ConstExprHashingUtils::HashString("High");
        static constexpr uint32_t Critical_HASH = ConstExprHashingUtils::HashString("Critical");


        Severity GetSeverityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
