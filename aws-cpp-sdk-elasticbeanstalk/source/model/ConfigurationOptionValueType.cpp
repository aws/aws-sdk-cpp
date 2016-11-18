/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/model/ConfigurationOptionValueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticBeanstalk
  {
    namespace Model
    {
      namespace ConfigurationOptionValueTypeMapper
      {

        static const int Scalar_HASH = HashingUtils::HashString("Scalar");
        static const int List_HASH = HashingUtils::HashString("List");


        ConfigurationOptionValueType GetConfigurationOptionValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Scalar_HASH)
          {
            return ConfigurationOptionValueType::Scalar;
          }
          else if (hashCode == List_HASH)
          {
            return ConfigurationOptionValueType::List;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationOptionValueType>(hashCode);
          }

          return ConfigurationOptionValueType::NOT_SET;
        }

        Aws::String GetNameForConfigurationOptionValueType(ConfigurationOptionValueType enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationOptionValueType::Scalar:
            return "Scalar";
          case ConfigurationOptionValueType::List:
            return "List";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ConfigurationOptionValueTypeMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
