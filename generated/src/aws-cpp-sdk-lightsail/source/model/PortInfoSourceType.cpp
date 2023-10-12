/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/PortInfoSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace PortInfoSourceTypeMapper
      {

        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t INSTANCE_HASH = ConstExprHashingUtils::HashString("INSTANCE");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t CLOSED_HASH = ConstExprHashingUtils::HashString("CLOSED");


        PortInfoSourceType GetPortInfoSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return PortInfoSourceType::DEFAULT;
          }
          else if (hashCode == INSTANCE_HASH)
          {
            return PortInfoSourceType::INSTANCE;
          }
          else if (hashCode == NONE_HASH)
          {
            return PortInfoSourceType::NONE;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return PortInfoSourceType::CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PortInfoSourceType>(hashCode);
          }

          return PortInfoSourceType::NOT_SET;
        }

        Aws::String GetNameForPortInfoSourceType(PortInfoSourceType enumValue)
        {
          switch(enumValue)
          {
          case PortInfoSourceType::NOT_SET:
            return {};
          case PortInfoSourceType::DEFAULT:
            return "DEFAULT";
          case PortInfoSourceType::INSTANCE:
            return "INSTANCE";
          case PortInfoSourceType::NONE:
            return "NONE";
          case PortInfoSourceType::CLOSED:
            return "CLOSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PortInfoSourceTypeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
