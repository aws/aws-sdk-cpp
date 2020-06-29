/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BuildPhaseType.h>
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
      namespace BuildPhaseTypeMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int DOWNLOAD_SOURCE_HASH = HashingUtils::HashString("DOWNLOAD_SOURCE");
        static const int INSTALL_HASH = HashingUtils::HashString("INSTALL");
        static const int PRE_BUILD_HASH = HashingUtils::HashString("PRE_BUILD");
        static const int BUILD_HASH = HashingUtils::HashString("BUILD");
        static const int POST_BUILD_HASH = HashingUtils::HashString("POST_BUILD");
        static const int UPLOAD_ARTIFACTS_HASH = HashingUtils::HashString("UPLOAD_ARTIFACTS");
        static const int FINALIZING_HASH = HashingUtils::HashString("FINALIZING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        BuildPhaseType GetBuildPhaseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return BuildPhaseType::SUBMITTED;
          }
          else if (hashCode == QUEUED_HASH)
          {
            return BuildPhaseType::QUEUED;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return BuildPhaseType::PROVISIONING;
          }
          else if (hashCode == DOWNLOAD_SOURCE_HASH)
          {
            return BuildPhaseType::DOWNLOAD_SOURCE;
          }
          else if (hashCode == INSTALL_HASH)
          {
            return BuildPhaseType::INSTALL;
          }
          else if (hashCode == PRE_BUILD_HASH)
          {
            return BuildPhaseType::PRE_BUILD;
          }
          else if (hashCode == BUILD_HASH)
          {
            return BuildPhaseType::BUILD;
          }
          else if (hashCode == POST_BUILD_HASH)
          {
            return BuildPhaseType::POST_BUILD;
          }
          else if (hashCode == UPLOAD_ARTIFACTS_HASH)
          {
            return BuildPhaseType::UPLOAD_ARTIFACTS;
          }
          else if (hashCode == FINALIZING_HASH)
          {
            return BuildPhaseType::FINALIZING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return BuildPhaseType::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BuildPhaseType>(hashCode);
          }

          return BuildPhaseType::NOT_SET;
        }

        Aws::String GetNameForBuildPhaseType(BuildPhaseType enumValue)
        {
          switch(enumValue)
          {
          case BuildPhaseType::SUBMITTED:
            return "SUBMITTED";
          case BuildPhaseType::QUEUED:
            return "QUEUED";
          case BuildPhaseType::PROVISIONING:
            return "PROVISIONING";
          case BuildPhaseType::DOWNLOAD_SOURCE:
            return "DOWNLOAD_SOURCE";
          case BuildPhaseType::INSTALL:
            return "INSTALL";
          case BuildPhaseType::PRE_BUILD:
            return "PRE_BUILD";
          case BuildPhaseType::BUILD:
            return "BUILD";
          case BuildPhaseType::POST_BUILD:
            return "POST_BUILD";
          case BuildPhaseType::UPLOAD_ARTIFACTS:
            return "UPLOAD_ARTIFACTS";
          case BuildPhaseType::FINALIZING:
            return "FINALIZING";
          case BuildPhaseType::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BuildPhaseTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
