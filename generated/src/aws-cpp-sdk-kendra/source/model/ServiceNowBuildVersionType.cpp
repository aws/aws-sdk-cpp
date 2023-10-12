/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ServiceNowBuildVersionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace ServiceNowBuildVersionTypeMapper
      {

        static constexpr uint32_t LONDON_HASH = ConstExprHashingUtils::HashString("LONDON");
        static constexpr uint32_t OTHERS_HASH = ConstExprHashingUtils::HashString("OTHERS");


        ServiceNowBuildVersionType GetServiceNowBuildVersionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LONDON_HASH)
          {
            return ServiceNowBuildVersionType::LONDON;
          }
          else if (hashCode == OTHERS_HASH)
          {
            return ServiceNowBuildVersionType::OTHERS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceNowBuildVersionType>(hashCode);
          }

          return ServiceNowBuildVersionType::NOT_SET;
        }

        Aws::String GetNameForServiceNowBuildVersionType(ServiceNowBuildVersionType enumValue)
        {
          switch(enumValue)
          {
          case ServiceNowBuildVersionType::NOT_SET:
            return {};
          case ServiceNowBuildVersionType::LONDON:
            return "LONDON";
          case ServiceNowBuildVersionType::OTHERS:
            return "OTHERS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceNowBuildVersionTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
