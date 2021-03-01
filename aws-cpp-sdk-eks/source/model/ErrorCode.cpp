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

        static const int SubnetNotFound_HASH = HashingUtils::HashString("SubnetNotFound");
        static const int SecurityGroupNotFound_HASH = HashingUtils::HashString("SecurityGroupNotFound");
        static const int EniLimitReached_HASH = HashingUtils::HashString("EniLimitReached");
        static const int IpNotAvailable_HASH = HashingUtils::HashString("IpNotAvailable");
        static const int AccessDenied_HASH = HashingUtils::HashString("AccessDenied");
        static const int OperationNotPermitted_HASH = HashingUtils::HashString("OperationNotPermitted");
        static const int VpcIdNotFound_HASH = HashingUtils::HashString("VpcIdNotFound");
        static const int Unknown_HASH = HashingUtils::HashString("Unknown");
        static const int NodeCreationFailure_HASH = HashingUtils::HashString("NodeCreationFailure");
        static const int PodEvictionFailure_HASH = HashingUtils::HashString("PodEvictionFailure");
        static const int InsufficientFreeAddresses_HASH = HashingUtils::HashString("InsufficientFreeAddresses");
        static const int ClusterUnreachable_HASH = HashingUtils::HashString("ClusterUnreachable");
        static const int InsufficientNumberOfReplicas_HASH = HashingUtils::HashString("InsufficientNumberOfReplicas");
        static const int ConfigurationConflict_HASH = HashingUtils::HashString("ConfigurationConflict");
        static const int AdmissionRequestDenied_HASH = HashingUtils::HashString("AdmissionRequestDenied");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
