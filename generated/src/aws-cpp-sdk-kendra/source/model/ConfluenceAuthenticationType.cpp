/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConfluenceAuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace ConfluenceAuthenticationTypeMapper
      {

        static constexpr uint32_t HTTP_BASIC_HASH = ConstExprHashingUtils::HashString("HTTP_BASIC");
        static constexpr uint32_t PAT_HASH = ConstExprHashingUtils::HashString("PAT");


        ConfluenceAuthenticationType GetConfluenceAuthenticationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_BASIC_HASH)
          {
            return ConfluenceAuthenticationType::HTTP_BASIC;
          }
          else if (hashCode == PAT_HASH)
          {
            return ConfluenceAuthenticationType::PAT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfluenceAuthenticationType>(hashCode);
          }

          return ConfluenceAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForConfluenceAuthenticationType(ConfluenceAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case ConfluenceAuthenticationType::NOT_SET:
            return {};
          case ConfluenceAuthenticationType::HTTP_BASIC:
            return "HTTP_BASIC";
          case ConfluenceAuthenticationType::PAT:
            return "PAT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfluenceAuthenticationTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
