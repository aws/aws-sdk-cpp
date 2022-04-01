/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/SystemTemplateFilterName.h>
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
      namespace SystemTemplateFilterNameMapper
      {

        static const int FLOW_TEMPLATE_ID_HASH = HashingUtils::HashString("FLOW_TEMPLATE_ID");


        SystemTemplateFilterName GetSystemTemplateFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLOW_TEMPLATE_ID_HASH)
          {
            return SystemTemplateFilterName::FLOW_TEMPLATE_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SystemTemplateFilterName>(hashCode);
          }

          return SystemTemplateFilterName::NOT_SET;
        }

        Aws::String GetNameForSystemTemplateFilterName(SystemTemplateFilterName enumValue)
        {
          switch(enumValue)
          {
          case SystemTemplateFilterName::FLOW_TEMPLATE_ID:
            return "FLOW_TEMPLATE_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SystemTemplateFilterNameMapper
    } // namespace Model
  } // namespace IoTThingsGraph
} // namespace Aws
