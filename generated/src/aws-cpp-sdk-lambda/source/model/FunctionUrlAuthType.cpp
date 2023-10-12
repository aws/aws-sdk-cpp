/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/FunctionUrlAuthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace FunctionUrlAuthTypeMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t AWS_IAM_HASH = ConstExprHashingUtils::HashString("AWS_IAM");


        FunctionUrlAuthType GetFunctionUrlAuthTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return FunctionUrlAuthType::NONE;
          }
          else if (hashCode == AWS_IAM_HASH)
          {
            return FunctionUrlAuthType::AWS_IAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FunctionUrlAuthType>(hashCode);
          }

          return FunctionUrlAuthType::NOT_SET;
        }

        Aws::String GetNameForFunctionUrlAuthType(FunctionUrlAuthType enumValue)
        {
          switch(enumValue)
          {
          case FunctionUrlAuthType::NOT_SET:
            return {};
          case FunctionUrlAuthType::NONE:
            return "NONE";
          case FunctionUrlAuthType::AWS_IAM:
            return "AWS_IAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FunctionUrlAuthTypeMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
