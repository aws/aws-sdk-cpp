/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/FailureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticBeanstalk
  {
    namespace Model
    {
      namespace FailureTypeMapper
      {

        static constexpr uint32_t UpdateCancelled_HASH = ConstExprHashingUtils::HashString("UpdateCancelled");
        static constexpr uint32_t CancellationFailed_HASH = ConstExprHashingUtils::HashString("CancellationFailed");
        static constexpr uint32_t RollbackFailed_HASH = ConstExprHashingUtils::HashString("RollbackFailed");
        static constexpr uint32_t RollbackSuccessful_HASH = ConstExprHashingUtils::HashString("RollbackSuccessful");
        static constexpr uint32_t InternalFailure_HASH = ConstExprHashingUtils::HashString("InternalFailure");
        static constexpr uint32_t InvalidEnvironmentState_HASH = ConstExprHashingUtils::HashString("InvalidEnvironmentState");
        static constexpr uint32_t PermissionsError_HASH = ConstExprHashingUtils::HashString("PermissionsError");


        FailureType GetFailureTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UpdateCancelled_HASH)
          {
            return FailureType::UpdateCancelled;
          }
          else if (hashCode == CancellationFailed_HASH)
          {
            return FailureType::CancellationFailed;
          }
          else if (hashCode == RollbackFailed_HASH)
          {
            return FailureType::RollbackFailed;
          }
          else if (hashCode == RollbackSuccessful_HASH)
          {
            return FailureType::RollbackSuccessful;
          }
          else if (hashCode == InternalFailure_HASH)
          {
            return FailureType::InternalFailure;
          }
          else if (hashCode == InvalidEnvironmentState_HASH)
          {
            return FailureType::InvalidEnvironmentState;
          }
          else if (hashCode == PermissionsError_HASH)
          {
            return FailureType::PermissionsError;
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
          case FailureType::NOT_SET:
            return {};
          case FailureType::UpdateCancelled:
            return "UpdateCancelled";
          case FailureType::CancellationFailed:
            return "CancellationFailed";
          case FailureType::RollbackFailed:
            return "RollbackFailed";
          case FailureType::RollbackSuccessful:
            return "RollbackSuccessful";
          case FailureType::InternalFailure:
            return "InternalFailure";
          case FailureType::InvalidEnvironmentState:
            return "InvalidEnvironmentState";
          case FailureType::PermissionsError:
            return "PermissionsError";
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
  } // namespace ElasticBeanstalk
} // namespace Aws
