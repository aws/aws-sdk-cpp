/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectParticipant
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int CONTACT_HASH = HashingUtils::HashString("CONTACT");
        static const int CONTACT_FLOW_HASH = HashingUtils::HashString("CONTACT_FLOW");
        static const int INSTANCE_HASH = HashingUtils::HashString("INSTANCE");
        static const int PARTICIPANT_HASH = HashingUtils::HashString("PARTICIPANT");
        static const int HIERARCHY_LEVEL_HASH = HashingUtils::HashString("HIERARCHY_LEVEL");
        static const int HIERARCHY_GROUP_HASH = HashingUtils::HashString("HIERARCHY_GROUP");
        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int PHONE_NUMBER_HASH = HashingUtils::HashString("PHONE_NUMBER");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTACT_HASH)
          {
            return ResourceType::CONTACT;
          }
          else if (hashCode == CONTACT_FLOW_HASH)
          {
            return ResourceType::CONTACT_FLOW;
          }
          else if (hashCode == INSTANCE_HASH)
          {
            return ResourceType::INSTANCE;
          }
          else if (hashCode == PARTICIPANT_HASH)
          {
            return ResourceType::PARTICIPANT;
          }
          else if (hashCode == HIERARCHY_LEVEL_HASH)
          {
            return ResourceType::HIERARCHY_LEVEL;
          }
          else if (hashCode == HIERARCHY_GROUP_HASH)
          {
            return ResourceType::HIERARCHY_GROUP;
          }
          else if (hashCode == USER_HASH)
          {
            return ResourceType::USER;
          }
          else if (hashCode == PHONE_NUMBER_HASH)
          {
            return ResourceType::PHONE_NUMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::NOT_SET:
            return {};
          case ResourceType::CONTACT:
            return "CONTACT";
          case ResourceType::CONTACT_FLOW:
            return "CONTACT_FLOW";
          case ResourceType::INSTANCE:
            return "INSTANCE";
          case ResourceType::PARTICIPANT:
            return "PARTICIPANT";
          case ResourceType::HIERARCHY_LEVEL:
            return "HIERARCHY_LEVEL";
          case ResourceType::HIERARCHY_GROUP:
            return "HIERARCHY_GROUP";
          case ResourceType::USER:
            return "USER";
          case ResourceType::PHONE_NUMBER:
            return "PHONE_NUMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace ConnectParticipant
} // namespace Aws
