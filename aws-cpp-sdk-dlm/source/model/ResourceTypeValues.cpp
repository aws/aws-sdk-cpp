/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/ResourceTypeValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DLM
  {
    namespace Model
    {
      namespace ResourceTypeValuesMapper
      {

        static const int VOLUME_HASH = HashingUtils::HashString("VOLUME");
        static const int INSTANCE_HASH = HashingUtils::HashString("INSTANCE");


        ResourceTypeValues GetResourceTypeValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VOLUME_HASH)
          {
            return ResourceTypeValues::VOLUME;
          }
          else if (hashCode == INSTANCE_HASH)
          {
            return ResourceTypeValues::INSTANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceTypeValues>(hashCode);
          }

          return ResourceTypeValues::NOT_SET;
        }

        Aws::String GetNameForResourceTypeValues(ResourceTypeValues enumValue)
        {
          switch(enumValue)
          {
          case ResourceTypeValues::VOLUME:
            return "VOLUME";
          case ResourceTypeValues::INSTANCE:
            return "INSTANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
