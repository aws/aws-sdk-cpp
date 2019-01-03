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

#include <aws/servicecatalog/model/ServiceActionDefinitionKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace ServiceActionDefinitionKeyMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int Version_HASH = HashingUtils::HashString("Version");
        static const int AssumeRole_HASH = HashingUtils::HashString("AssumeRole");
        static const int Parameters_HASH = HashingUtils::HashString("Parameters");


        ServiceActionDefinitionKey GetServiceActionDefinitionKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return ServiceActionDefinitionKey::Name;
          }
          else if (hashCode == Version_HASH)
          {
            return ServiceActionDefinitionKey::Version;
          }
          else if (hashCode == AssumeRole_HASH)
          {
            return ServiceActionDefinitionKey::AssumeRole;
          }
          else if (hashCode == Parameters_HASH)
          {
            return ServiceActionDefinitionKey::Parameters;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceActionDefinitionKey>(hashCode);
          }

          return ServiceActionDefinitionKey::NOT_SET;
        }

        Aws::String GetNameForServiceActionDefinitionKey(ServiceActionDefinitionKey enumValue)
        {
          switch(enumValue)
          {
          case ServiceActionDefinitionKey::Name:
            return "Name";
          case ServiceActionDefinitionKey::Version:
            return "Version";
          case ServiceActionDefinitionKey::AssumeRole:
            return "AssumeRole";
          case ServiceActionDefinitionKey::Parameters:
            return "Parameters";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceActionDefinitionKeyMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
