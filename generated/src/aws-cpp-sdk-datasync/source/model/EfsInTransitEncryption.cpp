/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/EfsInTransitEncryption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace EfsInTransitEncryptionMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int TLS1_2_HASH = HashingUtils::HashString("TLS1_2");


        EfsInTransitEncryption GetEfsInTransitEncryptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return EfsInTransitEncryption::NONE;
          }
          else if (hashCode == TLS1_2_HASH)
          {
            return EfsInTransitEncryption::TLS1_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EfsInTransitEncryption>(hashCode);
          }

          return EfsInTransitEncryption::NOT_SET;
        }

        Aws::String GetNameForEfsInTransitEncryption(EfsInTransitEncryption enumValue)
        {
          switch(enumValue)
          {
          case EfsInTransitEncryption::NOT_SET:
            return {};
          case EfsInTransitEncryption::NONE:
            return "NONE";
          case EfsInTransitEncryption::TLS1_2:
            return "TLS1_2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EfsInTransitEncryptionMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
