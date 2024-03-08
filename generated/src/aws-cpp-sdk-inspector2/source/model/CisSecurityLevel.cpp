/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisSecurityLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace CisSecurityLevelMapper
      {

        static const int LEVEL_1_HASH = HashingUtils::HashString("LEVEL_1");
        static const int LEVEL_2_HASH = HashingUtils::HashString("LEVEL_2");


        CisSecurityLevel GetCisSecurityLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEVEL_1_HASH)
          {
            return CisSecurityLevel::LEVEL_1;
          }
          else if (hashCode == LEVEL_2_HASH)
          {
            return CisSecurityLevel::LEVEL_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisSecurityLevel>(hashCode);
          }

          return CisSecurityLevel::NOT_SET;
        }

        Aws::String GetNameForCisSecurityLevel(CisSecurityLevel enumValue)
        {
          switch(enumValue)
          {
          case CisSecurityLevel::NOT_SET:
            return {};
          case CisSecurityLevel::LEVEL_1:
            return "LEVEL_1";
          case CisSecurityLevel::LEVEL_2:
            return "LEVEL_2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CisSecurityLevelMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
