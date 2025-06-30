/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12TechnicalAcknowledgment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace B2BI
  {
    namespace Model
    {
      namespace X12TechnicalAcknowledgmentMapper
      {

        static const int DO_NOT_GENERATE_HASH = HashingUtils::HashString("DO_NOT_GENERATE");
        static const int GENERATE_ALL_SEGMENTS_HASH = HashingUtils::HashString("GENERATE_ALL_SEGMENTS");


        X12TechnicalAcknowledgment GetX12TechnicalAcknowledgmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DO_NOT_GENERATE_HASH)
          {
            return X12TechnicalAcknowledgment::DO_NOT_GENERATE;
          }
          else if (hashCode == GENERATE_ALL_SEGMENTS_HASH)
          {
            return X12TechnicalAcknowledgment::GENERATE_ALL_SEGMENTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<X12TechnicalAcknowledgment>(hashCode);
          }

          return X12TechnicalAcknowledgment::NOT_SET;
        }

        Aws::String GetNameForX12TechnicalAcknowledgment(X12TechnicalAcknowledgment enumValue)
        {
          switch(enumValue)
          {
          case X12TechnicalAcknowledgment::NOT_SET:
            return {};
          case X12TechnicalAcknowledgment::DO_NOT_GENERATE:
            return "DO_NOT_GENERATE";
          case X12TechnicalAcknowledgment::GENERATE_ALL_SEGMENTS:
            return "GENERATE_ALL_SEGMENTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace X12TechnicalAcknowledgmentMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
