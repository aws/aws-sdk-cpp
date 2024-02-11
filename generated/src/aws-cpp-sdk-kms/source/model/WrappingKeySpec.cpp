/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/WrappingKeySpec.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace WrappingKeySpecMapper
      {

        static const int RSA_2048_HASH = HashingUtils::HashString("RSA_2048");
        static const int RSA_3072_HASH = HashingUtils::HashString("RSA_3072");
        static const int RSA_4096_HASH = HashingUtils::HashString("RSA_4096");


        WrappingKeySpec GetWrappingKeySpecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RSA_2048_HASH)
          {
            return WrappingKeySpec::RSA_2048;
          }
          else if (hashCode == RSA_3072_HASH)
          {
            return WrappingKeySpec::RSA_3072;
          }
          else if (hashCode == RSA_4096_HASH)
          {
            return WrappingKeySpec::RSA_4096;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WrappingKeySpec>(hashCode);
          }

          return WrappingKeySpec::NOT_SET;
        }

        Aws::String GetNameForWrappingKeySpec(WrappingKeySpec enumValue)
        {
          switch(enumValue)
          {
          case WrappingKeySpec::NOT_SET:
            return {};
          case WrappingKeySpec::RSA_2048:
            return "RSA_2048";
          case WrappingKeySpec::RSA_3072:
            return "RSA_3072";
          case WrappingKeySpec::RSA_4096:
            return "RSA_4096";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WrappingKeySpecMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
