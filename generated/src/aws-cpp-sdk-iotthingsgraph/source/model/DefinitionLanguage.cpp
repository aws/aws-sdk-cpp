/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/DefinitionLanguage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTThingsGraph
  {
    namespace Model
    {
      namespace DefinitionLanguageMapper
      {

        static constexpr uint32_t GRAPHQL_HASH = ConstExprHashingUtils::HashString("GRAPHQL");


        DefinitionLanguage GetDefinitionLanguageForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GRAPHQL_HASH)
          {
            return DefinitionLanguage::GRAPHQL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefinitionLanguage>(hashCode);
          }

          return DefinitionLanguage::NOT_SET;
        }

        Aws::String GetNameForDefinitionLanguage(DefinitionLanguage enumValue)
        {
          switch(enumValue)
          {
          case DefinitionLanguage::NOT_SET:
            return {};
          case DefinitionLanguage::GRAPHQL:
            return "GRAPHQL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DefinitionLanguageMapper
    } // namespace Model
  } // namespace IoTThingsGraph
} // namespace Aws
