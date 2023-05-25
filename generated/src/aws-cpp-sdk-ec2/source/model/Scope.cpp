/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Scope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ScopeMapper
      {

        static const int Availability_Zone_HASH = HashingUtils::HashString("Availability Zone");
        static const int Region_HASH = HashingUtils::HashString("Region");


        Scope GetScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Availability_Zone_HASH)
          {
            return Scope::Availability_Zone;
          }
          else if (hashCode == Region_HASH)
          {
            return Scope::Region;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scope>(hashCode);
          }

          return Scope::NOT_SET;
        }

        Aws::String GetNameForScope(Scope enumValue)
        {
          switch(enumValue)
          {
          case Scope::Availability_Zone:
            return "Availability Zone";
          case Scope::Region:
            return "Region";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScopeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
