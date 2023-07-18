﻿/**
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

        static const int BUNDLER_HASH = HashingUtils::HashString("BUNDLER");
        static const int CARGO_HASH = HashingUtils::HashString("CARGO");
        static const int COMPOSER_HASH = HashingUtils::HashString("COMPOSER");
        static const int NPM_HASH = HashingUtils::HashString("NPM");
        static const int NUGET_HASH = HashingUtils::HashString("NUGET");
        static const int PIPENV_HASH = HashingUtils::HashString("PIPENV");
        static const int POETRY_HASH = HashingUtils::HashString("POETRY");
        static const int YARN_HASH = HashingUtils::HashString("YARN");
        static const int GOBINARY_HASH = HashingUtils::HashString("GOBINARY");
        static const int GOMOD_HASH = HashingUtils::HashString("GOMOD");
        static const int JAR_HASH = HashingUtils::HashString("JAR");
        static const int OS_HASH = HashingUtils::HashString("OS");


        PackageManager GetPackageManagerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
