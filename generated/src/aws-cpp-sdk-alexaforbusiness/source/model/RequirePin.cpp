/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/RequirePin.h>
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
      namespace RequirePinMapper
      {

        static const int YES_HASH = HashingUtils::HashString("YES");
        static const int NO_HASH = HashingUtils::HashString("NO");
        static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");


        RequirePin GetRequirePinForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == YES_HASH)
          {
            return RequirePin::YES;
          }
          else if (hashCode == NO_HASH)
          {
            return RequirePin::NO;
          }
          else if (hashCode == OPTIONAL_HASH)
          {
            return RequirePin::OPTIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequirePin>(hashCode);
          }

          return RequirePin::NOT_SET;
        }

        Aws::String GetNameForRequirePin(RequirePin enumValue)
        {
          switch(enumValue)
          {
          case RequirePin::YES:
            return "YES";
          case RequirePin::NO:
            return "NO";
          case RequirePin::OPTIONAL:
            return "OPTIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequirePinMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
