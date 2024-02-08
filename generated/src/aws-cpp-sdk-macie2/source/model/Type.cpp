/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Type.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace TypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int AES256_HASH = HashingUtils::HashString("AES256");
        static const int aws_kms_HASH = HashingUtils::HashString("aws:kms");
        static const int aws_kms_dsse_HASH = HashingUtils::HashString("aws:kms:dsse");


        Type GetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Type::NONE;
          }
          else if (hashCode == AES256_HASH)
          {
            return Type::AES256;
          }
          else if (hashCode == aws_kms_HASH)
          {
            return Type::aws_kms;
          }
          else if (hashCode == aws_kms_dsse_HASH)
          {
            return Type::aws_kms_dsse;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Type>(hashCode);
          }

          return Type::NOT_SET;
        }

        Aws::String GetNameForType(Type enumValue)
        {
          switch(enumValue)
          {
          case Type::NOT_SET:
            return {};
          case Type::NONE:
            return "NONE";
          case Type::AES256:
            return "AES256";
          case Type::aws_kms:
            return "aws:kms";
          case Type::aws_kms_dsse:
            return "aws:kms:dsse";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
