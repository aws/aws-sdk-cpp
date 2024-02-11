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

        static const int ONE_TO_ONE_HASH = HashingUtils::HashString("ONE_TO_ONE");
        static const int MANY_TO_MANY_HASH = HashingUtils::HashString("MANY_TO_MANY");


        AttributeMatchingModel GetAttributeMatchingModelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
