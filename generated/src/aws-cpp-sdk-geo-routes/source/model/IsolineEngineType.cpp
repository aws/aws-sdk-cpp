/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineEngineType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoRoutes
  {
    namespace Model
    {
      namespace IsolineEngineTypeMapper
      {

        static const int Electric_HASH = HashingUtils::HashString("Electric");
        static const int InternalCombustion_HASH = HashingUtils::HashString("InternalCombustion");
        static const int PluginHybrid_HASH = HashingUtils::HashString("PluginHybrid");


        IsolineEngineType GetIsolineEngineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Electric_HASH)
          {
            return IsolineEngineType::Electric;
          }
          else if (hashCode == InternalCombustion_HASH)
          {
            return IsolineEngineType::InternalCombustion;
          }
          else if (hashCode == PluginHybrid_HASH)
          {
            return IsolineEngineType::PluginHybrid;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IsolineEngineType>(hashCode);
          }

          return IsolineEngineType::NOT_SET;
        }

        Aws::String GetNameForIsolineEngineType(IsolineEngineType enumValue)
        {
          switch(enumValue)
          {
          case IsolineEngineType::NOT_SET:
            return {};
          case IsolineEngineType::Electric:
            return "Electric";
          case IsolineEngineType::InternalCombustion:
            return "InternalCombustion";
          case IsolineEngineType::PluginHybrid:
            return "PluginHybrid";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IsolineEngineTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
