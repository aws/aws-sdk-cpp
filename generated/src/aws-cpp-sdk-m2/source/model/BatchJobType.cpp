/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/BatchJobType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MainframeModernization
  {
    namespace Model
    {
      namespace BatchJobTypeMapper
      {

        static constexpr uint32_t VSE_HASH = ConstExprHashingUtils::HashString("VSE");
        static constexpr uint32_t JES2_HASH = ConstExprHashingUtils::HashString("JES2");
        static constexpr uint32_t JES3_HASH = ConstExprHashingUtils::HashString("JES3");


        BatchJobType GetBatchJobTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VSE_HASH)
          {
            return BatchJobType::VSE;
          }
          else if (hashCode == JES2_HASH)
          {
            return BatchJobType::JES2;
          }
          else if (hashCode == JES3_HASH)
          {
            return BatchJobType::JES3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchJobType>(hashCode);
          }

          return BatchJobType::NOT_SET;
        }

        Aws::String GetNameForBatchJobType(BatchJobType enumValue)
        {
          switch(enumValue)
          {
          case BatchJobType::NOT_SET:
            return {};
          case BatchJobType::VSE:
            return "VSE";
          case BatchJobType::JES2:
            return "JES2";
          case BatchJobType::JES3:
            return "JES3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchJobTypeMapper
    } // namespace Model
  } // namespace MainframeModernization
} // namespace Aws
