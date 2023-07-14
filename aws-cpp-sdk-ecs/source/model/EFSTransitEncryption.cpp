/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/EFSTransitEncryption.h>
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
      namespace EFSTransitEncryptionMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        EFSTransitEncryption GetEFSTransitEncryptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return EFSTransitEncryption::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return EFSTransitEncryption::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EFSTransitEncryption>(hashCode);
          }

          return EFSTransitEncryption::NOT_SET;
        }

        Aws::String GetNameForEFSTransitEncryption(EFSTransitEncryption enumValue)
        {
          switch(enumValue)
          {
          case EFSTransitEncryption::ENABLED:
            return "ENABLED";
          case EFSTransitEncryption::DISABLED:
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

      } // namespace EFSTransitEncryptionMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
