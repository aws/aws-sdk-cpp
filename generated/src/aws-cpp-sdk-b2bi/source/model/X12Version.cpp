/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12Version.h>
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
      namespace X12VersionMapper
      {

        static const int VERSION_4010_HASH = HashingUtils::HashString("VERSION_4010");
        static const int VERSION_4030_HASH = HashingUtils::HashString("VERSION_4030");
        static const int VERSION_5010_HASH = HashingUtils::HashString("VERSION_5010");


        X12Version GetX12VersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VERSION_4010_HASH)
          {
            return X12Version::VERSION_4010;
          }
          else if (hashCode == VERSION_4030_HASH)
          {
            return X12Version::VERSION_4030;
          }
          else if (hashCode == VERSION_5010_HASH)
          {
            return X12Version::VERSION_5010;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<X12Version>(hashCode);
          }

          return X12Version::NOT_SET;
        }

        Aws::String GetNameForX12Version(X12Version enumValue)
        {
          switch(enumValue)
          {
          case X12Version::NOT_SET:
            return {};
          case X12Version::VERSION_4010:
            return "VERSION_4010";
          case X12Version::VERSION_4030:
            return "VERSION_4030";
          case X12Version::VERSION_5010:
            return "VERSION_5010";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace X12VersionMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
