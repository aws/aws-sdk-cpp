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
