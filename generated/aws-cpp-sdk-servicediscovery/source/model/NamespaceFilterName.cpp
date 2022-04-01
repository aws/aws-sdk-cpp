/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/NamespaceFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace NamespaceFilterNameMapper
      {

        static const int TYPE_HASH = HashingUtils::HashString("TYPE");


        NamespaceFilterName GetNamespaceFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TYPE_HASH)
          {
            return NamespaceFilterName::TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamespaceFilterName>(hashCode);
          }

          return NamespaceFilterName::NOT_SET;
        }

        Aws::String GetNameForNamespaceFilterName(NamespaceFilterName enumValue)
        {
          switch(enumValue)
          {
          case NamespaceFilterName::TYPE:
            return "TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NamespaceFilterNameMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
