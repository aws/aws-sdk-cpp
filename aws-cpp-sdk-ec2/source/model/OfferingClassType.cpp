/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/OfferingClassType.h>
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
      namespace OfferingClassTypeMapper
      {

        static const int standard_HASH = HashingUtils::HashString("standard");
        static const int convertible_HASH = HashingUtils::HashString("convertible");


        OfferingClassType GetOfferingClassTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == standard_HASH)
          {
            return OfferingClassType::standard;
          }
          else if (hashCode == convertible_HASH)
          {
            return OfferingClassType::convertible;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OfferingClassType>(hashCode);
          }

          return OfferingClassType::NOT_SET;
        }

        Aws::String GetNameForOfferingClassType(OfferingClassType enumValue)
        {
          switch(enumValue)
          {
          case OfferingClassType::standard:
            return "standard";
          case OfferingClassType::convertible:
            return "convertible";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OfferingClassTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
