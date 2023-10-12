/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/AttributeMatchingModel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EntityResolution
  {
    namespace Model
    {
      namespace AttributeMatchingModelMapper
      {

        static constexpr uint32_t ONE_TO_ONE_HASH = ConstExprHashingUtils::HashString("ONE_TO_ONE");
        static constexpr uint32_t MANY_TO_MANY_HASH = ConstExprHashingUtils::HashString("MANY_TO_MANY");


        AttributeMatchingModel GetAttributeMatchingModelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONE_TO_ONE_HASH)
          {
            return AttributeMatchingModel::ONE_TO_ONE;
          }
          else if (hashCode == MANY_TO_MANY_HASH)
          {
            return AttributeMatchingModel::MANY_TO_MANY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttributeMatchingModel>(hashCode);
          }

          return AttributeMatchingModel::NOT_SET;
        }

        Aws::String GetNameForAttributeMatchingModel(AttributeMatchingModel enumValue)
        {
          switch(enumValue)
          {
          case AttributeMatchingModel::NOT_SET:
            return {};
          case AttributeMatchingModel::ONE_TO_ONE:
            return "ONE_TO_ONE";
          case AttributeMatchingModel::MANY_TO_MANY:
            return "MANY_TO_MANY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttributeMatchingModelMapper
    } // namespace Model
  } // namespace EntityResolution
} // namespace Aws
