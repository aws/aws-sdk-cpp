/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/FlowTemplateFilterName.h>
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
      namespace FlowTemplateFilterNameMapper
      {

        static const int DEVICE_MODEL_ID_HASH = HashingUtils::HashString("DEVICE_MODEL_ID");


        FlowTemplateFilterName GetFlowTemplateFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVICE_MODEL_ID_HASH)
          {
            return FlowTemplateFilterName::DEVICE_MODEL_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowTemplateFilterName>(hashCode);
          }

          return FlowTemplateFilterName::NOT_SET;
        }

        Aws::String GetNameForFlowTemplateFilterName(FlowTemplateFilterName enumValue)
        {
          switch(enumValue)
          {
          case FlowTemplateFilterName::DEVICE_MODEL_ID:
            return "DEVICE_MODEL_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowTemplateFilterNameMapper
    } // namespace Model
  } // namespace IoTThingsGraph
} // namespace Aws
