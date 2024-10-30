/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/RecordTypeCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoPlaces
  {
    namespace Model
    {
      namespace RecordTypeCodeMapper
      {

        static const int Firm_HASH = HashingUtils::HashString("Firm");
        static const int General_HASH = HashingUtils::HashString("General");
        static const int HighRise_HASH = HashingUtils::HashString("HighRise");
        static const int PostOfficeBox_HASH = HashingUtils::HashString("PostOfficeBox");
        static const int Rural_HASH = HashingUtils::HashString("Rural");
        static const int Street_HASH = HashingUtils::HashString("Street");


        RecordTypeCode GetRecordTypeCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Firm_HASH)
          {
            return RecordTypeCode::Firm;
          }
          else if (hashCode == General_HASH)
          {
            return RecordTypeCode::General;
          }
          else if (hashCode == HighRise_HASH)
          {
            return RecordTypeCode::HighRise;
          }
          else if (hashCode == PostOfficeBox_HASH)
          {
            return RecordTypeCode::PostOfficeBox;
          }
          else if (hashCode == Rural_HASH)
          {
            return RecordTypeCode::Rural;
          }
          else if (hashCode == Street_HASH)
          {
            return RecordTypeCode::Street;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordTypeCode>(hashCode);
          }

          return RecordTypeCode::NOT_SET;
        }

        Aws::String GetNameForRecordTypeCode(RecordTypeCode enumValue)
        {
          switch(enumValue)
          {
          case RecordTypeCode::NOT_SET:
            return {};
          case RecordTypeCode::Firm:
            return "Firm";
          case RecordTypeCode::General:
            return "General";
          case RecordTypeCode::HighRise:
            return "HighRise";
          case RecordTypeCode::PostOfficeBox:
            return "PostOfficeBox";
          case RecordTypeCode::Rural:
            return "Rural";
          case RecordTypeCode::Street:
            return "Street";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordTypeCodeMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
