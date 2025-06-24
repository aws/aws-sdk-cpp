/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/MappingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ControlCatalog
  {
    namespace Model
    {
      namespace MappingTypeMapper
      {

        static const int FRAMEWORK_HASH = HashingUtils::HashString("FRAMEWORK");
        static const int COMMON_CONTROL_HASH = HashingUtils::HashString("COMMON_CONTROL");


        MappingType GetMappingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FRAMEWORK_HASH)
          {
            return MappingType::FRAMEWORK;
          }
          else if (hashCode == COMMON_CONTROL_HASH)
          {
            return MappingType::COMMON_CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MappingType>(hashCode);
          }

          return MappingType::NOT_SET;
        }

        Aws::String GetNameForMappingType(MappingType enumValue)
        {
          switch(enumValue)
          {
          case MappingType::NOT_SET:
            return {};
          case MappingType::FRAMEWORK:
            return "FRAMEWORK";
          case MappingType::COMMON_CONTROL:
            return "COMMON_CONTROL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MappingTypeMapper
    } // namespace Model
  } // namespace ControlCatalog
} // namespace Aws
