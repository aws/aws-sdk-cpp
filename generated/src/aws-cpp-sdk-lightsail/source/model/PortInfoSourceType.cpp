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

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int INSTANCE_HASH = HashingUtils::HashString("INSTANCE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");


        PortInfoSourceType GetPortInfoSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
