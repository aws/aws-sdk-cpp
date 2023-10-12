/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace SourceTypeMapper
      {

        static constexpr uint32_t AWS_Cloudtrail_HASH = ConstExprHashingUtils::HashString("AWS_Cloudtrail");
        static constexpr uint32_t AWS_Config_HASH = ConstExprHashingUtils::HashString("AWS_Config");
        static constexpr uint32_t AWS_Security_Hub_HASH = ConstExprHashingUtils::HashString("AWS_Security_Hub");
        static constexpr uint32_t AWS_API_Call_HASH = ConstExprHashingUtils::HashString("AWS_API_Call");
        static constexpr uint32_t MANUAL_HASH = ConstExprHashingUtils::HashString("MANUAL");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_Cloudtrail_HASH)
          {
            return SourceType::AWS_Cloudtrail;
          }
          else if (hashCode == AWS_Config_HASH)
          {
            return SourceType::AWS_Config;
          }
          else if (hashCode == AWS_Security_Hub_HASH)
          {
            return SourceType::AWS_Security_Hub;
          }
          else if (hashCode == AWS_API_Call_HASH)
          {
            return SourceType::AWS_API_Call;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return SourceType::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceType>(hashCode);
          }

          return SourceType::NOT_SET;
        }

        Aws::String GetNameForSourceType(SourceType enumValue)
        {
          switch(enumValue)
          {
          case SourceType::NOT_SET:
            return {};
          case SourceType::AWS_Cloudtrail:
            return "AWS_Cloudtrail";
          case SourceType::AWS_Config:
            return "AWS_Config";
          case SourceType::AWS_Security_Hub:
            return "AWS_Security_Hub";
          case SourceType::AWS_API_Call:
            return "AWS_API_Call";
          case SourceType::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceTypeMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
