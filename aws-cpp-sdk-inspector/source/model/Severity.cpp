/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/Severity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace SeverityMapper
      {

        static const int Low_HASH = HashingUtils::HashString("Low");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int High_HASH = HashingUtils::HashString("High");
        static const int Informational_HASH = HashingUtils::HashString("Informational");
        static const int Undefined_HASH = HashingUtils::HashString("Undefined");


        Severity GetSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Low_HASH)
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
          else if (hashCode == Informational_HASH)
          {
            return Severity::Informational;
          }
          else if (hashCode == Undefined_HASH)
          {
            return Severity::Undefined;
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
          case Severity::Low:
            return "Low";
          case Severity::Medium:
            return "Medium";
          case Severity::High:
            return "High";
          case Severity::Informational:
            return "Informational";
          case Severity::Undefined:
            return "Undefined";
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
  } // namespace Inspector
} // namespace Aws
