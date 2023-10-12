/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/Op.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace OpMapper
      {

        static constexpr uint32_t add_HASH = ConstExprHashingUtils::HashString("add");
        static constexpr uint32_t remove_HASH = ConstExprHashingUtils::HashString("remove");
        static constexpr uint32_t replace_HASH = ConstExprHashingUtils::HashString("replace");
        static constexpr uint32_t move_HASH = ConstExprHashingUtils::HashString("move");
        static constexpr uint32_t copy_HASH = ConstExprHashingUtils::HashString("copy");
        static constexpr uint32_t test_HASH = ConstExprHashingUtils::HashString("test");


        Op GetOpForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == add_HASH)
          {
            return Op::add;
          }
          else if (hashCode == remove_HASH)
          {
            return Op::remove;
          }
          else if (hashCode == replace_HASH)
          {
            return Op::replace;
          }
          else if (hashCode == move_HASH)
          {
            return Op::move;
          }
          else if (hashCode == copy_HASH)
          {
            return Op::copy;
          }
          else if (hashCode == test_HASH)
          {
            return Op::test;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Op>(hashCode);
          }

          return Op::NOT_SET;
        }

        Aws::String GetNameForOp(Op enumValue)
        {
          switch(enumValue)
          {
          case Op::NOT_SET:
            return {};
          case Op::add:
            return "add";
          case Op::remove:
            return "remove";
          case Op::replace:
            return "replace";
          case Op::move:
            return "move";
          case Op::copy:
            return "copy";
          case Op::test:
            return "test";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
