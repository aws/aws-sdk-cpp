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
#include <aws/cloudhsm/model/ClientVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudHSM
  {
    namespace Model
    {
      namespace ClientVersionMapper
      {

        static const int _5_1_HASH = HashingUtils::HashString("5.1");
        static const int _5_3_HASH = HashingUtils::HashString("5.3");


        ClientVersion GetClientVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == _5_1_HASH)
          {
            return ClientVersion::_5_1;
          }
          else if (hashCode == _5_3_HASH)
          {
            return ClientVersion::_5_3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientVersion>(hashCode);
          }

          return ClientVersion::NOT_SET;
        }

        Aws::String GetNameForClientVersion(ClientVersion enumValue)
        {
          switch(enumValue)
          {
          case ClientVersion::_5_1:
            return "5.1";
          case ClientVersion::_5_3:
            return "5.3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ClientVersionMapper
    } // namespace Model
  } // namespace CloudHSM
} // namespace Aws
