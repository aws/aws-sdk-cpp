/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TargetPlatformOs.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace TargetPlatformOsMapper
      {

        static const int ANDROID__HASH = HashingUtils::HashString("ANDROID");
        static const int LINUX_HASH = HashingUtils::HashString("LINUX");


        TargetPlatformOs GetTargetPlatformOsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANDROID__HASH)
          {
            return TargetPlatformOs::ANDROID_;
          }
          else if (hashCode == LINUX_HASH)
          {
            return TargetPlatformOs::LINUX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetPlatformOs>(hashCode);
          }

          return TargetPlatformOs::NOT_SET;
        }

        Aws::String GetNameForTargetPlatformOs(TargetPlatformOs enumValue)
        {
          switch(enumValue)
          {
          case TargetPlatformOs::ANDROID_:
            return "ANDROID";
          case TargetPlatformOs::LINUX:
            return "LINUX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetPlatformOsMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
