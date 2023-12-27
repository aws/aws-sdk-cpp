/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/TransformerStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace B2BI
  {
    namespace Model
    {
      namespace TransformerStatusMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int inactive_HASH = HashingUtils::HashString("inactive");


        TransformerStatus GetTransformerStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return TransformerStatus::active;
          }
          else if (hashCode == inactive_HASH)
          {
            return TransformerStatus::inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransformerStatus>(hashCode);
          }

          return TransformerStatus::NOT_SET;
        }

        Aws::String GetNameForTransformerStatus(TransformerStatus enumValue)
        {
          switch(enumValue)
          {
          case TransformerStatus::NOT_SET:
            return {};
          case TransformerStatus::active:
            return "active";
          case TransformerStatus::inactive:
            return "inactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransformerStatusMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
