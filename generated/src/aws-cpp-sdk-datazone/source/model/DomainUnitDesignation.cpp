/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DomainUnitDesignation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace DomainUnitDesignationMapper
      {

        static const int OWNER_HASH = HashingUtils::HashString("OWNER");


        DomainUnitDesignation GetDomainUnitDesignationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OWNER_HASH)
          {
            return DomainUnitDesignation::OWNER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainUnitDesignation>(hashCode);
          }

          return DomainUnitDesignation::NOT_SET;
        }

        Aws::String GetNameForDomainUnitDesignation(DomainUnitDesignation enumValue)
        {
          switch(enumValue)
          {
          case DomainUnitDesignation::NOT_SET:
            return {};
          case DomainUnitDesignation::OWNER:
            return "OWNER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainUnitDesignationMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
