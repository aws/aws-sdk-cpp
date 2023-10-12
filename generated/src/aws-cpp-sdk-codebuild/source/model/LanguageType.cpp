/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/LanguageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace LanguageTypeMapper
      {

        static constexpr uint32_t JAVA_HASH = ConstExprHashingUtils::HashString("JAVA");
        static constexpr uint32_t PYTHON_HASH = ConstExprHashingUtils::HashString("PYTHON");
        static constexpr uint32_t NODE_JS_HASH = ConstExprHashingUtils::HashString("NODE_JS");
        static constexpr uint32_t RUBY_HASH = ConstExprHashingUtils::HashString("RUBY");
        static constexpr uint32_t GOLANG_HASH = ConstExprHashingUtils::HashString("GOLANG");
        static constexpr uint32_t DOCKER_HASH = ConstExprHashingUtils::HashString("DOCKER");
        static constexpr uint32_t ANDROID__HASH = ConstExprHashingUtils::HashString("ANDROID");
        static constexpr uint32_t DOTNET_HASH = ConstExprHashingUtils::HashString("DOTNET");
        static constexpr uint32_t BASE_HASH = ConstExprHashingUtils::HashString("BASE");
        static constexpr uint32_t PHP_HASH = ConstExprHashingUtils::HashString("PHP");


        LanguageType GetLanguageTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JAVA_HASH)
          {
            return LanguageType::JAVA;
          }
          else if (hashCode == PYTHON_HASH)
          {
            return LanguageType::PYTHON;
          }
          else if (hashCode == NODE_JS_HASH)
          {
            return LanguageType::NODE_JS;
          }
          else if (hashCode == RUBY_HASH)
          {
            return LanguageType::RUBY;
          }
          else if (hashCode == GOLANG_HASH)
          {
            return LanguageType::GOLANG;
          }
          else if (hashCode == DOCKER_HASH)
          {
            return LanguageType::DOCKER;
          }
          else if (hashCode == ANDROID__HASH)
          {
            return LanguageType::ANDROID_;
          }
          else if (hashCode == DOTNET_HASH)
          {
            return LanguageType::DOTNET;
          }
          else if (hashCode == BASE_HASH)
          {
            return LanguageType::BASE;
          }
          else if (hashCode == PHP_HASH)
          {
            return LanguageType::PHP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LanguageType>(hashCode);
          }

          return LanguageType::NOT_SET;
        }

        Aws::String GetNameForLanguageType(LanguageType enumValue)
        {
          switch(enumValue)
          {
          case LanguageType::NOT_SET:
            return {};
          case LanguageType::JAVA:
            return "JAVA";
          case LanguageType::PYTHON:
            return "PYTHON";
          case LanguageType::NODE_JS:
            return "NODE_JS";
          case LanguageType::RUBY:
            return "RUBY";
          case LanguageType::GOLANG:
            return "GOLANG";
          case LanguageType::DOCKER:
            return "DOCKER";
          case LanguageType::ANDROID_:
            return "ANDROID";
          case LanguageType::DOTNET:
            return "DOTNET";
          case LanguageType::BASE:
            return "BASE";
          case LanguageType::PHP:
            return "PHP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LanguageTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
