/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ProxyConfigurationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace ProxyConfigurationTypeMapper
      {

        static const int APPMESH_HASH = HashingUtils::HashString("APPMESH");


        ProxyConfigurationType GetProxyConfigurationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPMESH_HASH)
          {
            return ProxyConfigurationType::APPMESH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProxyConfigurationType>(hashCode);
          }

          return ProxyConfigurationType::NOT_SET;
        }

        Aws::String GetNameForProxyConfigurationType(ProxyConfigurationType enumValue)
        {
          switch(enumValue)
          {
          case ProxyConfigurationType::APPMESH:
            return "APPMESH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProxyConfigurationTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
