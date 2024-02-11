/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/SnaplockType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace SnaplockTypeMapper
      {

        static const int COMPLIANCE_HASH = HashingUtils::HashString("COMPLIANCE");
        static const int ENTERPRISE_HASH = HashingUtils::HashString("ENTERPRISE");


        SnaplockType GetSnaplockTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLIANCE_HASH)
          {
            return SnaplockType::COMPLIANCE;
          }
          else if (hashCode == ENTERPRISE_HASH)
          {
            return SnaplockType::ENTERPRISE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnaplockType>(hashCode);
          }

          return SnaplockType::NOT_SET;
        }

        Aws::String GetNameForSnaplockType(SnaplockType enumValue)
        {
          switch(enumValue)
          {
          case SnaplockType::NOT_SET:
            return {};
          case SnaplockType::COMPLIANCE:
            return "COMPLIANCE";
          case SnaplockType::ENTERPRISE:
            return "ENTERPRISE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnaplockTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
