﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/SlotConstraint.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace SlotConstraintMapper
      {

        static const int Required_HASH = HashingUtils::HashString("Required");
        static const int Optional_HASH = HashingUtils::HashString("Optional");


        SlotConstraint GetSlotConstraintForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Required_HASH)
          {
            return SlotConstraint::Required;
          }
          else if (hashCode == Optional_HASH)
          {
            return SlotConstraint::Optional;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlotConstraint>(hashCode);
          }

          return SlotConstraint::NOT_SET;
        }

        Aws::String GetNameForSlotConstraint(SlotConstraint enumValue)
        {
          switch(enumValue)
          {
          case SlotConstraint::Required:
            return "Required";
          case SlotConstraint::Optional:
            return "Optional";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlotConstraintMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
