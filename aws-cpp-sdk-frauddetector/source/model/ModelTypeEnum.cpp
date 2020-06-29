/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ModelTypeEnum.h>
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
      namespace ModelTypeEnumMapper
      {

        static const int ONLINE_FRAUD_INSIGHTS_HASH = HashingUtils::HashString("ONLINE_FRAUD_INSIGHTS");


        ModelTypeEnum GetModelTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONLINE_FRAUD_INSIGHTS_HASH)
          {
            return ModelTypeEnum::ONLINE_FRAUD_INSIGHTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelTypeEnum>(hashCode);
          }

          return ModelTypeEnum::NOT_SET;
        }

        Aws::String GetNameForModelTypeEnum(ModelTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case ModelTypeEnum::ONLINE_FRAUD_INSIGHTS:
            return "ONLINE_FRAUD_INSIGHTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelTypeEnumMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
