/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/SsmParameterDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace SsmParameterDataTypeMapper
      {

        static const int text_HASH = HashingUtils::HashString("text");
        static const int aws_ec2_image_HASH = HashingUtils::HashString("aws:ec2:image");


        SsmParameterDataType GetSsmParameterDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == text_HASH)
          {
            return SsmParameterDataType::text;
          }
          else if (hashCode == aws_ec2_image_HASH)
          {
            return SsmParameterDataType::aws_ec2_image;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SsmParameterDataType>(hashCode);
          }

          return SsmParameterDataType::NOT_SET;
        }

        Aws::String GetNameForSsmParameterDataType(SsmParameterDataType enumValue)
        {
          switch(enumValue)
          {
          case SsmParameterDataType::NOT_SET:
            return {};
          case SsmParameterDataType::text:
            return "text";
          case SsmParameterDataType::aws_ec2_image:
            return "aws:ec2:image";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SsmParameterDataTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
