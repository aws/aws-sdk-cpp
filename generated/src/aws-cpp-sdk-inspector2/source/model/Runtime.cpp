/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Runtime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace RuntimeMapper
      {

        static const int NODEJS_HASH = HashingUtils::HashString("NODEJS");
        static const int NODEJS_12_X_HASH = HashingUtils::HashString("NODEJS_12_X");
        static const int NODEJS_14_X_HASH = HashingUtils::HashString("NODEJS_14_X");
        static const int NODEJS_16_X_HASH = HashingUtils::HashString("NODEJS_16_X");
        static const int JAVA_8_HASH = HashingUtils::HashString("JAVA_8");
        static const int JAVA_8_AL2_HASH = HashingUtils::HashString("JAVA_8_AL2");
        static const int JAVA_11_HASH = HashingUtils::HashString("JAVA_11");
        static const int PYTHON_3_7_HASH = HashingUtils::HashString("PYTHON_3_7");
        static const int PYTHON_3_8_HASH = HashingUtils::HashString("PYTHON_3_8");
        static const int PYTHON_3_9_HASH = HashingUtils::HashString("PYTHON_3_9");
        static const int UNSUPPORTED_HASH = HashingUtils::HashString("UNSUPPORTED");
        static const int NODEJS_18_X_HASH = HashingUtils::HashString("NODEJS_18_X");
        static const int GO_1_X_HASH = HashingUtils::HashString("GO_1_X");
        static const int JAVA_17_HASH = HashingUtils::HashString("JAVA_17");
        static const int PYTHON_3_10_HASH = HashingUtils::HashString("PYTHON_3_10");
        static const int PYTHON_3_11_HASH = HashingUtils::HashString("PYTHON_3_11");
        static const int DOTNETCORE_3_1_HASH = HashingUtils::HashString("DOTNETCORE_3_1");
        static const int DOTNET_6_HASH = HashingUtils::HashString("DOTNET_6");
        static const int DOTNET_7_HASH = HashingUtils::HashString("DOTNET_7");
        static const int RUBY_2_7_HASH = HashingUtils::HashString("RUBY_2_7");
        static const int RUBY_3_2_HASH = HashingUtils::HashString("RUBY_3_2");


        Runtime GetRuntimeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NODEJS_HASH)
          {
            return Runtime::NODEJS;
          }
          else if (hashCode == NODEJS_12_X_HASH)
          {
            return Runtime::NODEJS_12_X;
          }
          else if (hashCode == NODEJS_14_X_HASH)
          {
            return Runtime::NODEJS_14_X;
          }
          else if (hashCode == NODEJS_16_X_HASH)
          {
            return Runtime::NODEJS_16_X;
          }
          else if (hashCode == JAVA_8_HASH)
          {
            return Runtime::JAVA_8;
          }
          else if (hashCode == JAVA_8_AL2_HASH)
          {
            return Runtime::JAVA_8_AL2;
          }
          else if (hashCode == JAVA_11_HASH)
          {
            return Runtime::JAVA_11;
          }
          else if (hashCode == PYTHON_3_7_HASH)
          {
            return Runtime::PYTHON_3_7;
          }
          else if (hashCode == PYTHON_3_8_HASH)
          {
            return Runtime::PYTHON_3_8;
          }
          else if (hashCode == PYTHON_3_9_HASH)
          {
            return Runtime::PYTHON_3_9;
          }
          else if (hashCode == UNSUPPORTED_HASH)
          {
            return Runtime::UNSUPPORTED;
          }
          else if (hashCode == NODEJS_18_X_HASH)
          {
            return Runtime::NODEJS_18_X;
          }
          else if (hashCode == GO_1_X_HASH)
          {
            return Runtime::GO_1_X;
          }
          else if (hashCode == JAVA_17_HASH)
          {
            return Runtime::JAVA_17;
          }
          else if (hashCode == PYTHON_3_10_HASH)
          {
            return Runtime::PYTHON_3_10;
          }
          else if (hashCode == PYTHON_3_11_HASH)
          {
            return Runtime::PYTHON_3_11;
          }
          else if (hashCode == DOTNETCORE_3_1_HASH)
          {
            return Runtime::DOTNETCORE_3_1;
          }
          else if (hashCode == DOTNET_6_HASH)
          {
            return Runtime::DOTNET_6;
          }
          else if (hashCode == DOTNET_7_HASH)
          {
            return Runtime::DOTNET_7;
          }
          else if (hashCode == RUBY_2_7_HASH)
          {
            return Runtime::RUBY_2_7;
          }
          else if (hashCode == RUBY_3_2_HASH)
          {
            return Runtime::RUBY_3_2;
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
          case Runtime::NODEJS:
            return "NODEJS";
          case Runtime::NODEJS_12_X:
            return "NODEJS_12_X";
          case Runtime::NODEJS_14_X:
            return "NODEJS_14_X";
          case Runtime::NODEJS_16_X:
            return "NODEJS_16_X";
          case Runtime::JAVA_8:
            return "JAVA_8";
          case Runtime::JAVA_8_AL2:
            return "JAVA_8_AL2";
          case Runtime::JAVA_11:
            return "JAVA_11";
          case Runtime::PYTHON_3_7:
            return "PYTHON_3_7";
          case Runtime::PYTHON_3_8:
            return "PYTHON_3_8";
          case Runtime::PYTHON_3_9:
            return "PYTHON_3_9";
          case Runtime::UNSUPPORTED:
            return "UNSUPPORTED";
          case Runtime::NODEJS_18_X:
            return "NODEJS_18_X";
          case Runtime::GO_1_X:
            return "GO_1_X";
          case Runtime::JAVA_17:
            return "JAVA_17";
          case Runtime::PYTHON_3_10:
            return "PYTHON_3_10";
          case Runtime::PYTHON_3_11:
            return "PYTHON_3_11";
          case Runtime::DOTNETCORE_3_1:
            return "DOTNETCORE_3_1";
          case Runtime::DOTNET_6:
            return "DOTNET_6";
          case Runtime::DOTNET_7:
            return "DOTNET_7";
          case Runtime::RUBY_2_7:
            return "RUBY_2_7";
          case Runtime::RUBY_3_2:
            return "RUBY_3_2";
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
  } // namespace Inspector2
} // namespace Aws
