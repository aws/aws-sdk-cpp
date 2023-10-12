/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/PackageManager.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace PackageManagerMapper
      {

        static constexpr uint32_t BUNDLER_HASH = ConstExprHashingUtils::HashString("BUNDLER");
        static constexpr uint32_t CARGO_HASH = ConstExprHashingUtils::HashString("CARGO");
        static constexpr uint32_t COMPOSER_HASH = ConstExprHashingUtils::HashString("COMPOSER");
        static constexpr uint32_t NPM_HASH = ConstExprHashingUtils::HashString("NPM");
        static constexpr uint32_t NUGET_HASH = ConstExprHashingUtils::HashString("NUGET");
        static constexpr uint32_t PIPENV_HASH = ConstExprHashingUtils::HashString("PIPENV");
        static constexpr uint32_t POETRY_HASH = ConstExprHashingUtils::HashString("POETRY");
        static constexpr uint32_t YARN_HASH = ConstExprHashingUtils::HashString("YARN");
        static constexpr uint32_t GOBINARY_HASH = ConstExprHashingUtils::HashString("GOBINARY");
        static constexpr uint32_t GOMOD_HASH = ConstExprHashingUtils::HashString("GOMOD");
        static constexpr uint32_t JAR_HASH = ConstExprHashingUtils::HashString("JAR");
        static constexpr uint32_t OS_HASH = ConstExprHashingUtils::HashString("OS");
        static constexpr uint32_t PIP_HASH = ConstExprHashingUtils::HashString("PIP");
        static constexpr uint32_t PYTHONPKG_HASH = ConstExprHashingUtils::HashString("PYTHONPKG");
        static constexpr uint32_t NODEPKG_HASH = ConstExprHashingUtils::HashString("NODEPKG");
        static constexpr uint32_t POM_HASH = ConstExprHashingUtils::HashString("POM");
        static constexpr uint32_t GEMSPEC_HASH = ConstExprHashingUtils::HashString("GEMSPEC");


        PackageManager GetPackageManagerForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUNDLER_HASH)
          {
            return PackageManager::BUNDLER;
          }
          else if (hashCode == CARGO_HASH)
          {
            return PackageManager::CARGO;
          }
          else if (hashCode == COMPOSER_HASH)
          {
            return PackageManager::COMPOSER;
          }
          else if (hashCode == NPM_HASH)
          {
            return PackageManager::NPM;
          }
          else if (hashCode == NUGET_HASH)
          {
            return PackageManager::NUGET;
          }
          else if (hashCode == PIPENV_HASH)
          {
            return PackageManager::PIPENV;
          }
          else if (hashCode == POETRY_HASH)
          {
            return PackageManager::POETRY;
          }
          else if (hashCode == YARN_HASH)
          {
            return PackageManager::YARN;
          }
          else if (hashCode == GOBINARY_HASH)
          {
            return PackageManager::GOBINARY;
          }
          else if (hashCode == GOMOD_HASH)
          {
            return PackageManager::GOMOD;
          }
          else if (hashCode == JAR_HASH)
          {
            return PackageManager::JAR;
          }
          else if (hashCode == OS_HASH)
          {
            return PackageManager::OS;
          }
          else if (hashCode == PIP_HASH)
          {
            return PackageManager::PIP;
          }
          else if (hashCode == PYTHONPKG_HASH)
          {
            return PackageManager::PYTHONPKG;
          }
          else if (hashCode == NODEPKG_HASH)
          {
            return PackageManager::NODEPKG;
          }
          else if (hashCode == POM_HASH)
          {
            return PackageManager::POM;
          }
          else if (hashCode == GEMSPEC_HASH)
          {
            return PackageManager::GEMSPEC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageManager>(hashCode);
          }

          return PackageManager::NOT_SET;
        }

        Aws::String GetNameForPackageManager(PackageManager enumValue)
        {
          switch(enumValue)
          {
          case PackageManager::NOT_SET:
            return {};
          case PackageManager::BUNDLER:
            return "BUNDLER";
          case PackageManager::CARGO:
            return "CARGO";
          case PackageManager::COMPOSER:
            return "COMPOSER";
          case PackageManager::NPM:
            return "NPM";
          case PackageManager::NUGET:
            return "NUGET";
          case PackageManager::PIPENV:
            return "PIPENV";
          case PackageManager::POETRY:
            return "POETRY";
          case PackageManager::YARN:
            return "YARN";
          case PackageManager::GOBINARY:
            return "GOBINARY";
          case PackageManager::GOMOD:
            return "GOMOD";
          case PackageManager::JAR:
            return "JAR";
          case PackageManager::OS:
            return "OS";
          case PackageManager::PIP:
            return "PIP";
          case PackageManager::PYTHONPKG:
            return "PYTHONPKG";
          case PackageManager::NODEPKG:
            return "NODEPKG";
          case PackageManager::POM:
            return "POM";
          case PackageManager::GEMSPEC:
            return "GEMSPEC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageManagerMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
