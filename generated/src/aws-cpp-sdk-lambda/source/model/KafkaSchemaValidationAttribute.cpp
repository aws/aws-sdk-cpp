/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/KafkaSchemaValidationAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace KafkaSchemaValidationAttributeMapper
      {

        static const int KEY_HASH = HashingUtils::HashString("KEY");
        static const int VALUE_HASH = HashingUtils::HashString("VALUE");


        KafkaSchemaValidationAttribute GetKafkaSchemaValidationAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KEY_HASH)
          {
            return KafkaSchemaValidationAttribute::KEY;
          }
          else if (hashCode == VALUE_HASH)
          {
            return KafkaSchemaValidationAttribute::VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KafkaSchemaValidationAttribute>(hashCode);
          }

          return KafkaSchemaValidationAttribute::NOT_SET;
        }

        Aws::String GetNameForKafkaSchemaValidationAttribute(KafkaSchemaValidationAttribute enumValue)
        {
          switch(enumValue)
          {
          case KafkaSchemaValidationAttribute::NOT_SET:
            return {};
          case KafkaSchemaValidationAttribute::KEY:
            return "KEY";
          case KafkaSchemaValidationAttribute::VALUE:
            return "VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KafkaSchemaValidationAttributeMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
