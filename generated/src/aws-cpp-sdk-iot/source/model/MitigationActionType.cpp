/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/MitigationActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace MitigationActionTypeMapper
      {

        static const int UPDATE_DEVICE_CERTIFICATE_HASH = HashingUtils::HashString("UPDATE_DEVICE_CERTIFICATE");
        static const int UPDATE_CA_CERTIFICATE_HASH = HashingUtils::HashString("UPDATE_CA_CERTIFICATE");
        static const int ADD_THINGS_TO_THING_GROUP_HASH = HashingUtils::HashString("ADD_THINGS_TO_THING_GROUP");
        static const int REPLACE_DEFAULT_POLICY_VERSION_HASH = HashingUtils::HashString("REPLACE_DEFAULT_POLICY_VERSION");
        static const int ENABLE_IOT_LOGGING_HASH = HashingUtils::HashString("ENABLE_IOT_LOGGING");
        static const int PUBLISH_FINDING_TO_SNS_HASH = HashingUtils::HashString("PUBLISH_FINDING_TO_SNS");


        MitigationActionType GetMitigationActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATE_DEVICE_CERTIFICATE_HASH)
          {
            return MitigationActionType::UPDATE_DEVICE_CERTIFICATE;
          }
          else if (hashCode == UPDATE_CA_CERTIFICATE_HASH)
          {
            return MitigationActionType::UPDATE_CA_CERTIFICATE;
          }
          else if (hashCode == ADD_THINGS_TO_THING_GROUP_HASH)
          {
            return MitigationActionType::ADD_THINGS_TO_THING_GROUP;
          }
          else if (hashCode == REPLACE_DEFAULT_POLICY_VERSION_HASH)
          {
            return MitigationActionType::REPLACE_DEFAULT_POLICY_VERSION;
          }
          else if (hashCode == ENABLE_IOT_LOGGING_HASH)
          {
            return MitigationActionType::ENABLE_IOT_LOGGING;
          }
          else if (hashCode == PUBLISH_FINDING_TO_SNS_HASH)
          {
            return MitigationActionType::PUBLISH_FINDING_TO_SNS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MitigationActionType>(hashCode);
          }

          return MitigationActionType::NOT_SET;
        }

        Aws::String GetNameForMitigationActionType(MitigationActionType enumValue)
        {
          switch(enumValue)
          {
          case MitigationActionType::UPDATE_DEVICE_CERTIFICATE:
            return "UPDATE_DEVICE_CERTIFICATE";
          case MitigationActionType::UPDATE_CA_CERTIFICATE:
            return "UPDATE_CA_CERTIFICATE";
          case MitigationActionType::ADD_THINGS_TO_THING_GROUP:
            return "ADD_THINGS_TO_THING_GROUP";
          case MitigationActionType::REPLACE_DEFAULT_POLICY_VERSION:
            return "REPLACE_DEFAULT_POLICY_VERSION";
          case MitigationActionType::ENABLE_IOT_LOGGING:
            return "ENABLE_IOT_LOGGING";
          case MitigationActionType::PUBLISH_FINDING_TO_SNS:
            return "PUBLISH_FINDING_TO_SNS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MitigationActionTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
