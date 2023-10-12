/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/Shape.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexRuntimeV2
  {
    namespace Model
    {
      namespace ShapeMapper
      {

        static constexpr uint32_t Scalar_HASH = ConstExprHashingUtils::HashString("Scalar");
        static constexpr uint32_t List_HASH = ConstExprHashingUtils::HashString("List");
        static constexpr uint32_t Composite_HASH = ConstExprHashingUtils::HashString("Composite");


        Shape GetShapeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Scalar_HASH)
          {
            return Shape::Scalar;
          }
          else if (hashCode == List_HASH)
          {
            return Shape::List;
          }
          else if (hashCode == Composite_HASH)
          {
            return Shape::Composite;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Shape>(hashCode);
          }

          return Shape::NOT_SET;
        }

        Aws::String GetNameForShape(Shape enumValue)
        {
          switch(enumValue)
          {
          case Shape::NOT_SET:
            return {};
          case Shape::Scalar:
            return "Scalar";
          case Shape::List:
            return "List";
          case Shape::Composite:
            return "Composite";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShapeMapper
    } // namespace Model
  } // namespace LexRuntimeV2
} // namespace Aws
