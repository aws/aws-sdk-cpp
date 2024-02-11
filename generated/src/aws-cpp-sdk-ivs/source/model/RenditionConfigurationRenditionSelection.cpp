/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/RenditionConfigurationRenditionSelection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IVS
  {
    namespace Model
    {
      namespace RenditionConfigurationRenditionSelectionMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        RenditionConfigurationRenditionSelection GetRenditionConfigurationRenditionSelectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return RenditionConfigurationRenditionSelection::ALL;
          }
          else if (hashCode == NONE_HASH)
          {
            return RenditionConfigurationRenditionSelection::NONE;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return RenditionConfigurationRenditionSelection::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RenditionConfigurationRenditionSelection>(hashCode);
          }

          return RenditionConfigurationRenditionSelection::NOT_SET;
        }

        Aws::String GetNameForRenditionConfigurationRenditionSelection(RenditionConfigurationRenditionSelection enumValue)
        {
          switch(enumValue)
          {
          case RenditionConfigurationRenditionSelection::NOT_SET:
            return {};
          case RenditionConfigurationRenditionSelection::ALL:
            return "ALL";
          case RenditionConfigurationRenditionSelection::NONE:
            return "NONE";
          case RenditionConfigurationRenditionSelection::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RenditionConfigurationRenditionSelectionMapper
    } // namespace Model
  } // namespace IVS
} // namespace Aws
