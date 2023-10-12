/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/OriginType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace OriginTypeMapper
      {

        static constexpr uint32_t SENSITIVE_DATA_DISCOVERY_JOB_HASH = ConstExprHashingUtils::HashString("SENSITIVE_DATA_DISCOVERY_JOB");
        static constexpr uint32_t AUTOMATED_SENSITIVE_DATA_DISCOVERY_HASH = ConstExprHashingUtils::HashString("AUTOMATED_SENSITIVE_DATA_DISCOVERY");


        OriginType GetOriginTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SENSITIVE_DATA_DISCOVERY_JOB_HASH)
          {
            return OriginType::SENSITIVE_DATA_DISCOVERY_JOB;
          }
          else if (hashCode == AUTOMATED_SENSITIVE_DATA_DISCOVERY_HASH)
          {
            return OriginType::AUTOMATED_SENSITIVE_DATA_DISCOVERY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginType>(hashCode);
          }

          return OriginType::NOT_SET;
        }

        Aws::String GetNameForOriginType(OriginType enumValue)
        {
          switch(enumValue)
          {
          case OriginType::NOT_SET:
            return {};
          case OriginType::SENSITIVE_DATA_DISCOVERY_JOB:
            return "SENSITIVE_DATA_DISCOVERY_JOB";
          case OriginType::AUTOMATED_SENSITIVE_DATA_DISCOVERY:
            return "AUTOMATED_SENSITIVE_DATA_DISCOVERY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginTypeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
