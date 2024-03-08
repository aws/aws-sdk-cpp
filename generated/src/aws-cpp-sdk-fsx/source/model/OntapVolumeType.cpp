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

        static const int RW_HASH = HashingUtils::HashString("RW");
        static const int DP_HASH = HashingUtils::HashString("DP");
        static const int LS_HASH = HashingUtils::HashString("LS");


        OntapVolumeType GetOntapVolumeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
