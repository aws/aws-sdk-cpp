/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/DevEnvironmentSessionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCatalyst
  {
    namespace Model
    {
      namespace DevEnvironmentSessionTypeMapper
      {

        static const int SSM_HASH = HashingUtils::HashString("SSM");
        static const int SSH_HASH = HashingUtils::HashString("SSH");


        DevEnvironmentSessionType GetDevEnvironmentSessionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSM_HASH)
          {
            return DevEnvironmentSessionType::SSM;
          }
          else if (hashCode == SSH_HASH)
          {
            return DevEnvironmentSessionType::SSH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DevEnvironmentSessionType>(hashCode);
          }

          return DevEnvironmentSessionType::NOT_SET;
        }

        Aws::String GetNameForDevEnvironmentSessionType(DevEnvironmentSessionType enumValue)
        {
          switch(enumValue)
          {
          case DevEnvironmentSessionType::SSM:
            return "SSM";
          case DevEnvironmentSessionType::SSH:
            return "SSH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DevEnvironmentSessionTypeMapper
    } // namespace Model
  } // namespace CodeCatalyst
} // namespace Aws
