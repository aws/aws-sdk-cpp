/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SlaType.h>
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
      namespace SlaTypeMapper
      {

        static const int CaseField_HASH = HashingUtils::HashString("CaseField");


        SlaType GetSlaTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CaseField_HASH)
          {
            return SlaType::CaseField;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlaType>(hashCode);
          }

          return SlaType::NOT_SET;
        }

        Aws::String GetNameForSlaType(SlaType enumValue)
        {
          switch(enumValue)
          {
          case SlaType::NOT_SET:
            return {};
          case SlaType::CaseField:
            return "CaseField";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlaTypeMapper
    } // namespace Model
  } // namespace ConnectCases
} // namespace Aws
