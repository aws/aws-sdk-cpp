﻿/*
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
#include <aws/lightsail/model/PortAccessType.h>
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
      namespace PortAccessTypeMapper
      {

        static const int Public_HASH = HashingUtils::HashString("Public");
        static const int Private_HASH = HashingUtils::HashString("Private");


        PortAccessType GetPortAccessTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Public_HASH)
          {
            return PortAccessType::Public;
          }
          else if (hashCode == Private_HASH)
          {
            return PortAccessType::Private;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PortAccessType>(hashCode);
          }

          return PortAccessType::NOT_SET;
        }

        Aws::String GetNameForPortAccessType(PortAccessType enumValue)
        {
          switch(enumValue)
          {
          case PortAccessType::Public:
            return "Public";
          case PortAccessType::Private:
            return "Private";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PortAccessTypeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
