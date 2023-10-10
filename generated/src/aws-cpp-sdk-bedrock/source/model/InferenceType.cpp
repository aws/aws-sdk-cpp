/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/InferenceType.h>
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
      namespace InferenceTypeMapper
      {

        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");
        static const int PROVISIONED_HASH = HashingUtils::HashString("PROVISIONED");


        InferenceType GetInferenceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_DEMAND_HASH)
          {
            return InferenceType::ON_DEMAND;
          }
          else if (hashCode == PROVISIONED_HASH)
          {
            return InferenceType::PROVISIONED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferenceType>(hashCode);
          }

          return InferenceType::NOT_SET;
        }

        Aws::String GetNameForInferenceType(InferenceType enumValue)
        {
          switch(enumValue)
          {
          case InferenceType::NOT_SET:
            return {};
          case InferenceType::ON_DEMAND:
            return "ON_DEMAND";
          case InferenceType::PROVISIONED:
            return "PROVISIONED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InferenceTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
