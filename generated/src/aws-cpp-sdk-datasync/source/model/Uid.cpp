/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/Uid.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace UidMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t INT_VALUE_HASH = ConstExprHashingUtils::HashString("INT_VALUE");
        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t BOTH_HASH = ConstExprHashingUtils::HashString("BOTH");


        Uid GetUidForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Uid::NONE;
          }
          else if (hashCode == INT_VALUE_HASH)
          {
            return Uid::INT_VALUE;
          }
          else if (hashCode == NAME_HASH)
          {
            return Uid::NAME;
          }
          else if (hashCode == BOTH_HASH)
          {
            return Uid::BOTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Uid>(hashCode);
          }

          return Uid::NOT_SET;
        }

        Aws::String GetNameForUid(Uid enumValue)
        {
          switch(enumValue)
          {
          case Uid::NOT_SET:
            return {};
          case Uid::NONE:
            return "NONE";
          case Uid::INT_VALUE:
            return "INT_VALUE";
          case Uid::NAME:
            return "NAME";
          case Uid::BOTH:
            return "BOTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UidMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
