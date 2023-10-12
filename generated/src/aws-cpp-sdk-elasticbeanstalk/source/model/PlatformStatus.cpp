/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Ready_HASH = ConstExprHashingUtils::HashString("Ready");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Deleted_HASH = ConstExprHashingUtils::HashString("Deleted");


        PlatformStatus GetPlatformStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case PlatformStatus::NOT_SET:
            return {};
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

            return {};
          }
        }

      } // namespace PlatformStatusMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
