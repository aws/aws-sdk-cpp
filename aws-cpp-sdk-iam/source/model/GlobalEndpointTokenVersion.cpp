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

#include <aws/iam/model/GlobalEndpointTokenVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IAM
  {
    namespace Model
    {
      namespace GlobalEndpointTokenVersionMapper
      {

        static const int v1Token_HASH = HashingUtils::HashString("v1Token");
        static const int v2Token_HASH = HashingUtils::HashString("v2Token");


        GlobalEndpointTokenVersion GetGlobalEndpointTokenVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == v1Token_HASH)
          {
            return GlobalEndpointTokenVersion::v1Token;
          }
          else if (hashCode == v2Token_HASH)
          {
            return GlobalEndpointTokenVersion::v2Token;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalEndpointTokenVersion>(hashCode);
          }

          return GlobalEndpointTokenVersion::NOT_SET;
        }

        Aws::String GetNameForGlobalEndpointTokenVersion(GlobalEndpointTokenVersion enumValue)
        {
          switch(enumValue)
          {
          case GlobalEndpointTokenVersion::v1Token:
            return "v1Token";
          case GlobalEndpointTokenVersion::v2Token:
            return "v2Token";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlobalEndpointTokenVersionMapper
    } // namespace Model
  } // namespace IAM
} // namespace Aws
