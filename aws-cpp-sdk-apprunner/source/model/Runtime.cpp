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

        static const int PYTHON_3_HASH = HashingUtils::HashString("PYTHON_3");
        static const int NODEJS_12_HASH = HashingUtils::HashString("NODEJS_12");
        static const int NODEJS_14_HASH = HashingUtils::HashString("NODEJS_14");
        static const int CORRETTO_8_HASH = HashingUtils::HashString("CORRETTO_8");
        static const int CORRETTO_11_HASH = HashingUtils::HashString("CORRETTO_11");
        static const int NODEJS_16_HASH = HashingUtils::HashString("NODEJS_16");


        Runtime GetRuntimeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
