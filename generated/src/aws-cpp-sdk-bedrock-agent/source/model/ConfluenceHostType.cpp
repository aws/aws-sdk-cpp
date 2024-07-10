/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ConfluenceHostType.h>
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
      namespace ConfluenceHostTypeMapper
      {

        static const int SAAS_HASH = HashingUtils::HashString("SAAS");


        ConfluenceHostType GetConfluenceHostTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAAS_HASH)
          {
            return ConfluenceHostType::SAAS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfluenceHostType>(hashCode);
          }

          return ConfluenceHostType::NOT_SET;
        }

        Aws::String GetNameForConfluenceHostType(ConfluenceHostType enumValue)
        {
          switch(enumValue)
          {
          case ConfluenceHostType::NOT_SET:
            return {};
          case ConfluenceHostType::SAAS:
            return "SAAS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfluenceHostTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
