/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/OnStackFailure.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace OnStackFailureMapper
      {

        static constexpr uint32_t DO_NOTHING_HASH = ConstExprHashingUtils::HashString("DO_NOTHING");
        static constexpr uint32_t ROLLBACK_HASH = ConstExprHashingUtils::HashString("ROLLBACK");
        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");


        OnStackFailure GetOnStackFailureForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DO_NOTHING_HASH)
          {
            return OnStackFailure::DO_NOTHING;
          }
          else if (hashCode == ROLLBACK_HASH)
          {
            return OnStackFailure::ROLLBACK;
          }
          else if (hashCode == DELETE__HASH)
          {
            return OnStackFailure::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OnStackFailure>(hashCode);
          }

          return OnStackFailure::NOT_SET;
        }

        Aws::String GetNameForOnStackFailure(OnStackFailure enumValue)
        {
          switch(enumValue)
          {
          case OnStackFailure::NOT_SET:
            return {};
          case OnStackFailure::DO_NOTHING:
            return "DO_NOTHING";
          case OnStackFailure::ROLLBACK:
            return "ROLLBACK";
          case OnStackFailure::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OnStackFailureMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
