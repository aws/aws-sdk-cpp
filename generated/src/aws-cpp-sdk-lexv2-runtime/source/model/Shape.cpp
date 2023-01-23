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

        static const int Scalar_HASH = HashingUtils::HashString("Scalar");
        static const int List_HASH = HashingUtils::HashString("List");
        static const int Composite_HASH = HashingUtils::HashString("Composite");


        Shape GetShapeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
