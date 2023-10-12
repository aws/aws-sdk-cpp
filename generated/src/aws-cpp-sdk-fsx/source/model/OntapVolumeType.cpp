/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OntapVolumeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace OntapVolumeTypeMapper
      {

        static constexpr uint32_t RW_HASH = ConstExprHashingUtils::HashString("RW");
        static constexpr uint32_t DP_HASH = ConstExprHashingUtils::HashString("DP");
        static constexpr uint32_t LS_HASH = ConstExprHashingUtils::HashString("LS");


        OntapVolumeType GetOntapVolumeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RW_HASH)
          {
            return OntapVolumeType::RW;
          }
          else if (hashCode == DP_HASH)
          {
            return OntapVolumeType::DP;
          }
          else if (hashCode == LS_HASH)
          {
            return OntapVolumeType::LS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OntapVolumeType>(hashCode);
          }

          return OntapVolumeType::NOT_SET;
        }

        Aws::String GetNameForOntapVolumeType(OntapVolumeType enumValue)
        {
          switch(enumValue)
          {
          case OntapVolumeType::NOT_SET:
            return {};
          case OntapVolumeType::RW:
            return "RW";
          case OntapVolumeType::DP:
            return "DP";
          case OntapVolumeType::LS:
            return "LS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OntapVolumeTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
