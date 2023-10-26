/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/MdnSigningAlg.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace MdnSigningAlgMapper
      {

        static const int SHA256_HASH = HashingUtils::HashString("SHA256");
        static const int SHA384_HASH = HashingUtils::HashString("SHA384");
        static const int SHA512_HASH = HashingUtils::HashString("SHA512");
        static const int SHA1_HASH = HashingUtils::HashString("SHA1");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");


        MdnSigningAlg GetMdnSigningAlgForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHA256_HASH)
          {
            return MdnSigningAlg::SHA256;
          }
          else if (hashCode == SHA384_HASH)
          {
            return MdnSigningAlg::SHA384;
          }
          else if (hashCode == SHA512_HASH)
          {
            return MdnSigningAlg::SHA512;
          }
          else if (hashCode == SHA1_HASH)
          {
            return MdnSigningAlg::SHA1;
          }
          else if (hashCode == NONE_HASH)
          {
            return MdnSigningAlg::NONE;
          }
          else if (hashCode == DEFAULT_HASH)
          {
            return MdnSigningAlg::DEFAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MdnSigningAlg>(hashCode);
          }

          return MdnSigningAlg::NOT_SET;
        }

        Aws::String GetNameForMdnSigningAlg(MdnSigningAlg enumValue)
        {
          switch(enumValue)
          {
          case MdnSigningAlg::NOT_SET:
            return {};
          case MdnSigningAlg::SHA256:
            return "SHA256";
          case MdnSigningAlg::SHA384:
            return "SHA384";
          case MdnSigningAlg::SHA512:
            return "SHA512";
          case MdnSigningAlg::SHA1:
            return "SHA1";
          case MdnSigningAlg::NONE:
            return "NONE";
          case MdnSigningAlg::DEFAULT:
            return "DEFAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MdnSigningAlgMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
