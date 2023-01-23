/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/SystemInstanceFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTThingsGraph
  {
    namespace Model
    {
      namespace SystemInstanceFilterNameMapper
      {

        static const int SYSTEM_TEMPLATE_ID_HASH = HashingUtils::HashString("SYSTEM_TEMPLATE_ID");
        static const int STATUS_HASH = HashingUtils::HashString("STATUS");
        static const int GREENGRASS_GROUP_NAME_HASH = HashingUtils::HashString("GREENGRASS_GROUP_NAME");


        SystemInstanceFilterName GetSystemInstanceFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYSTEM_TEMPLATE_ID_HASH)
          {
            return SystemInstanceFilterName::SYSTEM_TEMPLATE_ID;
          }
          else if (hashCode == STATUS_HASH)
          {
            return SystemInstanceFilterName::STATUS;
          }
          else if (hashCode == GREENGRASS_GROUP_NAME_HASH)
          {
            return SystemInstanceFilterName::GREENGRASS_GROUP_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SystemInstanceFilterName>(hashCode);
          }

          return SystemInstanceFilterName::NOT_SET;
        }

        Aws::String GetNameForSystemInstanceFilterName(SystemInstanceFilterName enumValue)
        {
          switch(enumValue)
          {
          case SystemInstanceFilterName::SYSTEM_TEMPLATE_ID:
            return "SYSTEM_TEMPLATE_ID";
          case SystemInstanceFilterName::STATUS:
            return "STATUS";
          case SystemInstanceFilterName::GREENGRASS_GROUP_NAME:
            return "GREENGRASS_GROUP_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SystemInstanceFilterNameMapper
    } // namespace Model
  } // namespace IoTThingsGraph
} // namespace Aws
