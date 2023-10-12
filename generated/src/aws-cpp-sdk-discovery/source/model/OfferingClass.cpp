/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/OfferingClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace OfferingClassMapper
      {

        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");
        static constexpr uint32_t CONVERTIBLE_HASH = ConstExprHashingUtils::HashString("CONVERTIBLE");


        OfferingClass GetOfferingClassForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return OfferingClass::STANDARD;
          }
          else if (hashCode == CONVERTIBLE_HASH)
          {
            return OfferingClass::CONVERTIBLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OfferingClass>(hashCode);
          }

          return OfferingClass::NOT_SET;
        }

        Aws::String GetNameForOfferingClass(OfferingClass enumValue)
        {
          switch(enumValue)
          {
          case OfferingClass::NOT_SET:
            return {};
          case OfferingClass::STANDARD:
            return "STANDARD";
          case OfferingClass::CONVERTIBLE:
            return "CONVERTIBLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OfferingClassMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
