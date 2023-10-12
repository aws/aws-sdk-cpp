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

        static constexpr uint32_t SUBMITTED_HASH = ConstExprHashingUtils::HashString("SUBMITTED");
        static constexpr uint32_t QUEUED_HASH = ConstExprHashingUtils::HashString("QUEUED");
        static constexpr uint32_t PROVISIONING_HASH = ConstExprHashingUtils::HashString("PROVISIONING");
        static constexpr uint32_t DOWNLOAD_SOURCE_HASH = ConstExprHashingUtils::HashString("DOWNLOAD_SOURCE");
        static constexpr uint32_t INSTALL_HASH = ConstExprHashingUtils::HashString("INSTALL");
        static constexpr uint32_t PRE_BUILD_HASH = ConstExprHashingUtils::HashString("PRE_BUILD");
        static constexpr uint32_t BUILD_HASH = ConstExprHashingUtils::HashString("BUILD");
        static constexpr uint32_t POST_BUILD_HASH = ConstExprHashingUtils::HashString("POST_BUILD");
        static constexpr uint32_t UPLOAD_ARTIFACTS_HASH = ConstExprHashingUtils::HashString("UPLOAD_ARTIFACTS");
        static constexpr uint32_t FINALIZING_HASH = ConstExprHashingUtils::HashString("FINALIZING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");


        BuildPhaseType GetBuildPhaseTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case BuildPhaseType::NOT_SET:
            return {};
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
