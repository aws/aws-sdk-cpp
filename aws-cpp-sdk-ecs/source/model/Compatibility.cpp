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

        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int FARGATE_HASH = HashingUtils::HashString("FARGATE");


        Compatibility GetCompatibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_HASH)
          {
            return Compatibility::EC2;
          }
          else if (hashCode == FARGATE_HASH)
          {
            return Compatibility::FARGATE;
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
          case Compatibility::EC2:
            return "EC2";
          case Compatibility::FARGATE:
            return "FARGATE";
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
