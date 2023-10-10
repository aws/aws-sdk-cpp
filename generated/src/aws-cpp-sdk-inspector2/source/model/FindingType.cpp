/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FindingType.h>
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
      namespace FindingTypeMapper
      {

        static const int NETWORK_REACHABILITY_HASH = HashingUtils::HashString("NETWORK_REACHABILITY");
        static const int PACKAGE_VULNERABILITY_HASH = HashingUtils::HashString("PACKAGE_VULNERABILITY");
        static const int CODE_VULNERABILITY_HASH = HashingUtils::HashString("CODE_VULNERABILITY");


        FindingType GetFindingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NETWORK_REACHABILITY_HASH)
          {
            return FindingType::NETWORK_REACHABILITY;
          }
          else if (hashCode == PACKAGE_VULNERABILITY_HASH)
          {
            return FindingType::PACKAGE_VULNERABILITY;
          }
          else if (hashCode == CODE_VULNERABILITY_HASH)
          {
            return FindingType::CODE_VULNERABILITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingType>(hashCode);
          }

          return FindingType::NOT_SET;
        }

        Aws::String GetNameForFindingType(FindingType enumValue)
        {
          switch(enumValue)
          {
          case FindingType::NOT_SET:
            return {};
          case FindingType::NETWORK_REACHABILITY:
            return "NETWORK_REACHABILITY";
          case FindingType::PACKAGE_VULNERABILITY:
            return "PACKAGE_VULNERABILITY";
          case FindingType::CODE_VULNERABILITY:
            return "CODE_VULNERABILITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingTypeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
