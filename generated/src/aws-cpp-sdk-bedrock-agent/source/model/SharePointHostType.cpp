/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SharePointHostType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace SharePointHostTypeMapper
      {

        static const int ONLINE_HASH = HashingUtils::HashString("ONLINE");


        SharePointHostType GetSharePointHostTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONLINE_HASH)
          {
            return SharePointHostType::ONLINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SharePointHostType>(hashCode);
          }

          return SharePointHostType::NOT_SET;
        }

        Aws::String GetNameForSharePointHostType(SharePointHostType enumValue)
        {
          switch(enumValue)
          {
          case SharePointHostType::NOT_SET:
            return {};
          case SharePointHostType::ONLINE:
            return "ONLINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SharePointHostTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
