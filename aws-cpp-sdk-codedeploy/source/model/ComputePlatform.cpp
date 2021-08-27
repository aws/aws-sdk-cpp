/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ComputePlatform.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace ComputePlatformMapper
      {

        static const int Server_HASH = HashingUtils::HashString("Server");
        static const int Lambda_HASH = HashingUtils::HashString("Lambda");
        static const int ECS_HASH = HashingUtils::HashString("ECS");


        ComputePlatform GetComputePlatformForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Server_HASH)
          {
            return ComputePlatform::Server;
          }
          else if (hashCode == Lambda_HASH)
          {
            return ComputePlatform::Lambda;
          }
          else if (hashCode == ECS_HASH)
          {
            return ComputePlatform::ECS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputePlatform>(hashCode);
          }

          return ComputePlatform::NOT_SET;
        }

        Aws::String GetNameForComputePlatform(ComputePlatform enumValue)
        {
          switch(enumValue)
          {
          case ComputePlatform::Server:
            return "Server";
          case ComputePlatform::Lambda:
            return "Lambda";
          case ComputePlatform::ECS:
            return "ECS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputePlatformMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
