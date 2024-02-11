/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/KeyFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace KeyFormatMapper
      {

        static const int pem_HASH = HashingUtils::HashString("pem");
        static const int ppk_HASH = HashingUtils::HashString("ppk");


        KeyFormat GetKeyFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pem_HASH)
          {
            return KeyFormat::pem;
          }
          else if (hashCode == ppk_HASH)
          {
            return KeyFormat::ppk;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyFormat>(hashCode);
          }

          return KeyFormat::NOT_SET;
        }

        Aws::String GetNameForKeyFormat(KeyFormat enumValue)
        {
          switch(enumValue)
          {
          case KeyFormat::NOT_SET:
            return {};
          case KeyFormat::pem:
            return "pem";
          case KeyFormat::ppk:
            return "ppk";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyFormatMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
