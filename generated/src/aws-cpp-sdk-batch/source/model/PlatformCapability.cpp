/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/PlatformCapability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace PlatformCapabilityMapper
      {

        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int FARGATE_HASH = HashingUtils::HashString("FARGATE");


        PlatformCapability GetPlatformCapabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_HASH)
          {
            return PlatformCapability::EC2;
          }
          else if (hashCode == FARGATE_HASH)
          {
            return PlatformCapability::FARGATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlatformCapability>(hashCode);
          }

          return PlatformCapability::NOT_SET;
        }

        Aws::String GetNameForPlatformCapability(PlatformCapability enumValue)
        {
          switch(enumValue)
          {
          case PlatformCapability::NOT_SET:
            return {};
          case PlatformCapability::EC2:
            return "EC2";
          case PlatformCapability::FARGATE:
            return "FARGATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlatformCapabilityMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
