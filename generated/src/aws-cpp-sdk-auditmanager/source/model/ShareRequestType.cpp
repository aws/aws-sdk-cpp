/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ShareRequestType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace ShareRequestTypeMapper
      {

        static constexpr uint32_t SENT_HASH = ConstExprHashingUtils::HashString("SENT");
        static constexpr uint32_t RECEIVED_HASH = ConstExprHashingUtils::HashString("RECEIVED");


        ShareRequestType GetShareRequestTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SENT_HASH)
          {
            return ShareRequestType::SENT;
          }
          else if (hashCode == RECEIVED_HASH)
          {
            return ShareRequestType::RECEIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareRequestType>(hashCode);
          }

          return ShareRequestType::NOT_SET;
        }

        Aws::String GetNameForShareRequestType(ShareRequestType enumValue)
        {
          switch(enumValue)
          {
          case ShareRequestType::NOT_SET:
            return {};
          case ShareRequestType::SENT:
            return "SENT";
          case ShareRequestType::RECEIVED:
            return "RECEIVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareRequestTypeMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
