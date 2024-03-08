/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/LambdaEventSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace LambdaEventSourceTypeMapper
      {

        static const int PUB_SUB_HASH = HashingUtils::HashString("PUB_SUB");
        static const int IOT_CORE_HASH = HashingUtils::HashString("IOT_CORE");


        LambdaEventSourceType GetLambdaEventSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUB_SUB_HASH)
          {
            return LambdaEventSourceType::PUB_SUB;
          }
          else if (hashCode == IOT_CORE_HASH)
          {
            return LambdaEventSourceType::IOT_CORE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaEventSourceType>(hashCode);
          }

          return LambdaEventSourceType::NOT_SET;
        }

        Aws::String GetNameForLambdaEventSourceType(LambdaEventSourceType enumValue)
        {
          switch(enumValue)
          {
          case LambdaEventSourceType::NOT_SET:
            return {};
          case LambdaEventSourceType::PUB_SUB:
            return "PUB_SUB";
          case LambdaEventSourceType::IOT_CORE:
            return "IOT_CORE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaEventSourceTypeMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
