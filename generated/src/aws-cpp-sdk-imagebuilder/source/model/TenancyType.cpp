/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/TenancyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace TenancyTypeMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int dedicated_HASH = HashingUtils::HashString("dedicated");
        static const int host_HASH = HashingUtils::HashString("host");


        TenancyType GetTenancyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return TenancyType::default_;
          }
          else if (hashCode == dedicated_HASH)
          {
            return TenancyType::dedicated;
          }
          else if (hashCode == host_HASH)
          {
            return TenancyType::host;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TenancyType>(hashCode);
          }

          return TenancyType::NOT_SET;
        }

        Aws::String GetNameForTenancyType(TenancyType enumValue)
        {
          switch(enumValue)
          {
          case TenancyType::NOT_SET:
            return {};
          case TenancyType::default_:
            return "default";
          case TenancyType::dedicated:
            return "dedicated";
          case TenancyType::host:
            return "host";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TenancyTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
