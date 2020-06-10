/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
          case PackageFormat::npm:
            return "npm";
          case PackageFormat::pypi:
            return "pypi";
          case PackageFormat::maven:
            return "maven";
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
