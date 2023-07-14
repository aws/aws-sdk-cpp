/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmfcScte35Esam.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace CmfcScte35EsamMapper
      {

        static const int INSERT_HASH = HashingUtils::HashString("INSERT");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        CmfcScte35Esam GetCmfcScte35EsamForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSERT_HASH)
          {
            return CmfcScte35Esam::INSERT;
          }
          else if (hashCode == NONE_HASH)
          {
            return CmfcScte35Esam::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmfcScte35Esam>(hashCode);
          }

          return CmfcScte35Esam::NOT_SET;
        }

        Aws::String GetNameForCmfcScte35Esam(CmfcScte35Esam enumValue)
        {
          switch(enumValue)
          {
          case CmfcScte35Esam::INSERT:
            return "INSERT";
          case CmfcScte35Esam::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmfcScte35EsamMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
