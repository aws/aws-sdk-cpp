/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/DependentServiceName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace DependentServiceNameMapper
      {

        static constexpr uint32_t AWSCONFIG_HASH = ConstExprHashingUtils::HashString("AWSCONFIG");
        static constexpr uint32_t AWSWAF_HASH = ConstExprHashingUtils::HashString("AWSWAF");
        static constexpr uint32_t AWSSHIELD_ADVANCED_HASH = ConstExprHashingUtils::HashString("AWSSHIELD_ADVANCED");
        static constexpr uint32_t AWSVPC_HASH = ConstExprHashingUtils::HashString("AWSVPC");


        DependentServiceName GetDependentServiceNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWSCONFIG_HASH)
          {
            return DependentServiceName::AWSCONFIG;
          }
          else if (hashCode == AWSWAF_HASH)
          {
            return DependentServiceName::AWSWAF;
          }
          else if (hashCode == AWSSHIELD_ADVANCED_HASH)
          {
            return DependentServiceName::AWSSHIELD_ADVANCED;
          }
          else if (hashCode == AWSVPC_HASH)
          {
            return DependentServiceName::AWSVPC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DependentServiceName>(hashCode);
          }

          return DependentServiceName::NOT_SET;
        }

        Aws::String GetNameForDependentServiceName(DependentServiceName enumValue)
        {
          switch(enumValue)
          {
          case DependentServiceName::NOT_SET:
            return {};
          case DependentServiceName::AWSCONFIG:
            return "AWSCONFIG";
          case DependentServiceName::AWSWAF:
            return "AWSWAF";
          case DependentServiceName::AWSSHIELD_ADVANCED:
            return "AWSSHIELD_ADVANCED";
          case DependentServiceName::AWSVPC:
            return "AWSVPC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DependentServiceNameMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
