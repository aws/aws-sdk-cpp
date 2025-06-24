/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/MessageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace MessageTypeMapper
      {

        static const int RAW_HASH = HashingUtils::HashString("RAW");
        static const int DIGEST_HASH = HashingUtils::HashString("DIGEST");
        static const int EXTERNAL_MU_HASH = HashingUtils::HashString("EXTERNAL_MU");


        MessageType GetMessageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RAW_HASH)
          {
            return MessageType::RAW;
          }
          else if (hashCode == DIGEST_HASH)
          {
            return MessageType::DIGEST;
          }
          else if (hashCode == EXTERNAL_MU_HASH)
          {
            return MessageType::EXTERNAL_MU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageType>(hashCode);
          }

          return MessageType::NOT_SET;
        }

        Aws::String GetNameForMessageType(MessageType enumValue)
        {
          switch(enumValue)
          {
          case MessageType::NOT_SET:
            return {};
          case MessageType::RAW:
            return "RAW";
          case MessageType::DIGEST:
            return "DIGEST";
          case MessageType::EXTERNAL_MU:
            return "EXTERNAL_MU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageTypeMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
