/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/OnFailure.h>
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
      namespace OnFailureMapper
      {

        static constexpr uint32_t DO_NOTHING_HASH = ConstExprHashingUtils::HashString("DO_NOTHING");
        static constexpr uint32_t ROLLBACK_HASH = ConstExprHashingUtils::HashString("ROLLBACK");
        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");


        OnFailure GetOnFailureForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DO_NOTHING_HASH)
          {
            return OnFailure::DO_NOTHING;
          }
          else if (hashCode == ROLLBACK_HASH)
          {
            return OnFailure::ROLLBACK;
          }
          else if (hashCode == DELETE__HASH)
          {
            return OnFailure::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OnFailure>(hashCode);
          }

          return OnFailure::NOT_SET;
        }

        Aws::String GetNameForOnFailure(OnFailure enumValue)
        {
          switch(enumValue)
          {
          case OnFailure::NOT_SET:
            return {};
          case OnFailure::DO_NOTHING:
            return "DO_NOTHING";
          case OnFailure::ROLLBACK:
            return "ROLLBACK";
          case OnFailure::DELETE_:
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

      } // namespace OnFailureMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
