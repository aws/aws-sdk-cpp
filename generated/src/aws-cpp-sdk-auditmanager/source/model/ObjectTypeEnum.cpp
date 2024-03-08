/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ObjectTypeEnum.h>
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
      namespace ObjectTypeEnumMapper
      {

        static const int ASSESSMENT_HASH = HashingUtils::HashString("ASSESSMENT");
        static const int CONTROL_SET_HASH = HashingUtils::HashString("CONTROL_SET");
        static const int CONTROL_HASH = HashingUtils::HashString("CONTROL");
        static const int DELEGATION_HASH = HashingUtils::HashString("DELEGATION");
        static const int ASSESSMENT_REPORT_HASH = HashingUtils::HashString("ASSESSMENT_REPORT");


        ObjectTypeEnum GetObjectTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSESSMENT_HASH)
          {
            return ObjectTypeEnum::ASSESSMENT;
          }
          else if (hashCode == CONTROL_SET_HASH)
          {
            return ObjectTypeEnum::CONTROL_SET;
          }
          else if (hashCode == CONTROL_HASH)
          {
            return ObjectTypeEnum::CONTROL;
          }
          else if (hashCode == DELEGATION_HASH)
          {
            return ObjectTypeEnum::DELEGATION;
          }
          else if (hashCode == ASSESSMENT_REPORT_HASH)
          {
            return ObjectTypeEnum::ASSESSMENT_REPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectTypeEnum>(hashCode);
          }

          return ObjectTypeEnum::NOT_SET;
        }

        Aws::String GetNameForObjectTypeEnum(ObjectTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case ObjectTypeEnum::NOT_SET:
            return {};
          case ObjectTypeEnum::ASSESSMENT:
            return "ASSESSMENT";
          case ObjectTypeEnum::CONTROL_SET:
            return "CONTROL_SET";
          case ObjectTypeEnum::CONTROL:
            return "CONTROL";
          case ObjectTypeEnum::DELEGATION:
            return "DELEGATION";
          case ObjectTypeEnum::ASSESSMENT_REPORT:
            return "ASSESSMENT_REPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectTypeEnumMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
