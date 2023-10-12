/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ExperimentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace ExperimentTypeMapper
      {

        static constexpr uint32_t aws_evidently_onlineab_HASH = ConstExprHashingUtils::HashString("aws.evidently.onlineab");


        ExperimentType GetExperimentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == aws_evidently_onlineab_HASH)
          {
            return ExperimentType::aws_evidently_onlineab;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExperimentType>(hashCode);
          }

          return ExperimentType::NOT_SET;
        }

        Aws::String GetNameForExperimentType(ExperimentType enumValue)
        {
          switch(enumValue)
          {
          case ExperimentType::NOT_SET:
            return {};
          case ExperimentType::aws_evidently_onlineab:
            return "aws.evidently.onlineab";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExperimentTypeMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
