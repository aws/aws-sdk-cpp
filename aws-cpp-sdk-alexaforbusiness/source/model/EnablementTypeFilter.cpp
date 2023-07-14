/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/EnablementTypeFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace EnablementTypeFilterMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        EnablementTypeFilter GetEnablementTypeFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return EnablementTypeFilter::ENABLED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return EnablementTypeFilter::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnablementTypeFilter>(hashCode);
          }

          return EnablementTypeFilter::NOT_SET;
        }

        Aws::String GetNameForEnablementTypeFilter(EnablementTypeFilter enumValue)
        {
          switch(enumValue)
          {
          case EnablementTypeFilter::ENABLED:
            return "ENABLED";
          case EnablementTypeFilter::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnablementTypeFilterMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
