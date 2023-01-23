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

        static const int AWSCONFIG_HASH = HashingUtils::HashString("AWSCONFIG");
        static const int AWSWAF_HASH = HashingUtils::HashString("AWSWAF");
        static const int AWSSHIELD_ADVANCED_HASH = HashingUtils::HashString("AWSSHIELD_ADVANCED");
        static const int AWSVPC_HASH = HashingUtils::HashString("AWSVPC");


        DependentServiceName GetDependentServiceNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
