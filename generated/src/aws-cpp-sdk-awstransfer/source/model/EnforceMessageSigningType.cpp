/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/EnforceMessageSigningType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace EnforceMessageSigningTypeMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        EnforceMessageSigningType GetEnforceMessageSigningTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return EnforceMessageSigningType::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return EnforceMessageSigningType::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnforceMessageSigningType>(hashCode);
          }

          return EnforceMessageSigningType::NOT_SET;
        }

        Aws::String GetNameForEnforceMessageSigningType(EnforceMessageSigningType enumValue)
        {
          switch(enumValue)
          {
          case EnforceMessageSigningType::NOT_SET:
            return {};
          case EnforceMessageSigningType::ENABLED:
            return "ENABLED";
          case EnforceMessageSigningType::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnforceMessageSigningTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
