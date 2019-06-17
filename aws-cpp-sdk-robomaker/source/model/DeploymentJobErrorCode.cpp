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

#include <aws/robomaker/model/DeploymentJobErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace DeploymentJobErrorCodeMapper
      {

        static const int ResourceNotFound_HASH = HashingUtils::HashString("ResourceNotFound");
        static const int EnvironmentSetupError_HASH = HashingUtils::HashString("EnvironmentSetupError");
        static const int EtagMismatch_HASH = HashingUtils::HashString("EtagMismatch");
        static const int FailureThresholdBreached_HASH = HashingUtils::HashString("FailureThresholdBreached");
        static const int RobotDeploymentAborted_HASH = HashingUtils::HashString("RobotDeploymentAborted");
        static const int RobotDeploymentNoResponse_HASH = HashingUtils::HashString("RobotDeploymentNoResponse");
        static const int RobotAgentConnectionTimeout_HASH = HashingUtils::HashString("RobotAgentConnectionTimeout");
        static const int GreengrassDeploymentFailed_HASH = HashingUtils::HashString("GreengrassDeploymentFailed");
        static const int MissingRobotArchitecture_HASH = HashingUtils::HashString("MissingRobotArchitecture");
        static const int MissingRobotApplicationArchitecture_HASH = HashingUtils::HashString("MissingRobotApplicationArchitecture");
        static const int MissingRobotDeploymentResource_HASH = HashingUtils::HashString("MissingRobotDeploymentResource");
        static const int GreengrassGroupVersionDoesNotExist_HASH = HashingUtils::HashString("GreengrassGroupVersionDoesNotExist");
        static const int ExtractingBundleFailure_HASH = HashingUtils::HashString("ExtractingBundleFailure");
        static const int PreLaunchFileFailure_HASH = HashingUtils::HashString("PreLaunchFileFailure");
        static const int PostLaunchFileFailure_HASH = HashingUtils::HashString("PostLaunchFileFailure");
        static const int BadPermissionError_HASH = HashingUtils::HashString("BadPermissionError");
        static const int InternalServerError_HASH = HashingUtils::HashString("InternalServerError");


        DeploymentJobErrorCode GetDeploymentJobErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceNotFound_HASH)
          {
            return DeploymentJobErrorCode::ResourceNotFound;
          }
          else if (hashCode == EnvironmentSetupError_HASH)
          {
            return DeploymentJobErrorCode::EnvironmentSetupError;
          }
          else if (hashCode == EtagMismatch_HASH)
          {
            return DeploymentJobErrorCode::EtagMismatch;
          }
          else if (hashCode == FailureThresholdBreached_HASH)
          {
            return DeploymentJobErrorCode::FailureThresholdBreached;
          }
          else if (hashCode == RobotDeploymentAborted_HASH)
          {
            return DeploymentJobErrorCode::RobotDeploymentAborted;
          }
          else if (hashCode == RobotDeploymentNoResponse_HASH)
          {
            return DeploymentJobErrorCode::RobotDeploymentNoResponse;
          }
          else if (hashCode == RobotAgentConnectionTimeout_HASH)
          {
            return DeploymentJobErrorCode::RobotAgentConnectionTimeout;
          }
          else if (hashCode == GreengrassDeploymentFailed_HASH)
          {
            return DeploymentJobErrorCode::GreengrassDeploymentFailed;
          }
          else if (hashCode == MissingRobotArchitecture_HASH)
          {
            return DeploymentJobErrorCode::MissingRobotArchitecture;
          }
          else if (hashCode == MissingRobotApplicationArchitecture_HASH)
          {
            return DeploymentJobErrorCode::MissingRobotApplicationArchitecture;
          }
          else if (hashCode == MissingRobotDeploymentResource_HASH)
          {
            return DeploymentJobErrorCode::MissingRobotDeploymentResource;
          }
          else if (hashCode == GreengrassGroupVersionDoesNotExist_HASH)
          {
            return DeploymentJobErrorCode::GreengrassGroupVersionDoesNotExist;
          }
          else if (hashCode == ExtractingBundleFailure_HASH)
          {
            return DeploymentJobErrorCode::ExtractingBundleFailure;
          }
          else if (hashCode == PreLaunchFileFailure_HASH)
          {
            return DeploymentJobErrorCode::PreLaunchFileFailure;
          }
          else if (hashCode == PostLaunchFileFailure_HASH)
          {
            return DeploymentJobErrorCode::PostLaunchFileFailure;
          }
          else if (hashCode == BadPermissionError_HASH)
          {
            return DeploymentJobErrorCode::BadPermissionError;
          }
          else if (hashCode == InternalServerError_HASH)
          {
            return DeploymentJobErrorCode::InternalServerError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentJobErrorCode>(hashCode);
          }

          return DeploymentJobErrorCode::NOT_SET;
        }

        Aws::String GetNameForDeploymentJobErrorCode(DeploymentJobErrorCode enumValue)
        {
          switch(enumValue)
          {
          case DeploymentJobErrorCode::ResourceNotFound:
            return "ResourceNotFound";
          case DeploymentJobErrorCode::EnvironmentSetupError:
            return "EnvironmentSetupError";
          case DeploymentJobErrorCode::EtagMismatch:
            return "EtagMismatch";
          case DeploymentJobErrorCode::FailureThresholdBreached:
            return "FailureThresholdBreached";
          case DeploymentJobErrorCode::RobotDeploymentAborted:
            return "RobotDeploymentAborted";
          case DeploymentJobErrorCode::RobotDeploymentNoResponse:
            return "RobotDeploymentNoResponse";
          case DeploymentJobErrorCode::RobotAgentConnectionTimeout:
            return "RobotAgentConnectionTimeout";
          case DeploymentJobErrorCode::GreengrassDeploymentFailed:
            return "GreengrassDeploymentFailed";
          case DeploymentJobErrorCode::MissingRobotArchitecture:
            return "MissingRobotArchitecture";
          case DeploymentJobErrorCode::MissingRobotApplicationArchitecture:
            return "MissingRobotApplicationArchitecture";
          case DeploymentJobErrorCode::MissingRobotDeploymentResource:
            return "MissingRobotDeploymentResource";
          case DeploymentJobErrorCode::GreengrassGroupVersionDoesNotExist:
            return "GreengrassGroupVersionDoesNotExist";
          case DeploymentJobErrorCode::ExtractingBundleFailure:
            return "ExtractingBundleFailure";
          case DeploymentJobErrorCode::PreLaunchFileFailure:
            return "PreLaunchFileFailure";
          case DeploymentJobErrorCode::PostLaunchFileFailure:
            return "PostLaunchFileFailure";
          case DeploymentJobErrorCode::BadPermissionError:
            return "BadPermissionError";
          case DeploymentJobErrorCode::InternalServerError:
            return "InternalServerError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentJobErrorCodeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
