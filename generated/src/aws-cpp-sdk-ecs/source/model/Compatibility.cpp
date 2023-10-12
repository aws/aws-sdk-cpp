/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Compatibility.h>
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
      namespace CompatibilityMapper
      {

        static constexpr uint32_t EC2_HASH = ConstExprHashingUtils::HashString("EC2");
        static constexpr uint32_t FARGATE_HASH = ConstExprHashingUtils::HashString("FARGATE");
        static constexpr uint32_t EXTERNAL_HASH = ConstExprHashingUtils::HashString("EXTERNAL");


        Compatibility GetCompatibilityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_HASH)
          {
            return Compatibility::EC2;
          }
          else if (hashCode == FARGATE_HASH)
          {
            return Compatibility::FARGATE;
          }
          else if (hashCode == EXTERNAL_HASH)
          {
            return Compatibility::EXTERNAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Compatibility>(hashCode);
          }

          return Compatibility::NOT_SET;
        }

        Aws::String GetNameForCompatibility(Compatibility enumValue)
        {
          switch(enumValue)
          {
          case Compatibility::NOT_SET:
            return {};
          case Compatibility::EC2:
            return "EC2";
          case Compatibility::FARGATE:
            return "FARGATE";
          case Compatibility::EXTERNAL:
            return "EXTERNAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompatibilityMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
