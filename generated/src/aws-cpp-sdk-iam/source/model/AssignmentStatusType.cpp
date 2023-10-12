/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/AssignmentStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IAM
  {
    namespace Model
    {
      namespace AssignmentStatusTypeMapper
      {

        static constexpr uint32_t Assigned_HASH = ConstExprHashingUtils::HashString("Assigned");
        static constexpr uint32_t Unassigned_HASH = ConstExprHashingUtils::HashString("Unassigned");
        static constexpr uint32_t Any_HASH = ConstExprHashingUtils::HashString("Any");


        AssignmentStatusType GetAssignmentStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Assigned_HASH)
          {
            return AssignmentStatusType::Assigned;
          }
          else if (hashCode == Unassigned_HASH)
          {
            return AssignmentStatusType::Unassigned;
          }
          else if (hashCode == Any_HASH)
          {
            return AssignmentStatusType::Any;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssignmentStatusType>(hashCode);
          }

          return AssignmentStatusType::NOT_SET;
        }

        Aws::String GetNameForAssignmentStatusType(AssignmentStatusType enumValue)
        {
          switch(enumValue)
          {
          case AssignmentStatusType::NOT_SET:
            return {};
          case AssignmentStatusType::Assigned:
            return "Assigned";
          case AssignmentStatusType::Unassigned:
            return "Unassigned";
          case AssignmentStatusType::Any:
            return "Any";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssignmentStatusTypeMapper
    } // namespace Model
  } // namespace IAM
} // namespace Aws
