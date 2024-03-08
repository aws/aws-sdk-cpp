/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicyResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace LifecyclePolicyResourceTypeMapper
      {

        static const int AMI_IMAGE_HASH = HashingUtils::HashString("AMI_IMAGE");
        static const int CONTAINER_IMAGE_HASH = HashingUtils::HashString("CONTAINER_IMAGE");


        LifecyclePolicyResourceType GetLifecyclePolicyResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AMI_IMAGE_HASH)
          {
            return LifecyclePolicyResourceType::AMI_IMAGE;
          }
          else if (hashCode == CONTAINER_IMAGE_HASH)
          {
            return LifecyclePolicyResourceType::CONTAINER_IMAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecyclePolicyResourceType>(hashCode);
          }

          return LifecyclePolicyResourceType::NOT_SET;
        }

        Aws::String GetNameForLifecyclePolicyResourceType(LifecyclePolicyResourceType enumValue)
        {
          switch(enumValue)
          {
          case LifecyclePolicyResourceType::NOT_SET:
            return {};
          case LifecyclePolicyResourceType::AMI_IMAGE:
            return "AMI_IMAGE";
          case LifecyclePolicyResourceType::CONTAINER_IMAGE:
            return "CONTAINER_IMAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecyclePolicyResourceTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
