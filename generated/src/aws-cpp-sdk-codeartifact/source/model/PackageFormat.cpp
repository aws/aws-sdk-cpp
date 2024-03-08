/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageFormat.h>
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
      namespace PackageFormatMapper
      {

        static const int npm_HASH = HashingUtils::HashString("npm");
        static const int pypi_HASH = HashingUtils::HashString("pypi");
        static const int maven_HASH = HashingUtils::HashString("maven");
        static const int nuget_HASH = HashingUtils::HashString("nuget");
        static const int generic_HASH = HashingUtils::HashString("generic");
        static const int swift_HASH = HashingUtils::HashString("swift");


        PackageFormat GetPackageFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == npm_HASH)
          {
            return PackageFormat::npm;
          }
          else if (hashCode == pypi_HASH)
          {
            return PackageFormat::pypi;
          }
          else if (hashCode == maven_HASH)
          {
            return PackageFormat::maven;
          }
          else if (hashCode == nuget_HASH)
          {
            return PackageFormat::nuget;
          }
          else if (hashCode == generic_HASH)
          {
            return PackageFormat::generic;
          }
          else if (hashCode == swift_HASH)
          {
            return PackageFormat::swift;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageFormat>(hashCode);
          }

          return PackageFormat::NOT_SET;
        }

        Aws::String GetNameForPackageFormat(PackageFormat enumValue)
        {
          switch(enumValue)
          {
          case PackageFormat::NOT_SET:
            return {};
          case PackageFormat::npm:
            return "npm";
          case PackageFormat::pypi:
            return "pypi";
          case PackageFormat::maven:
            return "maven";
          case PackageFormat::nuget:
            return "nuget";
          case PackageFormat::generic:
            return "generic";
          case PackageFormat::swift:
            return "swift";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageFormatMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
