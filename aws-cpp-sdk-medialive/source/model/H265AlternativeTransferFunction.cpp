/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265AlternativeTransferFunction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace H265AlternativeTransferFunctionMapper
      {

        static const int INSERT_HASH = HashingUtils::HashString("INSERT");
        static const int OMIT_HASH = HashingUtils::HashString("OMIT");


        H265AlternativeTransferFunction GetH265AlternativeTransferFunctionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSERT_HASH)
          {
            return H265AlternativeTransferFunction::INSERT;
          }
          else if (hashCode == OMIT_HASH)
          {
            return H265AlternativeTransferFunction::OMIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265AlternativeTransferFunction>(hashCode);
          }

          return H265AlternativeTransferFunction::NOT_SET;
        }

        Aws::String GetNameForH265AlternativeTransferFunction(H265AlternativeTransferFunction enumValue)
        {
          switch(enumValue)
          {
          case H265AlternativeTransferFunction::INSERT:
            return "INSERT";
          case H265AlternativeTransferFunction::OMIT:
            return "OMIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265AlternativeTransferFunctionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
