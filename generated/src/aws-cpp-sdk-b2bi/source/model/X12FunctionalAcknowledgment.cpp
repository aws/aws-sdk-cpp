/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12FunctionalAcknowledgment.h>
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
      namespace X12FunctionalAcknowledgmentMapper
      {

        static const int DO_NOT_GENERATE_HASH = HashingUtils::HashString("DO_NOT_GENERATE");
        static const int GENERATE_ALL_SEGMENTS_HASH = HashingUtils::HashString("GENERATE_ALL_SEGMENTS");
        static const int GENERATE_WITHOUT_TRANSACTION_SET_RESPONSE_LOOP_HASH = HashingUtils::HashString("GENERATE_WITHOUT_TRANSACTION_SET_RESPONSE_LOOP");


        X12FunctionalAcknowledgment GetX12FunctionalAcknowledgmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DO_NOT_GENERATE_HASH)
          {
            return X12FunctionalAcknowledgment::DO_NOT_GENERATE;
          }
          else if (hashCode == GENERATE_ALL_SEGMENTS_HASH)
          {
            return X12FunctionalAcknowledgment::GENERATE_ALL_SEGMENTS;
          }
          else if (hashCode == GENERATE_WITHOUT_TRANSACTION_SET_RESPONSE_LOOP_HASH)
          {
            return X12FunctionalAcknowledgment::GENERATE_WITHOUT_TRANSACTION_SET_RESPONSE_LOOP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<X12FunctionalAcknowledgment>(hashCode);
          }

          return X12FunctionalAcknowledgment::NOT_SET;
        }

        Aws::String GetNameForX12FunctionalAcknowledgment(X12FunctionalAcknowledgment enumValue)
        {
          switch(enumValue)
          {
          case X12FunctionalAcknowledgment::NOT_SET:
            return {};
          case X12FunctionalAcknowledgment::DO_NOT_GENERATE:
            return "DO_NOT_GENERATE";
          case X12FunctionalAcknowledgment::GENERATE_ALL_SEGMENTS:
            return "GENERATE_ALL_SEGMENTS";
          case X12FunctionalAcknowledgment::GENERATE_WITHOUT_TRANSACTION_SET_RESPONSE_LOOP:
            return "GENERATE_WITHOUT_TRANSACTION_SET_RESPONSE_LOOP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace X12FunctionalAcknowledgmentMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
