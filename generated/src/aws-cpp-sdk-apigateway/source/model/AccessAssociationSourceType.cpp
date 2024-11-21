/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/AccessAssociationSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace AccessAssociationSourceTypeMapper
      {

        static const int VPCE_HASH = HashingUtils::HashString("VPCE");


        AccessAssociationSourceType GetAccessAssociationSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VPCE_HASH)
          {
            return AccessAssociationSourceType::VPCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessAssociationSourceType>(hashCode);
          }

          return AccessAssociationSourceType::NOT_SET;
        }

        Aws::String GetNameForAccessAssociationSourceType(AccessAssociationSourceType enumValue)
        {
          switch(enumValue)
          {
          case AccessAssociationSourceType::NOT_SET:
            return {};
          case AccessAssociationSourceType::VPCE:
            return "VPCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessAssociationSourceTypeMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
