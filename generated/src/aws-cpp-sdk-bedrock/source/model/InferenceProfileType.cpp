/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/InferenceProfileType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace InferenceProfileTypeMapper
      {

        static const int SYSTEM_DEFINED_HASH = HashingUtils::HashString("SYSTEM_DEFINED");


        InferenceProfileType GetInferenceProfileTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYSTEM_DEFINED_HASH)
          {
            return InferenceProfileType::SYSTEM_DEFINED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferenceProfileType>(hashCode);
          }

          return InferenceProfileType::NOT_SET;
        }

        Aws::String GetNameForInferenceProfileType(InferenceProfileType enumValue)
        {
          switch(enumValue)
          {
          case InferenceProfileType::NOT_SET:
            return {};
          case InferenceProfileType::SYSTEM_DEFINED:
            return "SYSTEM_DEFINED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InferenceProfileTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
