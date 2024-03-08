/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/CapabilityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace B2BI
  {
    namespace Model
    {
      namespace CapabilityTypeMapper
      {

        static const int edi_HASH = HashingUtils::HashString("edi");


        CapabilityType GetCapabilityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == edi_HASH)
          {
            return CapabilityType::edi;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapabilityType>(hashCode);
          }

          return CapabilityType::NOT_SET;
        }

        Aws::String GetNameForCapabilityType(CapabilityType enumValue)
        {
          switch(enumValue)
          {
          case CapabilityType::NOT_SET:
            return {};
          case CapabilityType::edi:
            return "edi";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapabilityTypeMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
