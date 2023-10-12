/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/AnomalyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace AnomalyTypeMapper
      {

        static constexpr uint32_t CAUSAL_HASH = ConstExprHashingUtils::HashString("CAUSAL");
        static constexpr uint32_t CONTEXTUAL_HASH = ConstExprHashingUtils::HashString("CONTEXTUAL");


        AnomalyType GetAnomalyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CAUSAL_HASH)
          {
            return AnomalyType::CAUSAL;
          }
          else if (hashCode == CONTEXTUAL_HASH)
          {
            return AnomalyType::CONTEXTUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnomalyType>(hashCode);
          }

          return AnomalyType::NOT_SET;
        }

        Aws::String GetNameForAnomalyType(AnomalyType enumValue)
        {
          switch(enumValue)
          {
          case AnomalyType::NOT_SET:
            return {};
          case AnomalyType::CAUSAL:
            return "CAUSAL";
          case AnomalyType::CONTEXTUAL:
            return "CONTEXTUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnomalyTypeMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
