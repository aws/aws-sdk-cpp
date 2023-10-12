/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TemplateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace TemplateTypeMapper
      {

        static constexpr uint32_t FLEET_PROVISIONING_HASH = ConstExprHashingUtils::HashString("FLEET_PROVISIONING");
        static constexpr uint32_t JITP_HASH = ConstExprHashingUtils::HashString("JITP");


        TemplateType GetTemplateTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLEET_PROVISIONING_HASH)
          {
            return TemplateType::FLEET_PROVISIONING;
          }
          else if (hashCode == JITP_HASH)
          {
            return TemplateType::JITP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateType>(hashCode);
          }

          return TemplateType::NOT_SET;
        }

        Aws::String GetNameForTemplateType(TemplateType enumValue)
        {
          switch(enumValue)
          {
          case TemplateType::NOT_SET:
            return {};
          case TemplateType::FLEET_PROVISIONING:
            return "FLEET_PROVISIONING";
          case TemplateType::JITP:
            return "JITP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemplateTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
