/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/RecordType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace RecordTypeMapper
      {

        static constexpr uint32_t CNAME_HASH = ConstExprHashingUtils::HashString("CNAME");


        RecordType GetRecordTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CNAME_HASH)
          {
            return RecordType::CNAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordType>(hashCode);
          }

          return RecordType::NOT_SET;
        }

        Aws::String GetNameForRecordType(RecordType enumValue)
        {
          switch(enumValue)
          {
          case RecordType::NOT_SET:
            return {};
          case RecordType::CNAME:
            return "CNAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordTypeMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
