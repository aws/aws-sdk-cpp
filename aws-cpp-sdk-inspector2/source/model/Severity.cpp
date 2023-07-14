﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Severity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace SeverityMapper
      {

        static const int INFORMATIONAL_HASH = HashingUtils::HashString("INFORMATIONAL");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int UNTRIAGED_HASH = HashingUtils::HashString("UNTRIAGED");


        Severity GetSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFORMATIONAL_HASH)
          {
            return Severity::INFORMATIONAL;
          }
          else if (hashCode == LOW_HASH)
          {
            return Severity::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return Severity::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return Severity::HIGH;
          }
          else if (hashCode == CRITICAL_HASH)
          {
            return Severity::CRITICAL;
          }
          else if (hashCode == UNTRIAGED_HASH)
          {
            return Severity::UNTRIAGED;
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
          case Severity::INFORMATIONAL:
            return "INFORMATIONAL";
          case Severity::LOW:
            return "LOW";
          case Severity::MEDIUM:
            return "MEDIUM";
          case Severity::HIGH:
            return "HIGH";
          case Severity::CRITICAL:
            return "CRITICAL";
          case Severity::UNTRIAGED:
            return "UNTRIAGED";
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
  } // namespace Inspector2
} // namespace Aws
