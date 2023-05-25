/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/NoEncryptionConfig.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace NoEncryptionConfigMapper
      {

        static const int NoEncryption_HASH = HashingUtils::HashString("NoEncryption");


        NoEncryptionConfig GetNoEncryptionConfigForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NoEncryption_HASH)
          {
            return NoEncryptionConfig::NoEncryption;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NoEncryptionConfig>(hashCode);
          }

          return NoEncryptionConfig::NOT_SET;
        }

        Aws::String GetNameForNoEncryptionConfig(NoEncryptionConfig enumValue)
        {
          switch(enumValue)
          {
          case NoEncryptionConfig::NoEncryption:
            return "NoEncryption";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NoEncryptionConfigMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
