/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/LabelDecorator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyUIBuilder
  {
    namespace Model
    {
      namespace LabelDecoratorMapper
      {

        static const int required_HASH = HashingUtils::HashString("required");
        static const int optional_HASH = HashingUtils::HashString("optional");
        static const int none_HASH = HashingUtils::HashString("none");


        LabelDecorator GetLabelDecoratorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == required_HASH)
          {
            return LabelDecorator::required;
          }
          else if (hashCode == optional_HASH)
          {
            return LabelDecorator::optional;
          }
          else if (hashCode == none_HASH)
          {
            return LabelDecorator::none;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LabelDecorator>(hashCode);
          }

          return LabelDecorator::NOT_SET;
        }

        Aws::String GetNameForLabelDecorator(LabelDecorator enumValue)
        {
          switch(enumValue)
          {
          case LabelDecorator::NOT_SET:
            return {};
          case LabelDecorator::required:
            return "required";
          case LabelDecorator::optional:
            return "optional";
          case LabelDecorator::none:
            return "none";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LabelDecoratorMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws
