/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ModelInputDataFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace ModelInputDataFormatMapper
      {

        static constexpr uint32_t TEXT_CSV_HASH = ConstExprHashingUtils::HashString("TEXT_CSV");
        static constexpr uint32_t APPLICATION_JSON_HASH = ConstExprHashingUtils::HashString("APPLICATION_JSON");


        ModelInputDataFormat GetModelInputDataFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_CSV_HASH)
          {
            return ModelInputDataFormat::TEXT_CSV;
          }
          else if (hashCode == APPLICATION_JSON_HASH)
          {
            return ModelInputDataFormat::APPLICATION_JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelInputDataFormat>(hashCode);
          }

          return ModelInputDataFormat::NOT_SET;
        }

        Aws::String GetNameForModelInputDataFormat(ModelInputDataFormat enumValue)
        {
          switch(enumValue)
          {
          case ModelInputDataFormat::NOT_SET:
            return {};
          case ModelInputDataFormat::TEXT_CSV:
            return "TEXT_CSV";
          case ModelInputDataFormat::APPLICATION_JSON:
            return "APPLICATION_JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelInputDataFormatMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
