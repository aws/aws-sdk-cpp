/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfigdata/model/InvalidParameterProblem.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfigData
  {
    namespace Model
    {
      namespace InvalidParameterProblemMapper
      {

        static constexpr uint32_t Corrupted_HASH = ConstExprHashingUtils::HashString("Corrupted");
        static constexpr uint32_t Expired_HASH = ConstExprHashingUtils::HashString("Expired");
        static constexpr uint32_t PollIntervalNotSatisfied_HASH = ConstExprHashingUtils::HashString("PollIntervalNotSatisfied");


        InvalidParameterProblem GetInvalidParameterProblemForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Corrupted_HASH)
          {
            return InvalidParameterProblem::Corrupted;
          }
          else if (hashCode == Expired_HASH)
          {
            return InvalidParameterProblem::Expired;
          }
          else if (hashCode == PollIntervalNotSatisfied_HASH)
          {
            return InvalidParameterProblem::PollIntervalNotSatisfied;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvalidParameterProblem>(hashCode);
          }

          return InvalidParameterProblem::NOT_SET;
        }

        Aws::String GetNameForInvalidParameterProblem(InvalidParameterProblem enumValue)
        {
          switch(enumValue)
          {
          case InvalidParameterProblem::NOT_SET:
            return {};
          case InvalidParameterProblem::Corrupted:
            return "Corrupted";
          case InvalidParameterProblem::Expired:
            return "Expired";
          case InvalidParameterProblem::PollIntervalNotSatisfied:
            return "PollIntervalNotSatisfied";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InvalidParameterProblemMapper
    } // namespace Model
  } // namespace AppConfigData
} // namespace Aws
