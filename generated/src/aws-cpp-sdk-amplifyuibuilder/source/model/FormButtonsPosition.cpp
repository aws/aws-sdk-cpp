/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormButtonsPosition.h>
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
      namespace FormButtonsPositionMapper
      {

        static const int top_HASH = HashingUtils::HashString("top");
        static const int bottom_HASH = HashingUtils::HashString("bottom");
        static const int top_and_bottom_HASH = HashingUtils::HashString("top_and_bottom");


        FormButtonsPosition GetFormButtonsPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == top_HASH)
          {
            return FormButtonsPosition::top;
          }
          else if (hashCode == bottom_HASH)
          {
            return FormButtonsPosition::bottom;
          }
          else if (hashCode == top_and_bottom_HASH)
          {
            return FormButtonsPosition::top_and_bottom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FormButtonsPosition>(hashCode);
          }

          return FormButtonsPosition::NOT_SET;
        }

        Aws::String GetNameForFormButtonsPosition(FormButtonsPosition enumValue)
        {
          switch(enumValue)
          {
          case FormButtonsPosition::top:
            return "top";
          case FormButtonsPosition::bottom:
            return "bottom";
          case FormButtonsPosition::top_and_bottom:
            return "top_and_bottom";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormButtonsPositionMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws
