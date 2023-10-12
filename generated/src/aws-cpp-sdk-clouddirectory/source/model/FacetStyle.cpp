/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/FacetStyle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudDirectory
  {
    namespace Model
    {
      namespace FacetStyleMapper
      {

        static constexpr uint32_t STATIC__HASH = ConstExprHashingUtils::HashString("STATIC");
        static constexpr uint32_t DYNAMIC_HASH = ConstExprHashingUtils::HashString("DYNAMIC");


        FacetStyle GetFacetStyleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATIC__HASH)
          {
            return FacetStyle::STATIC_;
          }
          else if (hashCode == DYNAMIC_HASH)
          {
            return FacetStyle::DYNAMIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FacetStyle>(hashCode);
          }

          return FacetStyle::NOT_SET;
        }

        Aws::String GetNameForFacetStyle(FacetStyle enumValue)
        {
          switch(enumValue)
          {
          case FacetStyle::NOT_SET:
            return {};
          case FacetStyle::STATIC_:
            return "STATIC";
          case FacetStyle::DYNAMIC:
            return "DYNAMIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FacetStyleMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
