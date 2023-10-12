/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AllowsUnencryptedObjectUploads.h>
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
      namespace AllowsUnencryptedObjectUploadsMapper
      {

        static constexpr uint32_t TRUE_HASH = ConstExprHashingUtils::HashString("TRUE");
        static constexpr uint32_t FALSE_HASH = ConstExprHashingUtils::HashString("FALSE");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");


        AllowsUnencryptedObjectUploads GetAllowsUnencryptedObjectUploadsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUE_HASH)
          {
            return AllowsUnencryptedObjectUploads::TRUE;
          }
          else if (hashCode == FALSE_HASH)
          {
            return AllowsUnencryptedObjectUploads::FALSE;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return AllowsUnencryptedObjectUploads::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowsUnencryptedObjectUploads>(hashCode);
          }

          return AllowsUnencryptedObjectUploads::NOT_SET;
        }

        Aws::String GetNameForAllowsUnencryptedObjectUploads(AllowsUnencryptedObjectUploads enumValue)
        {
          switch(enumValue)
          {
          case AllowsUnencryptedObjectUploads::NOT_SET:
            return {};
          case AllowsUnencryptedObjectUploads::TRUE:
            return "TRUE";
          case AllowsUnencryptedObjectUploads::FALSE:
            return "FALSE";
          case AllowsUnencryptedObjectUploads::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllowsUnencryptedObjectUploadsMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
