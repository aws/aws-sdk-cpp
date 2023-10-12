/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ErrorCode.h>
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
      namespace ErrorCodeMapper
      {

        static constexpr uint32_t SubnetNotFound_HASH = ConstExprHashingUtils::HashString("SubnetNotFound");
        static constexpr uint32_t SecurityGroupNotFound_HASH = ConstExprHashingUtils::HashString("SecurityGroupNotFound");
        static constexpr uint32_t EniLimitReached_HASH = ConstExprHashingUtils::HashString("EniLimitReached");
        static constexpr uint32_t IpNotAvailable_HASH = ConstExprHashingUtils::HashString("IpNotAvailable");
        static constexpr uint32_t AccessDenied_HASH = ConstExprHashingUtils::HashString("AccessDenied");
        static constexpr uint32_t OperationNotPermitted_HASH = ConstExprHashingUtils::HashString("OperationNotPermitted");
        static constexpr uint32_t VpcIdNotFound_HASH = ConstExprHashingUtils::HashString("VpcIdNotFound");
        static constexpr uint32_t Unknown_HASH = ConstExprHashingUtils::HashString("Unknown");
        static constexpr uint32_t NodeCreationFailure_HASH = ConstExprHashingUtils::HashString("NodeCreationFailure");
        static constexpr uint32_t PodEvictionFailure_HASH = ConstExprHashingUtils::HashString("PodEvictionFailure");
        static constexpr uint32_t InsufficientFreeAddresses_HASH = ConstExprHashingUtils::HashString("InsufficientFreeAddresses");
        static constexpr uint32_t ClusterUnreachable_HASH = ConstExprHashingUtils::HashString("ClusterUnreachable");
        static constexpr uint32_t InsufficientNumberOfReplicas_HASH = ConstExprHashingUtils::HashString("InsufficientNumberOfReplicas");
        static constexpr uint32_t ConfigurationConflict_HASH = ConstExprHashingUtils::HashString("ConfigurationConflict");
        static constexpr uint32_t AdmissionRequestDenied_HASH = ConstExprHashingUtils::HashString("AdmissionRequestDenied");
        static constexpr uint32_t UnsupportedAddonModification_HASH = ConstExprHashingUtils::HashString("UnsupportedAddonModification");
        static constexpr uint32_t K8sResourceNotFound_HASH = ConstExprHashingUtils::HashString("K8sResourceNotFound");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SubnetNotFound_HASH)
          {
            return ErrorCode::SubnetNotFound;
          }
          else if (hashCode == SecurityGroupNotFound_HASH)
          {
            return ErrorCode::SecurityGroupNotFound;
          }
          else if (hashCode == EniLimitReached_HASH)
          {
            return ErrorCode::EniLimitReached;
          }
          else if (hashCode == IpNotAvailable_HASH)
          {
            return ErrorCode::IpNotAvailable;
          }
          else if (hashCode == AccessDenied_HASH)
          {
            return ErrorCode::AccessDenied;
          }
          else if (hashCode == OperationNotPermitted_HASH)
          {
            return ErrorCode::OperationNotPermitted;
          }
          else if (hashCode == VpcIdNotFound_HASH)
          {
            return ErrorCode::VpcIdNotFound;
          }
          else if (hashCode == Unknown_HASH)
          {
            return ErrorCode::Unknown;
          }
          else if (hashCode == NodeCreationFailure_HASH)
          {
            return ErrorCode::NodeCreationFailure;
          }
          else if (hashCode == PodEvictionFailure_HASH)
          {
            return ErrorCode::PodEvictionFailure;
          }
          else if (hashCode == InsufficientFreeAddresses_HASH)
          {
            return ErrorCode::InsufficientFreeAddresses;
          }
          else if (hashCode == ClusterUnreachable_HASH)
          {
            return ErrorCode::ClusterUnreachable;
          }
          else if (hashCode == InsufficientNumberOfReplicas_HASH)
          {
            return ErrorCode::InsufficientNumberOfReplicas;
          }
          else if (hashCode == ConfigurationConflict_HASH)
          {
            return ErrorCode::ConfigurationConflict;
          }
          else if (hashCode == AdmissionRequestDenied_HASH)
          {
            return ErrorCode::AdmissionRequestDenied;
          }
          else if (hashCode == UnsupportedAddonModification_HASH)
          {
            return ErrorCode::UnsupportedAddonModification;
          }
          else if (hashCode == K8sResourceNotFound_HASH)
          {
            return ErrorCode::K8sResourceNotFound;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCode>(hashCode);
          }

          return ErrorCode::NOT_SET;
        }

        Aws::String GetNameForErrorCode(ErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ErrorCode::NOT_SET:
            return {};
          case ErrorCode::SubnetNotFound:
            return "SubnetNotFound";
          case ErrorCode::SecurityGroupNotFound:
            return "SecurityGroupNotFound";
          case ErrorCode::EniLimitReached:
            return "EniLimitReached";
          case ErrorCode::IpNotAvailable:
            return "IpNotAvailable";
          case ErrorCode::AccessDenied:
            return "AccessDenied";
          case ErrorCode::OperationNotPermitted:
            return "OperationNotPermitted";
          case ErrorCode::VpcIdNotFound:
            return "VpcIdNotFound";
          case ErrorCode::Unknown:
            return "Unknown";
          case ErrorCode::NodeCreationFailure:
            return "NodeCreationFailure";
          case ErrorCode::PodEvictionFailure:
            return "PodEvictionFailure";
          case ErrorCode::InsufficientFreeAddresses:
            return "InsufficientFreeAddresses";
          case ErrorCode::ClusterUnreachable:
            return "ClusterUnreachable";
          case ErrorCode::InsufficientNumberOfReplicas:
            return "InsufficientNumberOfReplicas";
          case ErrorCode::ConfigurationConflict:
            return "ConfigurationConflict";
          case ErrorCode::AdmissionRequestDenied:
            return "AdmissionRequestDenied";
          case ErrorCode::UnsupportedAddonModification:
            return "UnsupportedAddonModification";
          case ErrorCode::K8sResourceNotFound:
            return "K8sResourceNotFound";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCodeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
