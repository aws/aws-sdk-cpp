/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageVersionOriginType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeArtifact
  {
    namespace Model
    {
      namespace PackageVersionOriginTypeMapper
      {

        static constexpr uint32_t INTERNAL_HASH = ConstExprHashingUtils::HashString("INTERNAL");
        static constexpr uint32_t EXTERNAL_HASH = ConstExprHashingUtils::HashString("EXTERNAL");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");


        PackageVersionOriginType GetPackageVersionOriginTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_HASH)
          {
            return PackageVersionOriginType::INTERNAL;
          }
          else if (hashCode == EXTERNAL_HASH)
          {
            return PackageVersionOriginType::EXTERNAL;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return PackageVersionOriginType::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageVersionOriginType>(hashCode);
          }

          return PackageVersionOriginType::NOT_SET;
        }

        Aws::String GetNameForPackageVersionOriginType(PackageVersionOriginType enumValue)
        {
          switch(enumValue)
          {
          case PackageVersionOriginType::NOT_SET:
            return {};
          case PackageVersionOriginType::INTERNAL:
            return "INTERNAL";
          case PackageVersionOriginType::EXTERNAL:
            return "EXTERNAL";
          case PackageVersionOriginType::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageVersionOriginTypeMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
