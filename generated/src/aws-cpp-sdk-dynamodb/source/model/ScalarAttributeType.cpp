/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ScalarAttributeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace ScalarAttributeTypeMapper
      {

        static const int S_HASH = HashingUtils::HashString("S");
        static const int N_HASH = HashingUtils::HashString("N");
        static const int B_HASH = HashingUtils::HashString("B");


        ScalarAttributeType GetScalarAttributeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S_HASH)
          {
            return ScalarAttributeType::S;
          }
          else if (hashCode == N_HASH)
          {
            return ScalarAttributeType::N;
          }
          else if (hashCode == B_HASH)
          {
            return ScalarAttributeType::B;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalarAttributeType>(hashCode);
          }

          return ScalarAttributeType::NOT_SET;
        }

        Aws::String GetNameForScalarAttributeType(ScalarAttributeType enumValue)
        {
          switch(enumValue)
          {
          case ScalarAttributeType::S:
            return "S";
          case ScalarAttributeType::N:
            return "N";
          case ScalarAttributeType::B:
            return "B";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalarAttributeTypeMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
