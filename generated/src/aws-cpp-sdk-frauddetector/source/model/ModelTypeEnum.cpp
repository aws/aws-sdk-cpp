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

        static constexpr uint32_t ONLINE_FRAUD_INSIGHTS_HASH = ConstExprHashingUtils::HashString("ONLINE_FRAUD_INSIGHTS");
        static constexpr uint32_t TRANSACTION_FRAUD_INSIGHTS_HASH = ConstExprHashingUtils::HashString("TRANSACTION_FRAUD_INSIGHTS");
        static constexpr uint32_t ACCOUNT_TAKEOVER_INSIGHTS_HASH = ConstExprHashingUtils::HashString("ACCOUNT_TAKEOVER_INSIGHTS");


        ModelTypeEnum GetModelTypeEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONLINE_FRAUD_INSIGHTS_HASH)
          {
            return ModelTypeEnum::ONLINE_FRAUD_INSIGHTS;
          }
          else if (hashCode == TRANSACTION_FRAUD_INSIGHTS_HASH)
          {
            return ModelTypeEnum::TRANSACTION_FRAUD_INSIGHTS;
          }
          else if (hashCode == ACCOUNT_TAKEOVER_INSIGHTS_HASH)
          {
            return ModelTypeEnum::ACCOUNT_TAKEOVER_INSIGHTS;
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
          case ModelTypeEnum::NOT_SET:
            return {};
          case ModelTypeEnum::ONLINE_FRAUD_INSIGHTS:
            return "ONLINE_FRAUD_INSIGHTS";
          case ModelTypeEnum::TRANSACTION_FRAUD_INSIGHTS:
            return "TRANSACTION_FRAUD_INSIGHTS";
          case ModelTypeEnum::ACCOUNT_TAKEOVER_INSIGHTS:
            return "ACCOUNT_TAKEOVER_INSIGHTS";
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
