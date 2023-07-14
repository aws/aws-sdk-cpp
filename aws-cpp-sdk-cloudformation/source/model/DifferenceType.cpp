/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DifferenceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace DifferenceTypeMapper
      {

        static const int ADD_HASH = HashingUtils::HashString("ADD");
        static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");
        static const int NOT_EQUAL_HASH = HashingUtils::HashString("NOT_EQUAL");


        DifferenceType GetDifferenceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_HASH)
          {
            return DifferenceType::ADD;
          }
          else if (hashCode == REMOVE_HASH)
          {
            return DifferenceType::REMOVE;
          }
          else if (hashCode == NOT_EQUAL_HASH)
          {
            return DifferenceType::NOT_EQUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DifferenceType>(hashCode);
          }

          return DifferenceType::NOT_SET;
        }

        Aws::String GetNameForDifferenceType(DifferenceType enumValue)
        {
          switch(enumValue)
          {
          case DifferenceType::ADD:
            return "ADD";
          case DifferenceType::REMOVE:
            return "REMOVE";
          case DifferenceType::NOT_EQUAL:
            return "NOT_EQUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DifferenceTypeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
