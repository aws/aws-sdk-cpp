/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/Runtime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace RuntimeMapper
      {

        static constexpr uint32_t PYTHON_3_HASH = ConstExprHashingUtils::HashString("PYTHON_3");
        static constexpr uint32_t NODEJS_12_HASH = ConstExprHashingUtils::HashString("NODEJS_12");
        static constexpr uint32_t NODEJS_14_HASH = ConstExprHashingUtils::HashString("NODEJS_14");
        static constexpr uint32_t CORRETTO_8_HASH = ConstExprHashingUtils::HashString("CORRETTO_8");
        static constexpr uint32_t CORRETTO_11_HASH = ConstExprHashingUtils::HashString("CORRETTO_11");
        static constexpr uint32_t NODEJS_16_HASH = ConstExprHashingUtils::HashString("NODEJS_16");
        static constexpr uint32_t GO_1_HASH = ConstExprHashingUtils::HashString("GO_1");
        static constexpr uint32_t DOTNET_6_HASH = ConstExprHashingUtils::HashString("DOTNET_6");
        static constexpr uint32_t PHP_81_HASH = ConstExprHashingUtils::HashString("PHP_81");
        static constexpr uint32_t RUBY_31_HASH = ConstExprHashingUtils::HashString("RUBY_31");


        Runtime GetRuntimeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PYTHON_3_HASH)
          {
            return Runtime::PYTHON_3;
          }
          else if (hashCode == NODEJS_12_HASH)
          {
            return Runtime::NODEJS_12;
          }
          else if (hashCode == NODEJS_14_HASH)
          {
            return Runtime::NODEJS_14;
          }
          else if (hashCode == CORRETTO_8_HASH)
          {
            return Runtime::CORRETTO_8;
          }
          else if (hashCode == CORRETTO_11_HASH)
          {
            return Runtime::CORRETTO_11;
          }
          else if (hashCode == NODEJS_16_HASH)
          {
            return Runtime::NODEJS_16;
          }
          else if (hashCode == GO_1_HASH)
          {
            return Runtime::GO_1;
          }
          else if (hashCode == DOTNET_6_HASH)
          {
            return Runtime::DOTNET_6;
          }
          else if (hashCode == PHP_81_HASH)
          {
            return Runtime::PHP_81;
          }
          else if (hashCode == RUBY_31_HASH)
          {
            return Runtime::RUBY_31;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Runtime>(hashCode);
          }

          return Runtime::NOT_SET;
        }

        Aws::String GetNameForRuntime(Runtime enumValue)
        {
          switch(enumValue)
          {
          case Runtime::NOT_SET:
            return {};
          case Runtime::PYTHON_3:
            return "PYTHON_3";
          case Runtime::NODEJS_12:
            return "NODEJS_12";
          case Runtime::NODEJS_14:
            return "NODEJS_14";
          case Runtime::CORRETTO_8:
            return "CORRETTO_8";
          case Runtime::CORRETTO_11:
            return "CORRETTO_11";
          case Runtime::NODEJS_16:
            return "NODEJS_16";
          case Runtime::GO_1:
            return "GO_1";
          case Runtime::DOTNET_6:
            return "DOTNET_6";
          case Runtime::PHP_81:
            return "PHP_81";
          case Runtime::RUBY_31:
            return "RUBY_31";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuntimeMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
