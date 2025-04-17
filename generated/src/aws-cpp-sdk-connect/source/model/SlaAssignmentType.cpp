/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SlaAssignmentType.h>
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
      namespace SlaAssignmentTypeMapper
      {

        static const int CASES_HASH = HashingUtils::HashString("CASES");


        SlaAssignmentType GetSlaAssignmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CASES_HASH)
          {
            return SlaAssignmentType::CASES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlaAssignmentType>(hashCode);
          }

          return SlaAssignmentType::NOT_SET;
        }

        Aws::String GetNameForSlaAssignmentType(SlaAssignmentType enumValue)
        {
          switch(enumValue)
          {
          case SlaAssignmentType::NOT_SET:
            return {};
          case SlaAssignmentType::CASES:
            return "CASES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlaAssignmentTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
