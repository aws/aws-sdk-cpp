/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
