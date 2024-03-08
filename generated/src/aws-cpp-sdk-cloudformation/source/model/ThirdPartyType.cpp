/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ThirdPartyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace ThirdPartyTypeMapper
      {

        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
        static const int MODULE_HASH = HashingUtils::HashString("MODULE");
        static const int HOOK_HASH = HashingUtils::HashString("HOOK");


        ThirdPartyType GetThirdPartyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_HASH)
          {
            return ThirdPartyType::RESOURCE;
          }
          else if (hashCode == MODULE_HASH)
          {
            return ThirdPartyType::MODULE;
          }
          else if (hashCode == HOOK_HASH)
          {
            return ThirdPartyType::HOOK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThirdPartyType>(hashCode);
          }

          return ThirdPartyType::NOT_SET;
        }

        Aws::String GetNameForThirdPartyType(ThirdPartyType enumValue)
        {
          switch(enumValue)
          {
          case ThirdPartyType::NOT_SET:
            return {};
          case ThirdPartyType::RESOURCE:
            return "RESOURCE";
          case ThirdPartyType::MODULE:
            return "MODULE";
          case ThirdPartyType::HOOK:
            return "HOOK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThirdPartyTypeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
