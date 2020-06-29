/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

            return {};
          }
        }

      } // namespace FailureTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
