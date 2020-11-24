/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/RegistryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace RegistryTypeMapper
      {

        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
        static const int MODULE_HASH = HashingUtils::HashString("MODULE");


        RegistryType GetRegistryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_HASH)
          {
            return RegistryType::RESOURCE;
          }
          else if (hashCode == MODULE_HASH)
          {
            return RegistryType::MODULE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistryType>(hashCode);
          }

          return RegistryType::NOT_SET;
        }

        Aws::String GetNameForRegistryType(RegistryType enumValue)
        {
          switch(enumValue)
          {
          case RegistryType::RESOURCE:
            return "RESOURCE";
          case RegistryType::MODULE:
            return "MODULE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistryTypeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
