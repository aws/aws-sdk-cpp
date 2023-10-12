/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DirectoryConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace DirectoryConfigurationStatusMapper
      {

        static constexpr uint32_t Requested_HASH = ConstExprHashingUtils::HashString("Requested");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");
        static constexpr uint32_t Updated_HASH = ConstExprHashingUtils::HashString("Updated");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Default_HASH = ConstExprHashingUtils::HashString("Default");


        DirectoryConfigurationStatus GetDirectoryConfigurationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Requested_HASH)
          {
            return DirectoryConfigurationStatus::Requested;
          }
          else if (hashCode == Updating_HASH)
          {
            return DirectoryConfigurationStatus::Updating;
          }
          else if (hashCode == Updated_HASH)
          {
            return DirectoryConfigurationStatus::Updated;
          }
          else if (hashCode == Failed_HASH)
          {
            return DirectoryConfigurationStatus::Failed;
          }
          else if (hashCode == Default_HASH)
          {
            return DirectoryConfigurationStatus::Default;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectoryConfigurationStatus>(hashCode);
          }

          return DirectoryConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForDirectoryConfigurationStatus(DirectoryConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case DirectoryConfigurationStatus::NOT_SET:
            return {};
          case DirectoryConfigurationStatus::Requested:
            return "Requested";
          case DirectoryConfigurationStatus::Updating:
            return "Updating";
          case DirectoryConfigurationStatus::Updated:
            return "Updated";
          case DirectoryConfigurationStatus::Failed:
            return "Failed";
          case DirectoryConfigurationStatus::Default:
            return "Default";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectoryConfigurationStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
