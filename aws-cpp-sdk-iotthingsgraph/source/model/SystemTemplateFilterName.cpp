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
