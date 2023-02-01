/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int PORTAL_HASH = HashingUtils::HashString("PORTAL");
        static const int PROJECT_HASH = HashingUtils::HashString("PROJECT");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PORTAL_HASH)
          {
            return ResourceType::PORTAL;
          }
          else if (hashCode == PROJECT_HASH)
          {
            return ResourceType::PROJECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::PORTAL:
            return "PORTAL";
          case ResourceType::PROJECT:
            return "PROJECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
