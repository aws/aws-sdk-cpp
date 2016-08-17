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
#include <aws/ds/model/DirectoryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace DirectoryTypeMapper
      {

        static const int SimpleAD_HASH = HashingUtils::HashString("SimpleAD");
        static const int ADConnector_HASH = HashingUtils::HashString("ADConnector");
        static const int MicrosoftAD_HASH = HashingUtils::HashString("MicrosoftAD");


        DirectoryType GetDirectoryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SimpleAD_HASH)
          {
            return DirectoryType::SimpleAD;
          }
          else if (hashCode == ADConnector_HASH)
          {
            return DirectoryType::ADConnector;
          }
          else if (hashCode == MicrosoftAD_HASH)
          {
            return DirectoryType::MicrosoftAD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectoryType>(hashCode);
          }

          return DirectoryType::NOT_SET;
        }

        Aws::String GetNameForDirectoryType(DirectoryType enumValue)
        {
          switch(enumValue)
          {
          case DirectoryType::SimpleAD:
            return "SimpleAD";
          case DirectoryType::ADConnector:
            return "ADConnector";
          case DirectoryType::MicrosoftAD:
            return "MicrosoftAD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DirectoryTypeMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
