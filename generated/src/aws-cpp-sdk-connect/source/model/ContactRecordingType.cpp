/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactRecordingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace ContactRecordingTypeMapper
      {

        static const int AGENT_HASH = HashingUtils::HashString("AGENT");
        static const int IVR_HASH = HashingUtils::HashString("IVR");
        static const int SCREEN_HASH = HashingUtils::HashString("SCREEN");


        ContactRecordingType GetContactRecordingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGENT_HASH)
          {
            return ContactRecordingType::AGENT;
          }
          else if (hashCode == IVR_HASH)
          {
            return ContactRecordingType::IVR;
          }
          else if (hashCode == SCREEN_HASH)
          {
            return ContactRecordingType::SCREEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactRecordingType>(hashCode);
          }

          return ContactRecordingType::NOT_SET;
        }

        Aws::String GetNameForContactRecordingType(ContactRecordingType enumValue)
        {
          switch(enumValue)
          {
          case ContactRecordingType::NOT_SET:
            return {};
          case ContactRecordingType::AGENT:
            return "AGENT";
          case ContactRecordingType::IVR:
            return "IVR";
          case ContactRecordingType::SCREEN:
            return "SCREEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactRecordingTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
