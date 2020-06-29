/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/TrustType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace TrustTypeMapper
      {

        static const int Forest_HASH = HashingUtils::HashString("Forest");
        static const int External_HASH = HashingUtils::HashString("External");


        TrustType GetTrustTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Forest_HASH)
          {
            return TrustType::Forest;
          }
          else if (hashCode == External_HASH)
          {
            return TrustType::External;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrustType>(hashCode);
          }

          return TrustType::NOT_SET;
        }

        Aws::String GetNameForTrustType(TrustType enumValue)
        {
          switch(enumValue)
          {
          case TrustType::Forest:
            return "Forest";
          case TrustType::External:
            return "External";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrustTypeMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
