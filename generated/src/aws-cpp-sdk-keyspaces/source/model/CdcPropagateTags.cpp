/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/CdcPropagateTags.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Keyspaces
  {
    namespace Model
    {
      namespace CdcPropagateTagsMapper
      {

        static const int TABLE_HASH = HashingUtils::HashString("TABLE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        CdcPropagateTags GetCdcPropagateTagsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TABLE_HASH)
          {
            return CdcPropagateTags::TABLE;
          }
          else if (hashCode == NONE_HASH)
          {
            return CdcPropagateTags::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CdcPropagateTags>(hashCode);
          }

          return CdcPropagateTags::NOT_SET;
        }

        Aws::String GetNameForCdcPropagateTags(CdcPropagateTags enumValue)
        {
          switch(enumValue)
          {
          case CdcPropagateTags::NOT_SET:
            return {};
          case CdcPropagateTags::TABLE:
            return "TABLE";
          case CdcPropagateTags::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CdcPropagateTagsMapper
    } // namespace Model
  } // namespace Keyspaces
} // namespace Aws
