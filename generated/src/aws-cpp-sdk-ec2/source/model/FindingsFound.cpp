/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FindingsFound.h>
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
      namespace FindingsFoundMapper
      {

        static constexpr uint32_t true__HASH = ConstExprHashingUtils::HashString("true");
        static constexpr uint32_t false__HASH = ConstExprHashingUtils::HashString("false");
        static constexpr uint32_t unknown_HASH = ConstExprHashingUtils::HashString("unknown");


        FindingsFound GetFindingsFoundForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == true__HASH)
          {
            return FindingsFound::true_;
          }
          else if (hashCode == false__HASH)
          {
            return FindingsFound::false_;
          }
          else if (hashCode == unknown_HASH)
          {
            return FindingsFound::unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingsFound>(hashCode);
          }

          return FindingsFound::NOT_SET;
        }

        Aws::String GetNameForFindingsFound(FindingsFound enumValue)
        {
          switch(enumValue)
          {
          case FindingsFound::NOT_SET:
            return {};
          case FindingsFound::true_:
            return "true";
          case FindingsFound::false_:
            return "false";
          case FindingsFound::unknown:
            return "unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingsFoundMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
