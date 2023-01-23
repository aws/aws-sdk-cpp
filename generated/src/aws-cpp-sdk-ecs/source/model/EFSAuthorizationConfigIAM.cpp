/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/EFSAuthorizationConfigIAM.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace EFSAuthorizationConfigIAMMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        EFSAuthorizationConfigIAM GetEFSAuthorizationConfigIAMForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return EFSAuthorizationConfigIAM::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return EFSAuthorizationConfigIAM::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EFSAuthorizationConfigIAM>(hashCode);
          }

          return EFSAuthorizationConfigIAM::NOT_SET;
        }

        Aws::String GetNameForEFSAuthorizationConfigIAM(EFSAuthorizationConfigIAM enumValue)
        {
          switch(enumValue)
          {
          case EFSAuthorizationConfigIAM::ENABLED:
            return "ENABLED";
          case EFSAuthorizationConfigIAM::DISABLED:
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

      } // namespace EFSAuthorizationConfigIAMMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
