/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/HeaderEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace HeaderEnumMapper
      {

        static const int Accept_HASH = HashingUtils::HashString("Accept");
        static const int Accept_Charset_HASH = HashingUtils::HashString("Accept-Charset");
        static const int Accept_Datetime_HASH = HashingUtils::HashString("Accept-Datetime");
        static const int Accept_Encoding_HASH = HashingUtils::HashString("Accept-Encoding");
        static const int Accept_Language_HASH = HashingUtils::HashString("Accept-Language");
        static const int Authorization_HASH = HashingUtils::HashString("Authorization");
        static const int CloudFront_Forwarded_Proto_HASH = HashingUtils::HashString("CloudFront-Forwarded-Proto");
        static const int CloudFront_Is_Desktop_Viewer_HASH = HashingUtils::HashString("CloudFront-Is-Desktop-Viewer");
        static const int CloudFront_Is_Mobile_Viewer_HASH = HashingUtils::HashString("CloudFront-Is-Mobile-Viewer");
        static const int CloudFront_Is_SmartTV_Viewer_HASH = HashingUtils::HashString("CloudFront-Is-SmartTV-Viewer");
        static const int CloudFront_Is_Tablet_Viewer_HASH = HashingUtils::HashString("CloudFront-Is-Tablet-Viewer");
        static const int CloudFront_Viewer_Country_HASH = HashingUtils::HashString("CloudFront-Viewer-Country");
        static const int Host_HASH = HashingUtils::HashString("Host");
        static const int Origin_HASH = HashingUtils::HashString("Origin");
        static const int Referer_HASH = HashingUtils::HashString("Referer");


        HeaderEnum GetHeaderEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Accept_HASH)
          {
            return HeaderEnum::Accept;
          }
          else if (hashCode == Accept_Charset_HASH)
          {
            return HeaderEnum::Accept_Charset;
          }
          else if (hashCode == Accept_Datetime_HASH)
          {
            return HeaderEnum::Accept_Datetime;
          }
          else if (hashCode == Accept_Encoding_HASH)
          {
            return HeaderEnum::Accept_Encoding;
          }
          else if (hashCode == Accept_Language_HASH)
          {
            return HeaderEnum::Accept_Language;
          }
          else if (hashCode == Authorization_HASH)
          {
            return HeaderEnum::Authorization;
          }
          else if (hashCode == CloudFront_Forwarded_Proto_HASH)
          {
            return HeaderEnum::CloudFront_Forwarded_Proto;
          }
          else if (hashCode == CloudFront_Is_Desktop_Viewer_HASH)
          {
            return HeaderEnum::CloudFront_Is_Desktop_Viewer;
          }
          else if (hashCode == CloudFront_Is_Mobile_Viewer_HASH)
          {
            return HeaderEnum::CloudFront_Is_Mobile_Viewer;
          }
          else if (hashCode == CloudFront_Is_SmartTV_Viewer_HASH)
          {
            return HeaderEnum::CloudFront_Is_SmartTV_Viewer;
          }
          else if (hashCode == CloudFront_Is_Tablet_Viewer_HASH)
          {
            return HeaderEnum::CloudFront_Is_Tablet_Viewer;
          }
          else if (hashCode == CloudFront_Viewer_Country_HASH)
          {
            return HeaderEnum::CloudFront_Viewer_Country;
          }
          else if (hashCode == Host_HASH)
          {
            return HeaderEnum::Host;
          }
          else if (hashCode == Origin_HASH)
          {
            return HeaderEnum::Origin;
          }
          else if (hashCode == Referer_HASH)
          {
            return HeaderEnum::Referer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HeaderEnum>(hashCode);
          }

          return HeaderEnum::NOT_SET;
        }

        Aws::String GetNameForHeaderEnum(HeaderEnum enumValue)
        {
          switch(enumValue)
          {
          case HeaderEnum::Accept:
            return "Accept";
          case HeaderEnum::Accept_Charset:
            return "Accept-Charset";
          case HeaderEnum::Accept_Datetime:
            return "Accept-Datetime";
          case HeaderEnum::Accept_Encoding:
            return "Accept-Encoding";
          case HeaderEnum::Accept_Language:
            return "Accept-Language";
          case HeaderEnum::Authorization:
            return "Authorization";
          case HeaderEnum::CloudFront_Forwarded_Proto:
            return "CloudFront-Forwarded-Proto";
          case HeaderEnum::CloudFront_Is_Desktop_Viewer:
            return "CloudFront-Is-Desktop-Viewer";
          case HeaderEnum::CloudFront_Is_Mobile_Viewer:
            return "CloudFront-Is-Mobile-Viewer";
          case HeaderEnum::CloudFront_Is_SmartTV_Viewer:
            return "CloudFront-Is-SmartTV-Viewer";
          case HeaderEnum::CloudFront_Is_Tablet_Viewer:
            return "CloudFront-Is-Tablet-Viewer";
          case HeaderEnum::CloudFront_Viewer_Country:
            return "CloudFront-Viewer-Country";
          case HeaderEnum::Host:
            return "Host";
          case HeaderEnum::Origin:
            return "Origin";
          case HeaderEnum::Referer:
            return "Referer";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HeaderEnumMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
