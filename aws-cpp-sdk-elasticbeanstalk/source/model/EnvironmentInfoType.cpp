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
#include <aws/elasticbeanstalk/model/EnvironmentInfoType.h>
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
      namespace EnvironmentInfoTypeMapper
      {

        static const int tail_HASH = HashingUtils::HashString("tail");
        static const int bundle_HASH = HashingUtils::HashString("bundle");


        EnvironmentInfoType GetEnvironmentInfoTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == tail_HASH)
          {
            return EnvironmentInfoType::tail;
          }
          else if (hashCode == bundle_HASH)
          {
            return EnvironmentInfoType::bundle;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentInfoType>(hashCode);
          }

          return EnvironmentInfoType::NOT_SET;
        }

        Aws::String GetNameForEnvironmentInfoType(EnvironmentInfoType enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentInfoType::tail:
            return "tail";
          case EnvironmentInfoType::bundle:
            return "bundle";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace EnvironmentInfoTypeMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
