/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/SNSActionEncoding.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace SNSActionEncodingMapper
      {

        static const int UTF_8_HASH = HashingUtils::HashString("UTF-8");
        static const int Base64_HASH = HashingUtils::HashString("Base64");


        SNSActionEncoding GetSNSActionEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UTF_8_HASH)
          {
            return SNSActionEncoding::UTF_8;
          }
          else if (hashCode == Base64_HASH)
          {
            return SNSActionEncoding::Base64;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SNSActionEncoding>(hashCode);
          }

          return SNSActionEncoding::NOT_SET;
        }

        Aws::String GetNameForSNSActionEncoding(SNSActionEncoding enumValue)
        {
          switch(enumValue)
          {
          case SNSActionEncoding::UTF_8:
            return "UTF-8";
          case SNSActionEncoding::Base64:
            return "Base64";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SNSActionEncodingMapper
    } // namespace Model
  } // namespace SES
} // namespace Aws
