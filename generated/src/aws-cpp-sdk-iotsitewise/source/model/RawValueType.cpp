/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/RawValueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace RawValueTypeMapper
      {

        static const int D_HASH = HashingUtils::HashString("D");
        static const int B_HASH = HashingUtils::HashString("B");
        static const int S_HASH = HashingUtils::HashString("S");
        static const int I_HASH = HashingUtils::HashString("I");
        static const int U_HASH = HashingUtils::HashString("U");


        RawValueType GetRawValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == D_HASH)
          {
            return RawValueType::D;
          }
          else if (hashCode == B_HASH)
          {
            return RawValueType::B;
          }
          else if (hashCode == S_HASH)
          {
            return RawValueType::S;
          }
          else if (hashCode == I_HASH)
          {
            return RawValueType::I;
          }
          else if (hashCode == U_HASH)
          {
            return RawValueType::U;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RawValueType>(hashCode);
          }

          return RawValueType::NOT_SET;
        }

        Aws::String GetNameForRawValueType(RawValueType enumValue)
        {
          switch(enumValue)
          {
          case RawValueType::NOT_SET:
            return {};
          case RawValueType::D:
            return "D";
          case RawValueType::B:
            return "B";
          case RawValueType::S:
            return "S";
          case RawValueType::I:
            return "I";
          case RawValueType::U:
            return "U";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RawValueTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
