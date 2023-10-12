/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ValidationSeverity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticBeanstalk
  {
    namespace Model
    {
      namespace ValidationSeverityMapper
      {

        static constexpr uint32_t error_HASH = ConstExprHashingUtils::HashString("error");
        static constexpr uint32_t warning_HASH = ConstExprHashingUtils::HashString("warning");


        ValidationSeverity GetValidationSeverityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == error_HASH)
          {
            return ValidationSeverity::error;
          }
          else if (hashCode == warning_HASH)
          {
            return ValidationSeverity::warning;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationSeverity>(hashCode);
          }

          return ValidationSeverity::NOT_SET;
        }

        Aws::String GetNameForValidationSeverity(ValidationSeverity enumValue)
        {
          switch(enumValue)
          {
          case ValidationSeverity::NOT_SET:
            return {};
          case ValidationSeverity::error:
            return "error";
          case ValidationSeverity::warning:
            return "warning";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationSeverityMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
