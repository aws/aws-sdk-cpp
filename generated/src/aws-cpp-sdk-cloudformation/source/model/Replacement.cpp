/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/Replacement.h>
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
      namespace ReplacementMapper
      {

        static constexpr uint32_t True_HASH = ConstExprHashingUtils::HashString("True");
        static constexpr uint32_t False_HASH = ConstExprHashingUtils::HashString("False");
        static constexpr uint32_t Conditional_HASH = ConstExprHashingUtils::HashString("Conditional");


        Replacement GetReplacementForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == True_HASH)
          {
            return Replacement::True;
          }
          else if (hashCode == False_HASH)
          {
            return Replacement::False;
          }
          else if (hashCode == Conditional_HASH)
          {
            return Replacement::Conditional;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Replacement>(hashCode);
          }

          return Replacement::NOT_SET;
        }

        Aws::String GetNameForReplacement(Replacement enumValue)
        {
          switch(enumValue)
          {
          case Replacement::NOT_SET:
            return {};
          case Replacement::True:
            return "True";
          case Replacement::False:
            return "False";
          case Replacement::Conditional:
            return "Conditional";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplacementMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
