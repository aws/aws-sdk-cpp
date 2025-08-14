/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-recommended-actions/model/Severity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMRecommendedActions
  {
    namespace Model
    {
      namespace SeverityMapper
      {

        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int WARNING_HASH = HashingUtils::HashString("WARNING");
        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");


        Severity GetSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFO_HASH)
          {
            return Severity::INFO;
          }
          else if (hashCode == WARNING_HASH)
          {
            return Severity::WARNING;
          }
          else if (hashCode == CRITICAL_HASH)
          {
            return Severity::CRITICAL;
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
          case Severity::INFO:
            return "INFO";
          case Severity::WARNING:
            return "WARNING";
          case Severity::CRITICAL:
            return "CRITICAL";
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
  } // namespace BCMRecommendedActions
} // namespace Aws
