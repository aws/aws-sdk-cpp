/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/ResourceIdType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EFS
  {
    namespace Model
    {
      namespace ResourceIdTypeMapper
      {

        static const int LONG_ID_HASH = HashingUtils::HashString("LONG_ID");
        static const int SHORT_ID_HASH = HashingUtils::HashString("SHORT_ID");


        ResourceIdType GetResourceIdTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LONG_ID_HASH)
          {
            return ResourceIdType::LONG_ID;
          }
          else if (hashCode == SHORT_ID_HASH)
          {
            return ResourceIdType::SHORT_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceIdType>(hashCode);
          }

          return ResourceIdType::NOT_SET;
        }

        Aws::String GetNameForResourceIdType(ResourceIdType enumValue)
        {
          switch(enumValue)
          {
          case ResourceIdType::NOT_SET:
            return {};
          case ResourceIdType::LONG_ID:
            return "LONG_ID";
          case ResourceIdType::SHORT_ID:
            return "SHORT_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceIdTypeMapper
    } // namespace Model
  } // namespace EFS
} // namespace Aws
