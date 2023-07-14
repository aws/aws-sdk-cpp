/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TemplateErrorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace TemplateErrorTypeMapper
      {

        static const int SOURCE_NOT_FOUND_HASH = HashingUtils::HashString("SOURCE_NOT_FOUND");
        static const int DATA_SET_NOT_FOUND_HASH = HashingUtils::HashString("DATA_SET_NOT_FOUND");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");


        TemplateErrorType GetTemplateErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE_NOT_FOUND_HASH)
          {
            return TemplateErrorType::SOURCE_NOT_FOUND;
          }
          else if (hashCode == DATA_SET_NOT_FOUND_HASH)
          {
            return TemplateErrorType::DATA_SET_NOT_FOUND;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return TemplateErrorType::INTERNAL_FAILURE;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return TemplateErrorType::ACCESS_DENIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateErrorType>(hashCode);
          }

          return TemplateErrorType::NOT_SET;
        }

        Aws::String GetNameForTemplateErrorType(TemplateErrorType enumValue)
        {
          switch(enumValue)
          {
          case TemplateErrorType::SOURCE_NOT_FOUND:
            return "SOURCE_NOT_FOUND";
          case TemplateErrorType::DATA_SET_NOT_FOUND:
            return "DATA_SET_NOT_FOUND";
          case TemplateErrorType::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          case TemplateErrorType::ACCESS_DENIED:
            return "ACCESS_DENIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemplateErrorTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
