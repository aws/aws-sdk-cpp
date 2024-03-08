/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/AuditEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCases
  {
    namespace Model
    {
      namespace AuditEventTypeMapper
      {

        static const int Case_Created_HASH = HashingUtils::HashString("Case.Created");
        static const int Case_Updated_HASH = HashingUtils::HashString("Case.Updated");
        static const int RelatedItem_Created_HASH = HashingUtils::HashString("RelatedItem.Created");


        AuditEventType GetAuditEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Case_Created_HASH)
          {
            return AuditEventType::Case_Created;
          }
          else if (hashCode == Case_Updated_HASH)
          {
            return AuditEventType::Case_Updated;
          }
          else if (hashCode == RelatedItem_Created_HASH)
          {
            return AuditEventType::RelatedItem_Created;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditEventType>(hashCode);
          }

          return AuditEventType::NOT_SET;
        }

        Aws::String GetNameForAuditEventType(AuditEventType enumValue)
        {
          switch(enumValue)
          {
          case AuditEventType::NOT_SET:
            return {};
          case AuditEventType::Case_Created:
            return "Case.Created";
          case AuditEventType::Case_Updated:
            return "Case.Updated";
          case AuditEventType::RelatedItem_Created:
            return "RelatedItem.Created";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuditEventTypeMapper
    } // namespace Model
  } // namespace ConnectCases
} // namespace Aws
