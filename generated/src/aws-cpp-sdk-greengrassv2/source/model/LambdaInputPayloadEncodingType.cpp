/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/LambdaInputPayloadEncodingType.h>
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
      namespace LambdaInputPayloadEncodingTypeMapper
      {

        static const int json_HASH = HashingUtils::HashString("json");
        static const int binary_HASH = HashingUtils::HashString("binary");


        LambdaInputPayloadEncodingType GetLambdaInputPayloadEncodingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == json_HASH)
          {
            return LambdaInputPayloadEncodingType::json;
          }
          else if (hashCode == binary_HASH)
          {
            return LambdaInputPayloadEncodingType::binary;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaInputPayloadEncodingType>(hashCode);
          }

          return LambdaInputPayloadEncodingType::NOT_SET;
        }

        Aws::String GetNameForLambdaInputPayloadEncodingType(LambdaInputPayloadEncodingType enumValue)
        {
          switch(enumValue)
          {
          case LambdaInputPayloadEncodingType::NOT_SET:
            return {};
          case LambdaInputPayloadEncodingType::json:
            return "json";
          case LambdaInputPayloadEncodingType::binary:
            return "binary";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaInputPayloadEncodingTypeMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
