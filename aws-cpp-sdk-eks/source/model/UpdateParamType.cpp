/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpdateParamType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace UpdateParamTypeMapper
      {

        static const int Version_HASH = HashingUtils::HashString("Version");
        static const int PlatformVersion_HASH = HashingUtils::HashString("PlatformVersion");
        static const int EndpointPrivateAccess_HASH = HashingUtils::HashString("EndpointPrivateAccess");
        static const int EndpointPublicAccess_HASH = HashingUtils::HashString("EndpointPublicAccess");
        static const int ClusterLogging_HASH = HashingUtils::HashString("ClusterLogging");
        static const int DesiredSize_HASH = HashingUtils::HashString("DesiredSize");
        static const int LabelsToAdd_HASH = HashingUtils::HashString("LabelsToAdd");
        static const int LabelsToRemove_HASH = HashingUtils::HashString("LabelsToRemove");
        static const int MaxSize_HASH = HashingUtils::HashString("MaxSize");
        static const int MinSize_HASH = HashingUtils::HashString("MinSize");
        static const int ReleaseVersion_HASH = HashingUtils::HashString("ReleaseVersion");
        static const int PublicAccessCidrs_HASH = HashingUtils::HashString("PublicAccessCidrs");


        UpdateParamType GetUpdateParamTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Version_HASH)
          {
            return UpdateParamType::Version;
          }
          else if (hashCode == PlatformVersion_HASH)
          {
            return UpdateParamType::PlatformVersion;
          }
          else if (hashCode == EndpointPrivateAccess_HASH)
          {
            return UpdateParamType::EndpointPrivateAccess;
          }
          else if (hashCode == EndpointPublicAccess_HASH)
          {
            return UpdateParamType::EndpointPublicAccess;
          }
          else if (hashCode == ClusterLogging_HASH)
          {
            return UpdateParamType::ClusterLogging;
          }
          else if (hashCode == DesiredSize_HASH)
          {
            return UpdateParamType::DesiredSize;
          }
          else if (hashCode == LabelsToAdd_HASH)
          {
            return UpdateParamType::LabelsToAdd;
          }
          else if (hashCode == LabelsToRemove_HASH)
          {
            return UpdateParamType::LabelsToRemove;
          }
          else if (hashCode == MaxSize_HASH)
          {
            return UpdateParamType::MaxSize;
          }
          else if (hashCode == MinSize_HASH)
          {
            return UpdateParamType::MinSize;
          }
          else if (hashCode == ReleaseVersion_HASH)
          {
            return UpdateParamType::ReleaseVersion;
          }
          else if (hashCode == PublicAccessCidrs_HASH)
          {
            return UpdateParamType::PublicAccessCidrs;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateParamType>(hashCode);
          }

          return UpdateParamType::NOT_SET;
        }

        Aws::String GetNameForUpdateParamType(UpdateParamType enumValue)
        {
          switch(enumValue)
          {
          case UpdateParamType::Version:
            return "Version";
          case UpdateParamType::PlatformVersion:
            return "PlatformVersion";
          case UpdateParamType::EndpointPrivateAccess:
            return "EndpointPrivateAccess";
          case UpdateParamType::EndpointPublicAccess:
            return "EndpointPublicAccess";
          case UpdateParamType::ClusterLogging:
            return "ClusterLogging";
          case UpdateParamType::DesiredSize:
            return "DesiredSize";
          case UpdateParamType::LabelsToAdd:
            return "LabelsToAdd";
          case UpdateParamType::LabelsToRemove:
            return "LabelsToRemove";
          case UpdateParamType::MaxSize:
            return "MaxSize";
          case UpdateParamType::MinSize:
            return "MinSize";
          case UpdateParamType::ReleaseVersion:
            return "ReleaseVersion";
          case UpdateParamType::PublicAccessCidrs:
            return "PublicAccessCidrs";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateParamTypeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
