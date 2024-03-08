/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/EncryptionOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruReviewer
  {
    namespace Model
    {
      namespace EncryptionOptionMapper
      {

        static const int AWS_OWNED_CMK_HASH = HashingUtils::HashString("AWS_OWNED_CMK");
        static const int CUSTOMER_MANAGED_CMK_HASH = HashingUtils::HashString("CUSTOMER_MANAGED_CMK");


        EncryptionOption GetEncryptionOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_OWNED_CMK_HASH)
          {
            return EncryptionOption::AWS_OWNED_CMK;
          }
          else if (hashCode == CUSTOMER_MANAGED_CMK_HASH)
          {
            return EncryptionOption::CUSTOMER_MANAGED_CMK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionOption>(hashCode);
          }

          return EncryptionOption::NOT_SET;
        }

        Aws::String GetNameForEncryptionOption(EncryptionOption enumValue)
        {
          switch(enumValue)
          {
          case EncryptionOption::NOT_SET:
            return {};
          case EncryptionOption::AWS_OWNED_CMK:
            return "AWS_OWNED_CMK";
          case EncryptionOption::CUSTOMER_MANAGED_CMK:
            return "CUSTOMER_MANAGED_CMK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionOptionMapper
    } // namespace Model
  } // namespace CodeGuruReviewer
} // namespace Aws
