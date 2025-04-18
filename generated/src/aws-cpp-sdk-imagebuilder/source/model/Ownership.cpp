﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/Ownership.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace OwnershipMapper
      {

        static const int Self_HASH = HashingUtils::HashString("Self");
        static const int Shared_HASH = HashingUtils::HashString("Shared");
        static const int Amazon_HASH = HashingUtils::HashString("Amazon");
        static const int ThirdParty_HASH = HashingUtils::HashString("ThirdParty");
        static const int AWSMarketplace_HASH = HashingUtils::HashString("AWSMarketplace");


        Ownership GetOwnershipForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Self_HASH)
          {
            return Ownership::Self;
          }
          else if (hashCode == Shared_HASH)
          {
            return Ownership::Shared;
          }
          else if (hashCode == Amazon_HASH)
          {
            return Ownership::Amazon;
          }
          else if (hashCode == ThirdParty_HASH)
          {
            return Ownership::ThirdParty;
          }
          else if (hashCode == AWSMarketplace_HASH)
          {
            return Ownership::AWSMarketplace;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ownership>(hashCode);
          }

          return Ownership::NOT_SET;
        }

        Aws::String GetNameForOwnership(Ownership enumValue)
        {
          switch(enumValue)
          {
          case Ownership::NOT_SET:
            return {};
          case Ownership::Self:
            return "Self";
          case Ownership::Shared:
            return "Shared";
          case Ownership::Amazon:
            return "Amazon";
          case Ownership::ThirdParty:
            return "ThirdParty";
          case Ownership::AWSMarketplace:
            return "AWSMarketplace";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OwnershipMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
