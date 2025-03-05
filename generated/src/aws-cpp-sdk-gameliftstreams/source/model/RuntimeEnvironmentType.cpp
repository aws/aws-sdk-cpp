/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/RuntimeEnvironmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLiftStreams
  {
    namespace Model
    {
      namespace RuntimeEnvironmentTypeMapper
      {

        static const int PROTON_HASH = HashingUtils::HashString("PROTON");
        static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");
        static const int UBUNTU_HASH = HashingUtils::HashString("UBUNTU");


        RuntimeEnvironmentType GetRuntimeEnvironmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROTON_HASH)
          {
            return RuntimeEnvironmentType::PROTON;
          }
          else if (hashCode == WINDOWS_HASH)
          {
            return RuntimeEnvironmentType::WINDOWS;
          }
          else if (hashCode == UBUNTU_HASH)
          {
            return RuntimeEnvironmentType::UBUNTU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuntimeEnvironmentType>(hashCode);
          }

          return RuntimeEnvironmentType::NOT_SET;
        }

        Aws::String GetNameForRuntimeEnvironmentType(RuntimeEnvironmentType enumValue)
        {
          switch(enumValue)
          {
          case RuntimeEnvironmentType::NOT_SET:
            return {};
          case RuntimeEnvironmentType::PROTON:
            return "PROTON";
          case RuntimeEnvironmentType::WINDOWS:
            return "WINDOWS";
          case RuntimeEnvironmentType::UBUNTU:
            return "UBUNTU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuntimeEnvironmentTypeMapper
    } // namespace Model
  } // namespace GameLiftStreams
} // namespace Aws
