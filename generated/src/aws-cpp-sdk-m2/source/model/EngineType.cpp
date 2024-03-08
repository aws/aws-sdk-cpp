/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/EngineType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MainframeModernization
  {
    namespace Model
    {
      namespace EngineTypeMapper
      {

        static const int microfocus_HASH = HashingUtils::HashString("microfocus");
        static const int bluage_HASH = HashingUtils::HashString("bluage");


        EngineType GetEngineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == microfocus_HASH)
          {
            return EngineType::microfocus;
          }
          else if (hashCode == bluage_HASH)
          {
            return EngineType::bluage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EngineType>(hashCode);
          }

          return EngineType::NOT_SET;
        }

        Aws::String GetNameForEngineType(EngineType enumValue)
        {
          switch(enumValue)
          {
          case EngineType::NOT_SET:
            return {};
          case EngineType::microfocus:
            return "microfocus";
          case EngineType::bluage:
            return "bluage";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EngineTypeMapper
    } // namespace Model
  } // namespace MainframeModernization
} // namespace Aws
