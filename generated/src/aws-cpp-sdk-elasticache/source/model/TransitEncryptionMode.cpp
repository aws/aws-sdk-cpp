/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/TransitEncryptionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace TransitEncryptionModeMapper
      {

        static const int preferred_HASH = HashingUtils::HashString("preferred");
        static const int required_HASH = HashingUtils::HashString("required");


        TransitEncryptionMode GetTransitEncryptionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == preferred_HASH)
          {
            return TransitEncryptionMode::preferred;
          }
          else if (hashCode == required_HASH)
          {
            return TransitEncryptionMode::required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitEncryptionMode>(hashCode);
          }

          return TransitEncryptionMode::NOT_SET;
        }

        Aws::String GetNameForTransitEncryptionMode(TransitEncryptionMode enumValue)
        {
          switch(enumValue)
          {
          case TransitEncryptionMode::NOT_SET:
            return {};
          case TransitEncryptionMode::preferred:
            return "preferred";
          case TransitEncryptionMode::required:
            return "required";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitEncryptionModeMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
