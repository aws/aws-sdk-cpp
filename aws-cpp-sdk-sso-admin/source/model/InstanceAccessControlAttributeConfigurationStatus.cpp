/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/InstanceAccessControlAttributeConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSOAdmin
  {
    namespace Model
    {
      namespace InstanceAccessControlAttributeConfigurationStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int CREATION_IN_PROGRESS_HASH = HashingUtils::HashString("CREATION_IN_PROGRESS");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");


        InstanceAccessControlAttributeConfigurationStatus GetInstanceAccessControlAttributeConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return InstanceAccessControlAttributeConfigurationStatus::ENABLED;
          }
          else if (hashCode == CREATION_IN_PROGRESS_HASH)
          {
            return InstanceAccessControlAttributeConfigurationStatus::CREATION_IN_PROGRESS;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return InstanceAccessControlAttributeConfigurationStatus::CREATION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceAccessControlAttributeConfigurationStatus>(hashCode);
          }

          return InstanceAccessControlAttributeConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForInstanceAccessControlAttributeConfigurationStatus(InstanceAccessControlAttributeConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case InstanceAccessControlAttributeConfigurationStatus::ENABLED:
            return "ENABLED";
          case InstanceAccessControlAttributeConfigurationStatus::CREATION_IN_PROGRESS:
            return "CREATION_IN_PROGRESS";
          case InstanceAccessControlAttributeConfigurationStatus::CREATION_FAILED:
            return "CREATION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceAccessControlAttributeConfigurationStatusMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
