/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/AssertionEncryptionModeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IAM
  {
    namespace Model
    {
      namespace AssertionEncryptionModeTypeMapper
      {

        static const int Required_HASH = HashingUtils::HashString("Required");
        static const int Allowed_HASH = HashingUtils::HashString("Allowed");


        AssertionEncryptionModeType GetAssertionEncryptionModeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Required_HASH)
          {
            return AssertionEncryptionModeType::Required;
          }
          else if (hashCode == Allowed_HASH)
          {
            return AssertionEncryptionModeType::Allowed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssertionEncryptionModeType>(hashCode);
          }

          return AssertionEncryptionModeType::NOT_SET;
        }

        Aws::String GetNameForAssertionEncryptionModeType(AssertionEncryptionModeType enumValue)
        {
          switch(enumValue)
          {
          case AssertionEncryptionModeType::NOT_SET:
            return {};
          case AssertionEncryptionModeType::Required:
            return "Required";
          case AssertionEncryptionModeType::Allowed:
            return "Allowed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssertionEncryptionModeTypeMapper
    } // namespace Model
  } // namespace IAM
} // namespace Aws
