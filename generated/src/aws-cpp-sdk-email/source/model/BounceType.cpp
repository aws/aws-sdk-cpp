/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/BounceType.h>
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
      namespace BounceTypeMapper
      {

        static const int DoesNotExist_HASH = HashingUtils::HashString("DoesNotExist");
        static const int MessageTooLarge_HASH = HashingUtils::HashString("MessageTooLarge");
        static const int ExceededQuota_HASH = HashingUtils::HashString("ExceededQuota");
        static const int ContentRejected_HASH = HashingUtils::HashString("ContentRejected");
        static const int Undefined_HASH = HashingUtils::HashString("Undefined");
        static const int TemporaryFailure_HASH = HashingUtils::HashString("TemporaryFailure");


        BounceType GetBounceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DoesNotExist_HASH)
          {
            return BounceType::DoesNotExist;
          }
          else if (hashCode == MessageTooLarge_HASH)
          {
            return BounceType::MessageTooLarge;
          }
          else if (hashCode == ExceededQuota_HASH)
          {
            return BounceType::ExceededQuota;
          }
          else if (hashCode == ContentRejected_HASH)
          {
            return BounceType::ContentRejected;
          }
          else if (hashCode == Undefined_HASH)
          {
            return BounceType::Undefined;
          }
          else if (hashCode == TemporaryFailure_HASH)
          {
            return BounceType::TemporaryFailure;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BounceType>(hashCode);
          }

          return BounceType::NOT_SET;
        }

        Aws::String GetNameForBounceType(BounceType enumValue)
        {
          switch(enumValue)
          {
          case BounceType::DoesNotExist:
            return "DoesNotExist";
          case BounceType::MessageTooLarge:
            return "MessageTooLarge";
          case BounceType::ExceededQuota:
            return "ExceededQuota";
          case BounceType::ContentRejected:
            return "ContentRejected";
          case BounceType::Undefined:
            return "Undefined";
          case BounceType::TemporaryFailure:
            return "TemporaryFailure";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BounceTypeMapper
    } // namespace Model
  } // namespace SES
} // namespace Aws
