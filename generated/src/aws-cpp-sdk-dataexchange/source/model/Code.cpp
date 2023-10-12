/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/Code.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace CodeMapper
      {

        static constexpr uint32_t ACCESS_DENIED_EXCEPTION_HASH = ConstExprHashingUtils::HashString("ACCESS_DENIED_EXCEPTION");
        static constexpr uint32_t INTERNAL_SERVER_EXCEPTION_HASH = ConstExprHashingUtils::HashString("INTERNAL_SERVER_EXCEPTION");
        static constexpr uint32_t MALWARE_DETECTED_HASH = ConstExprHashingUtils::HashString("MALWARE_DETECTED");
        static constexpr uint32_t RESOURCE_NOT_FOUND_EXCEPTION_HASH = ConstExprHashingUtils::HashString("RESOURCE_NOT_FOUND_EXCEPTION");
        static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_EXCEPTION_HASH = ConstExprHashingUtils::HashString("SERVICE_QUOTA_EXCEEDED_EXCEPTION");
        static constexpr uint32_t VALIDATION_EXCEPTION_HASH = ConstExprHashingUtils::HashString("VALIDATION_EXCEPTION");
        static constexpr uint32_t MALWARE_SCAN_ENCRYPTED_FILE_HASH = ConstExprHashingUtils::HashString("MALWARE_SCAN_ENCRYPTED_FILE");


        Code GetCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_EXCEPTION_HASH)
          {
            return Code::ACCESS_DENIED_EXCEPTION;
          }
          else if (hashCode == INTERNAL_SERVER_EXCEPTION_HASH)
          {
            return Code::INTERNAL_SERVER_EXCEPTION;
          }
          else if (hashCode == MALWARE_DETECTED_HASH)
          {
            return Code::MALWARE_DETECTED;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_EXCEPTION_HASH)
          {
            return Code::RESOURCE_NOT_FOUND_EXCEPTION;
          }
          else if (hashCode == SERVICE_QUOTA_EXCEEDED_EXCEPTION_HASH)
          {
            return Code::SERVICE_QUOTA_EXCEEDED_EXCEPTION;
          }
          else if (hashCode == VALIDATION_EXCEPTION_HASH)
          {
            return Code::VALIDATION_EXCEPTION;
          }
          else if (hashCode == MALWARE_SCAN_ENCRYPTED_FILE_HASH)
          {
            return Code::MALWARE_SCAN_ENCRYPTED_FILE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Code>(hashCode);
          }

          return Code::NOT_SET;
        }

        Aws::String GetNameForCode(Code enumValue)
        {
          switch(enumValue)
          {
          case Code::NOT_SET:
            return {};
          case Code::ACCESS_DENIED_EXCEPTION:
            return "ACCESS_DENIED_EXCEPTION";
          case Code::INTERNAL_SERVER_EXCEPTION:
            return "INTERNAL_SERVER_EXCEPTION";
          case Code::MALWARE_DETECTED:
            return "MALWARE_DETECTED";
          case Code::RESOURCE_NOT_FOUND_EXCEPTION:
            return "RESOURCE_NOT_FOUND_EXCEPTION";
          case Code::SERVICE_QUOTA_EXCEEDED_EXCEPTION:
            return "SERVICE_QUOTA_EXCEEDED_EXCEPTION";
          case Code::VALIDATION_EXCEPTION:
            return "VALIDATION_EXCEPTION";
          case Code::MALWARE_SCAN_ENCRYPTED_FILE:
            return "MALWARE_SCAN_ENCRYPTED_FILE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CodeMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
