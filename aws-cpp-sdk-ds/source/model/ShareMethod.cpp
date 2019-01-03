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

#include <aws/ds/model/ShareMethod.h>
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
      namespace ShareMethodMapper
      {

        static const int ORGANIZATIONS_HASH = HashingUtils::HashString("ORGANIZATIONS");
        static const int HANDSHAKE_HASH = HashingUtils::HashString("HANDSHAKE");


        ShareMethod GetShareMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ORGANIZATIONS_HASH)
          {
            return ShareMethod::ORGANIZATIONS;
          }
          else if (hashCode == HANDSHAKE_HASH)
          {
            return ShareMethod::HANDSHAKE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareMethod>(hashCode);
          }

          return ShareMethod::NOT_SET;
        }

        Aws::String GetNameForShareMethod(ShareMethod enumValue)
        {
          switch(enumValue)
          {
          case ShareMethod::ORGANIZATIONS:
            return "ORGANIZATIONS";
          case ShareMethod::HANDSHAKE:
            return "HANDSHAKE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareMethodMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
