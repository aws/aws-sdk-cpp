/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SourceType.h>
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
      namespace SourceTypeMapper
      {

        static const int SALESFORCE_HASH = HashingUtils::HashString("SALESFORCE");
        static const int ZENDESK_HASH = HashingUtils::HashString("ZENDESK");
        static const int CASES_HASH = HashingUtils::HashString("CASES");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SALESFORCE_HASH)
          {
            return SourceType::SALESFORCE;
          }
          else if (hashCode == ZENDESK_HASH)
          {
            return SourceType::ZENDESK;
          }
          else if (hashCode == CASES_HASH)
          {
            return SourceType::CASES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceType>(hashCode);
          }

          return SourceType::NOT_SET;
        }

        Aws::String GetNameForSourceType(SourceType enumValue)
        {
          switch(enumValue)
          {
          case SourceType::NOT_SET:
            return {};
          case SourceType::SALESFORCE:
            return "SALESFORCE";
          case SourceType::ZENDESK:
            return "ZENDESK";
          case SourceType::CASES:
            return "CASES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
