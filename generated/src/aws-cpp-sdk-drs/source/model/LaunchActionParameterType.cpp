/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LaunchActionParameterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace LaunchActionParameterTypeMapper
      {

        static const int SSM_STORE_HASH = HashingUtils::HashString("SSM_STORE");
        static const int DYNAMIC_HASH = HashingUtils::HashString("DYNAMIC");


        LaunchActionParameterType GetLaunchActionParameterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSM_STORE_HASH)
          {
            return LaunchActionParameterType::SSM_STORE;
          }
          else if (hashCode == DYNAMIC_HASH)
          {
            return LaunchActionParameterType::DYNAMIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchActionParameterType>(hashCode);
          }

          return LaunchActionParameterType::NOT_SET;
        }

        Aws::String GetNameForLaunchActionParameterType(LaunchActionParameterType enumValue)
        {
          switch(enumValue)
          {
          case LaunchActionParameterType::NOT_SET:
            return {};
          case LaunchActionParameterType::SSM_STORE:
            return "SSM_STORE";
          case LaunchActionParameterType::DYNAMIC:
            return "DYNAMIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchActionParameterTypeMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
