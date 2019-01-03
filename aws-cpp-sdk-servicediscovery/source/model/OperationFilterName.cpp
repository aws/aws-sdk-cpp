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

#include <aws/servicediscovery/model/OperationFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace OperationFilterNameMapper
      {

        static const int NAMESPACE_ID_HASH = HashingUtils::HashString("NAMESPACE_ID");
        static const int SERVICE_ID_HASH = HashingUtils::HashString("SERVICE_ID");
        static const int STATUS_HASH = HashingUtils::HashString("STATUS");
        static const int TYPE_HASH = HashingUtils::HashString("TYPE");
        static const int UPDATE_DATE_HASH = HashingUtils::HashString("UPDATE_DATE");


        OperationFilterName GetOperationFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAMESPACE_ID_HASH)
          {
            return OperationFilterName::NAMESPACE_ID;
          }
          else if (hashCode == SERVICE_ID_HASH)
          {
            return OperationFilterName::SERVICE_ID;
          }
          else if (hashCode == STATUS_HASH)
          {
            return OperationFilterName::STATUS;
          }
          else if (hashCode == TYPE_HASH)
          {
            return OperationFilterName::TYPE;
          }
          else if (hashCode == UPDATE_DATE_HASH)
          {
            return OperationFilterName::UPDATE_DATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationFilterName>(hashCode);
          }

          return OperationFilterName::NOT_SET;
        }

        Aws::String GetNameForOperationFilterName(OperationFilterName enumValue)
        {
          switch(enumValue)
          {
          case OperationFilterName::NAMESPACE_ID:
            return "NAMESPACE_ID";
          case OperationFilterName::SERVICE_ID:
            return "SERVICE_ID";
          case OperationFilterName::STATUS:
            return "STATUS";
          case OperationFilterName::TYPE:
            return "TYPE";
          case OperationFilterName::UPDATE_DATE:
            return "UPDATE_DATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationFilterNameMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
