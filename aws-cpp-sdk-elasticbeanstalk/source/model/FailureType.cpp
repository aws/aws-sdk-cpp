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

        static const int UpdateCancelled_HASH = HashingUtils::HashString("UpdateCancelled");
        static const int CancellationFailed_HASH = HashingUtils::HashString("CancellationFailed");
        static const int RollbackFailed_HASH = HashingUtils::HashString("RollbackFailed");
        static const int RollbackSuccessful_HASH = HashingUtils::HashString("RollbackSuccessful");
        static const int InternalFailure_HASH = HashingUtils::HashString("InternalFailure");
        static const int InvalidEnvironmentState_HASH = HashingUtils::HashString("InvalidEnvironmentState");
        static const int PermissionsError_HASH = HashingUtils::HashString("PermissionsError");


        FailureType GetFailureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace FailureTypeMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
