/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/ResolutionMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace ResolutionMethodMapper
      {

        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int UNRESOLVED_HASH = HashingUtils::HashString("UNRESOLVED");


        ResolutionMethod GetResolutionMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANUAL_HASH)
          {
            return ResolutionMethod::MANUAL;
          }
          else if (hashCode == AUTOMATIC_HASH)
          {
            return ResolutionMethod::AUTOMATIC;
          }
          else if (hashCode == UNRESOLVED_HASH)
          {
            return ResolutionMethod::UNRESOLVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolutionMethod>(hashCode);
          }

          return ResolutionMethod::NOT_SET;
        }

        Aws::String GetNameForResolutionMethod(ResolutionMethod enumValue)
        {
          switch(enumValue)
          {
          case ResolutionMethod::NOT_SET:
            return {};
          case ResolutionMethod::MANUAL:
            return "MANUAL";
          case ResolutionMethod::AUTOMATIC:
            return "AUTOMATIC";
          case ResolutionMethod::UNRESOLVED:
            return "UNRESOLVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolutionMethodMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
