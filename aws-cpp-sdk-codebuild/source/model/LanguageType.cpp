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

        static const int JAVA_HASH = HashingUtils::HashString("JAVA");
        static const int PYTHON_HASH = HashingUtils::HashString("PYTHON");
        static const int NODE_JS_HASH = HashingUtils::HashString("NODE_JS");
        static const int RUBY_HASH = HashingUtils::HashString("RUBY");
        static const int GOLANG_HASH = HashingUtils::HashString("GOLANG");
        static const int DOCKER_HASH = HashingUtils::HashString("DOCKER");
        static const int ANDROID__HASH = HashingUtils::HashString("ANDROID");
        static const int BASE_HASH = HashingUtils::HashString("BASE");


        LanguageType GetLanguageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == BASE_HASH)
          {
            return LanguageType::BASE;
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
          case LanguageType::BASE:
            return "BASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace LanguageTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
