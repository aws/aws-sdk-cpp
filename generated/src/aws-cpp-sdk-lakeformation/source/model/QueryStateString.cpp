/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/QueryStateString.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LakeFormation
  {
    namespace Model
    {
      namespace QueryStateStringMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t WORKUNITS_AVAILABLE_HASH = ConstExprHashingUtils::HashString("WORKUNITS_AVAILABLE");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t FINISHED_HASH = ConstExprHashingUtils::HashString("FINISHED");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");


        QueryStateString GetQueryStateStringForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return QueryStateString::PENDING;
          }
          else if (hashCode == WORKUNITS_AVAILABLE_HASH)
          {
            return QueryStateString::WORKUNITS_AVAILABLE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return QueryStateString::ERROR_;
          }
          else if (hashCode == FINISHED_HASH)
          {
            return QueryStateString::FINISHED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return QueryStateString::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryStateString>(hashCode);
          }

          return QueryStateString::NOT_SET;
        }

        Aws::String GetNameForQueryStateString(QueryStateString enumValue)
        {
          switch(enumValue)
          {
          case QueryStateString::NOT_SET:
            return {};
          case QueryStateString::PENDING:
            return "PENDING";
          case QueryStateString::WORKUNITS_AVAILABLE:
            return "WORKUNITS_AVAILABLE";
          case QueryStateString::ERROR_:
            return "ERROR";
          case QueryStateString::FINISHED:
            return "FINISHED";
          case QueryStateString::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryStateStringMapper
    } // namespace Model
  } // namespace LakeFormation
} // namespace Aws
