/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/EBSResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace EBSResourceTypeMapper
      {

        static const int volume_HASH = HashingUtils::HashString("volume");


        EBSResourceType GetEBSResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == volume_HASH)
          {
            return EBSResourceType::volume;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EBSResourceType>(hashCode);
          }

          return EBSResourceType::NOT_SET;
        }

        Aws::String GetNameForEBSResourceType(EBSResourceType enumValue)
        {
          switch(enumValue)
          {
          case EBSResourceType::NOT_SET:
            return {};
          case EBSResourceType::volume:
            return "volume";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EBSResourceTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
