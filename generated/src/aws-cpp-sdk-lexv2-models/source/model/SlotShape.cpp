/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotShape.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace SlotShapeMapper
      {

        static const int Scalar_HASH = HashingUtils::HashString("Scalar");
        static const int List_HASH = HashingUtils::HashString("List");


        SlotShape GetSlotShapeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Scalar_HASH)
          {
            return SlotShape::Scalar;
          }
          else if (hashCode == List_HASH)
          {
            return SlotShape::List;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlotShape>(hashCode);
          }

          return SlotShape::NOT_SET;
        }

        Aws::String GetNameForSlotShape(SlotShape enumValue)
        {
          switch(enumValue)
          {
          case SlotShape::NOT_SET:
            return {};
          case SlotShape::Scalar:
            return "Scalar";
          case SlotShape::List:
            return "List";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlotShapeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
