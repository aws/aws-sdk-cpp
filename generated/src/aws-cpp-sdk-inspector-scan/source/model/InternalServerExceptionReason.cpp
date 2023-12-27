/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector-scan/model/InternalServerExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace inspectorscan
  {
    namespace Model
    {
      namespace InternalServerExceptionReasonMapper
      {

        static const int FAILED_TO_GENERATE_SBOM_HASH = HashingUtils::HashString("FAILED_TO_GENERATE_SBOM");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        InternalServerExceptionReason GetInternalServerExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_TO_GENERATE_SBOM_HASH)
          {
            return InternalServerExceptionReason::FAILED_TO_GENERATE_SBOM;
          }
          else if (hashCode == OTHER_HASH)
          {
            return InternalServerExceptionReason::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InternalServerExceptionReason>(hashCode);
          }

          return InternalServerExceptionReason::NOT_SET;
        }

        Aws::String GetNameForInternalServerExceptionReason(InternalServerExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case InternalServerExceptionReason::NOT_SET:
            return {};
          case InternalServerExceptionReason::FAILED_TO_GENERATE_SBOM:
            return "FAILED_TO_GENERATE_SBOM";
          case InternalServerExceptionReason::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InternalServerExceptionReasonMapper
    } // namespace Model
  } // namespace inspectorscan
} // namespace Aws
