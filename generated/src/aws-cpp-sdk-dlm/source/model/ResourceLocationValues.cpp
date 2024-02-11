/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/ResourceLocationValues.h>
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
      namespace ResourceLocationValuesMapper
      {

        static const int CLOUD_HASH = HashingUtils::HashString("CLOUD");
        static const int OUTPOST_HASH = HashingUtils::HashString("OUTPOST");


        ResourceLocationValues GetResourceLocationValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUD_HASH)
          {
            return ResourceLocationValues::CLOUD;
          }
          else if (hashCode == OUTPOST_HASH)
          {
            return ResourceLocationValues::OUTPOST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceLocationValues>(hashCode);
          }

          return ResourceLocationValues::NOT_SET;
        }

        Aws::String GetNameForResourceLocationValues(ResourceLocationValues enumValue)
        {
          switch(enumValue)
          {
          case ResourceLocationValues::NOT_SET:
            return {};
          case ResourceLocationValues::CLOUD:
            return "CLOUD";
          case ResourceLocationValues::OUTPOST:
            return "OUTPOST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceLocationValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
