/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/model/FailureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace FailureTypeMapper
      {

        static const int JobFailed_HASH = HashingUtils::HashString("JobFailed");
        static const int ConfigurationError_HASH = HashingUtils::HashString("ConfigurationError");
        static const int PermissionError_HASH = HashingUtils::HashString("PermissionError");
        static const int RevisionOutOfSync_HASH = HashingUtils::HashString("RevisionOutOfSync");
        static const int RevisionUnavailable_HASH = HashingUtils::HashString("RevisionUnavailable");
        static const int SystemUnavailable_HASH = HashingUtils::HashString("SystemUnavailable");


        FailureType GetFailureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JobFailed_HASH)
          {
            return FailureType::JobFailed;
          }
          else if (hashCode == ConfigurationError_HASH)
          {
            return FailureType::ConfigurationError;
          }
          else if (hashCode == PermissionError_HASH)
          {
            return FailureType::PermissionError;
          }
          else if (hashCode == RevisionOutOfSync_HASH)
          {
            return FailureType::RevisionOutOfSync;
          }
          else if (hashCode == RevisionUnavailable_HASH)
          {
            return FailureType::RevisionUnavailable;
          }
          else if (hashCode == SystemUnavailable_HASH)
          {
            return FailureType::SystemUnavailable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailureType>(hashCode);
          }

          return FailureType::NOT_SET;
        }

        Aws::String GetNameForFailureType(FailureType enumValue)
        {
          switch(enumValue)
          {
          case FailureType::JobFailed:
            return "JobFailed";
          case FailureType::ConfigurationError:
            return "ConfigurationError";
          case FailureType::PermissionError:
            return "PermissionError";
          case FailureType::RevisionOutOfSync:
            return "RevisionOutOfSync";
          case FailureType::RevisionUnavailable:
            return "RevisionUnavailable";
          case FailureType::SystemUnavailable:
            return "SystemUnavailable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace FailureTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
