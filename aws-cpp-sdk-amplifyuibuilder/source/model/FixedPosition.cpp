/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FixedPosition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyUIBuilder
  {
    namespace Model
    {
      namespace FixedPositionMapper
      {

        static const int first_HASH = HashingUtils::HashString("first");


        FixedPosition GetFixedPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == first_HASH)
          {
            return FixedPosition::first;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FixedPosition>(hashCode);
          }

          return FixedPosition::NOT_SET;
        }

        Aws::String GetNameForFixedPosition(FixedPosition enumValue)
        {
          switch(enumValue)
          {
          case FixedPosition::first:
            return "first";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FixedPositionMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws
