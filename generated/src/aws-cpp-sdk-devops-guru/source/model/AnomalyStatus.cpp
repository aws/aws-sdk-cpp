/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/AnomalyStatus.h>
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
      namespace AnomalyStatusMapper
      {

        static constexpr uint32_t ONGOING_HASH = ConstExprHashingUtils::HashString("ONGOING");
        static constexpr uint32_t CLOSED_HASH = ConstExprHashingUtils::HashString("CLOSED");


        AnomalyStatus GetAnomalyStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONGOING_HASH)
          {
            return AnomalyStatus::ONGOING;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return AnomalyStatus::CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnomalyStatus>(hashCode);
          }

          return AnomalyStatus::NOT_SET;
        }

        Aws::String GetNameForAnomalyStatus(AnomalyStatus enumValue)
        {
          switch(enumValue)
          {
          case AnomalyStatus::NOT_SET:
            return {};
          case AnomalyStatus::ONGOING:
            return "ONGOING";
          case AnomalyStatus::CLOSED:
            return "CLOSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnomalyStatusMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
