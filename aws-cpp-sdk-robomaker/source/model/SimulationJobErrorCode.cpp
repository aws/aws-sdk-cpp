/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/SimulationJobErrorCode.h>
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
      namespace SimulationJobErrorCodeMapper
      {

        static const int InternalServiceError_HASH = HashingUtils::HashString("InternalServiceError");
        static const int RobotApplicationCrash_HASH = HashingUtils::HashString("RobotApplicationCrash");
        static const int SimulationApplicationCrash_HASH = HashingUtils::HashString("SimulationApplicationCrash");
        static const int BadPermissionsRobotApplication_HASH = HashingUtils::HashString("BadPermissionsRobotApplication");
        static const int BadPermissionsSimulationApplication_HASH = HashingUtils::HashString("BadPermissionsSimulationApplication");
        static const int BadPermissionsS3Object_HASH = HashingUtils::HashString("BadPermissionsS3Object");
        static const int BadPermissionsS3Output_HASH = HashingUtils::HashString("BadPermissionsS3Output");
        static const int BadPermissionsCloudwatchLogs_HASH = HashingUtils::HashString("BadPermissionsCloudwatchLogs");
        static const int SubnetIpLimitExceeded_HASH = HashingUtils::HashString("SubnetIpLimitExceeded");
        static const int ENILimitExceeded_HASH = HashingUtils::HashString("ENILimitExceeded");
        static const int BadPermissionsUserCredentials_HASH = HashingUtils::HashString("BadPermissionsUserCredentials");
        static const int InvalidBundleRobotApplication_HASH = HashingUtils::HashString("InvalidBundleRobotApplication");
        static const int InvalidBundleSimulationApplication_HASH = HashingUtils::HashString("InvalidBundleSimulationApplication");
        static const int InvalidS3Resource_HASH = HashingUtils::HashString("InvalidS3Resource");
        static const int LimitExceeded_HASH = HashingUtils::HashString("LimitExceeded");
        static const int MismatchedEtag_HASH = HashingUtils::HashString("MismatchedEtag");
        static const int RobotApplicationVersionMismatchedEtag_HASH = HashingUtils::HashString("RobotApplicationVersionMismatchedEtag");
        static const int SimulationApplicationVersionMismatchedEtag_HASH = HashingUtils::HashString("SimulationApplicationVersionMismatchedEtag");
        static const int ResourceNotFound_HASH = HashingUtils::HashString("ResourceNotFound");
        static const int RequestThrottled_HASH = HashingUtils::HashString("RequestThrottled");
        static const int BatchTimedOut_HASH = HashingUtils::HashString("BatchTimedOut");
        static const int BatchCanceled_HASH = HashingUtils::HashString("BatchCanceled");
        static const int InvalidInput_HASH = HashingUtils::HashString("InvalidInput");
        static const int WrongRegionS3Bucket_HASH = HashingUtils::HashString("WrongRegionS3Bucket");
        static const int WrongRegionS3Output_HASH = HashingUtils::HashString("WrongRegionS3Output");
        static const int WrongRegionRobotApplication_HASH = HashingUtils::HashString("WrongRegionRobotApplication");
        static const int WrongRegionSimulationApplication_HASH = HashingUtils::HashString("WrongRegionSimulationApplication");


        SimulationJobErrorCode GetSimulationJobErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InternalServiceError_HASH)
          {
            return SimulationJobErrorCode::InternalServiceError;
          }
          else if (hashCode == RobotApplicationCrash_HASH)
          {
            return SimulationJobErrorCode::RobotApplicationCrash;
          }
          else if (hashCode == SimulationApplicationCrash_HASH)
          {
            return SimulationJobErrorCode::SimulationApplicationCrash;
          }
          else if (hashCode == BadPermissionsRobotApplication_HASH)
          {
            return SimulationJobErrorCode::BadPermissionsRobotApplication;
          }
          else if (hashCode == BadPermissionsSimulationApplication_HASH)
          {
            return SimulationJobErrorCode::BadPermissionsSimulationApplication;
          }
          else if (hashCode == BadPermissionsS3Object_HASH)
          {
            return SimulationJobErrorCode::BadPermissionsS3Object;
          }
          else if (hashCode == BadPermissionsS3Output_HASH)
          {
            return SimulationJobErrorCode::BadPermissionsS3Output;
          }
          else if (hashCode == BadPermissionsCloudwatchLogs_HASH)
          {
            return SimulationJobErrorCode::BadPermissionsCloudwatchLogs;
          }
          else if (hashCode == SubnetIpLimitExceeded_HASH)
          {
            return SimulationJobErrorCode::SubnetIpLimitExceeded;
          }
          else if (hashCode == ENILimitExceeded_HASH)
          {
            return SimulationJobErrorCode::ENILimitExceeded;
          }
          else if (hashCode == BadPermissionsUserCredentials_HASH)
          {
            return SimulationJobErrorCode::BadPermissionsUserCredentials;
          }
          else if (hashCode == InvalidBundleRobotApplication_HASH)
          {
            return SimulationJobErrorCode::InvalidBundleRobotApplication;
          }
          else if (hashCode == InvalidBundleSimulationApplication_HASH)
          {
            return SimulationJobErrorCode::InvalidBundleSimulationApplication;
          }
          else if (hashCode == InvalidS3Resource_HASH)
          {
            return SimulationJobErrorCode::InvalidS3Resource;
          }
          else if (hashCode == LimitExceeded_HASH)
          {
            return SimulationJobErrorCode::LimitExceeded;
          }
          else if (hashCode == MismatchedEtag_HASH)
          {
            return SimulationJobErrorCode::MismatchedEtag;
          }
          else if (hashCode == RobotApplicationVersionMismatchedEtag_HASH)
          {
            return SimulationJobErrorCode::RobotApplicationVersionMismatchedEtag;
          }
          else if (hashCode == SimulationApplicationVersionMismatchedEtag_HASH)
          {
            return SimulationJobErrorCode::SimulationApplicationVersionMismatchedEtag;
          }
          else if (hashCode == ResourceNotFound_HASH)
          {
            return SimulationJobErrorCode::ResourceNotFound;
          }
          else if (hashCode == RequestThrottled_HASH)
          {
            return SimulationJobErrorCode::RequestThrottled;
          }
          else if (hashCode == BatchTimedOut_HASH)
          {
            return SimulationJobErrorCode::BatchTimedOut;
          }
          else if (hashCode == BatchCanceled_HASH)
          {
            return SimulationJobErrorCode::BatchCanceled;
          }
          else if (hashCode == InvalidInput_HASH)
          {
            return SimulationJobErrorCode::InvalidInput;
          }
          else if (hashCode == WrongRegionS3Bucket_HASH)
          {
            return SimulationJobErrorCode::WrongRegionS3Bucket;
          }
          else if (hashCode == WrongRegionS3Output_HASH)
          {
            return SimulationJobErrorCode::WrongRegionS3Output;
          }
          else if (hashCode == WrongRegionRobotApplication_HASH)
          {
            return SimulationJobErrorCode::WrongRegionRobotApplication;
          }
          else if (hashCode == WrongRegionSimulationApplication_HASH)
          {
            return SimulationJobErrorCode::WrongRegionSimulationApplication;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimulationJobErrorCode>(hashCode);
          }

          return SimulationJobErrorCode::NOT_SET;
        }

        Aws::String GetNameForSimulationJobErrorCode(SimulationJobErrorCode enumValue)
        {
          switch(enumValue)
          {
          case SimulationJobErrorCode::InternalServiceError:
            return "InternalServiceError";
          case SimulationJobErrorCode::RobotApplicationCrash:
            return "RobotApplicationCrash";
          case SimulationJobErrorCode::SimulationApplicationCrash:
            return "SimulationApplicationCrash";
          case SimulationJobErrorCode::BadPermissionsRobotApplication:
            return "BadPermissionsRobotApplication";
          case SimulationJobErrorCode::BadPermissionsSimulationApplication:
            return "BadPermissionsSimulationApplication";
          case SimulationJobErrorCode::BadPermissionsS3Object:
            return "BadPermissionsS3Object";
          case SimulationJobErrorCode::BadPermissionsS3Output:
            return "BadPermissionsS3Output";
          case SimulationJobErrorCode::BadPermissionsCloudwatchLogs:
            return "BadPermissionsCloudwatchLogs";
          case SimulationJobErrorCode::SubnetIpLimitExceeded:
            return "SubnetIpLimitExceeded";
          case SimulationJobErrorCode::ENILimitExceeded:
            return "ENILimitExceeded";
          case SimulationJobErrorCode::BadPermissionsUserCredentials:
            return "BadPermissionsUserCredentials";
          case SimulationJobErrorCode::InvalidBundleRobotApplication:
            return "InvalidBundleRobotApplication";
          case SimulationJobErrorCode::InvalidBundleSimulationApplication:
            return "InvalidBundleSimulationApplication";
          case SimulationJobErrorCode::InvalidS3Resource:
            return "InvalidS3Resource";
          case SimulationJobErrorCode::LimitExceeded:
            return "LimitExceeded";
          case SimulationJobErrorCode::MismatchedEtag:
            return "MismatchedEtag";
          case SimulationJobErrorCode::RobotApplicationVersionMismatchedEtag:
            return "RobotApplicationVersionMismatchedEtag";
          case SimulationJobErrorCode::SimulationApplicationVersionMismatchedEtag:
            return "SimulationApplicationVersionMismatchedEtag";
          case SimulationJobErrorCode::ResourceNotFound:
            return "ResourceNotFound";
          case SimulationJobErrorCode::RequestThrottled:
            return "RequestThrottled";
          case SimulationJobErrorCode::BatchTimedOut:
            return "BatchTimedOut";
          case SimulationJobErrorCode::BatchCanceled:
            return "BatchCanceled";
          case SimulationJobErrorCode::InvalidInput:
            return "InvalidInput";
          case SimulationJobErrorCode::WrongRegionS3Bucket:
            return "WrongRegionS3Bucket";
          case SimulationJobErrorCode::WrongRegionS3Output:
            return "WrongRegionS3Output";
          case SimulationJobErrorCode::WrongRegionRobotApplication:
            return "WrongRegionRobotApplication";
          case SimulationJobErrorCode::WrongRegionSimulationApplication:
            return "WrongRegionSimulationApplication";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimulationJobErrorCodeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
