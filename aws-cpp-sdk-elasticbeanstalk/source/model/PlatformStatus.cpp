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
#include <aws/elasticbeanstalk/model/PlatformStatus.h>
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
      namespace PlatformStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Ready_HASH = HashingUtils::HashString("Ready");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");


        PlatformStatus GetPlatformStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return PlatformStatus::Creating;
          }
          else if (hashCode == Failed_HASH)
          {
            return PlatformStatus::Failed;
          }
          else if (hashCode == Ready_HASH)
          {
            return PlatformStatus::Ready;
          }
          else if (hashCode == Deleting_HASH)
          {
            return PlatformStatus::Deleting;
          }
          else if (hashCode == Deleted_HASH)
          {
            return PlatformStatus::Deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlatformStatus>(hashCode);
          }

          return PlatformStatus::NOT_SET;
        }

        Aws::String GetNameForPlatformStatus(PlatformStatus enumValue)
        {
          switch(enumValue)
          {
          case PlatformStatus::Creating:
            return "Creating";
          case PlatformStatus::Failed:
            return "Failed";
          case PlatformStatus::Ready:
            return "Ready";
          case PlatformStatus::Deleting:
            return "Deleting";
          case PlatformStatus::Deleted:
            return "Deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PlatformStatusMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
