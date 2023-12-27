/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/EgressType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace EgressTypeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int VPC_HASH = HashingUtils::HashString("VPC");


        EgressType GetEgressTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return EgressType::DEFAULT;
          }
          else if (hashCode == VPC_HASH)
          {
            return EgressType::VPC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EgressType>(hashCode);
          }

          return EgressType::NOT_SET;
        }

        Aws::String GetNameForEgressType(EgressType enumValue)
        {
          switch(enumValue)
          {
          case EgressType::NOT_SET:
            return {};
          case EgressType::DEFAULT:
            return "DEFAULT";
          case EgressType::VPC:
            return "VPC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EgressTypeMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
