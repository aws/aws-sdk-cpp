/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/EgressFilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace EgressFilterTypeMapper
      {

        static const int ALLOW_ALL_HASH = HashingUtils::HashString("ALLOW_ALL");
        static const int DROP_ALL_HASH = HashingUtils::HashString("DROP_ALL");


        EgressFilterType GetEgressFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_ALL_HASH)
          {
            return EgressFilterType::ALLOW_ALL;
          }
          else if (hashCode == DROP_ALL_HASH)
          {
            return EgressFilterType::DROP_ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EgressFilterType>(hashCode);
          }

          return EgressFilterType::NOT_SET;
        }

        Aws::String GetNameForEgressFilterType(EgressFilterType enumValue)
        {
          switch(enumValue)
          {
          case EgressFilterType::ALLOW_ALL:
            return "ALLOW_ALL";
          case EgressFilterType::DROP_ALL:
            return "DROP_ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EgressFilterTypeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
