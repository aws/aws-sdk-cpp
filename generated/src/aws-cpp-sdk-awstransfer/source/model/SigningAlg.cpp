/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/SigningAlg.h>
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
      namespace SigningAlgMapper
      {

        static const int SHA256_HASH = HashingUtils::HashString("SHA256");
        static const int SHA384_HASH = HashingUtils::HashString("SHA384");
        static const int SHA512_HASH = HashingUtils::HashString("SHA512");
        static const int SHA1_HASH = HashingUtils::HashString("SHA1");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        SigningAlg GetSigningAlgForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHA256_HASH)
          {
            return SigningAlg::SHA256;
          }
          else if (hashCode == SHA384_HASH)
          {
            return SigningAlg::SHA384;
          }
          else if (hashCode == SHA512_HASH)
          {
            return SigningAlg::SHA512;
          }
          else if (hashCode == SHA1_HASH)
          {
            return SigningAlg::SHA1;
          }
          else if (hashCode == NONE_HASH)
          {
            return SigningAlg::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SigningAlg>(hashCode);
          }

          return SigningAlg::NOT_SET;
        }

        Aws::String GetNameForSigningAlg(SigningAlg enumValue)
        {
          switch(enumValue)
          {
          case SigningAlg::NOT_SET:
            return {};
          case SigningAlg::SHA256:
            return "SHA256";
          case SigningAlg::SHA384:
            return "SHA384";
          case SigningAlg::SHA512:
            return "SHA512";
          case SigningAlg::SHA1:
            return "SHA1";
          case SigningAlg::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SigningAlgMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
