/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/CodegenGenericDataFieldDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyUIBuilder
  {
    namespace Model
    {
      namespace CodegenGenericDataFieldDataTypeMapper
      {

        static constexpr uint32_t ID_HASH = ConstExprHashingUtils::HashString("ID");
        static constexpr uint32_t String_HASH = ConstExprHashingUtils::HashString("String");
        static constexpr uint32_t Int_HASH = ConstExprHashingUtils::HashString("Int");
        static constexpr uint32_t Float_HASH = ConstExprHashingUtils::HashString("Float");
        static constexpr uint32_t AWSDate_HASH = ConstExprHashingUtils::HashString("AWSDate");
        static constexpr uint32_t AWSTime_HASH = ConstExprHashingUtils::HashString("AWSTime");
        static constexpr uint32_t AWSDateTime_HASH = ConstExprHashingUtils::HashString("AWSDateTime");
        static constexpr uint32_t AWSTimestamp_HASH = ConstExprHashingUtils::HashString("AWSTimestamp");
        static constexpr uint32_t AWSEmail_HASH = ConstExprHashingUtils::HashString("AWSEmail");
        static constexpr uint32_t AWSURL_HASH = ConstExprHashingUtils::HashString("AWSURL");
        static constexpr uint32_t AWSIPAddress_HASH = ConstExprHashingUtils::HashString("AWSIPAddress");
        static constexpr uint32_t Boolean_HASH = ConstExprHashingUtils::HashString("Boolean");
        static constexpr uint32_t AWSJSON_HASH = ConstExprHashingUtils::HashString("AWSJSON");
        static constexpr uint32_t AWSPhone_HASH = ConstExprHashingUtils::HashString("AWSPhone");
        static constexpr uint32_t Enum_HASH = ConstExprHashingUtils::HashString("Enum");
        static constexpr uint32_t Model_HASH = ConstExprHashingUtils::HashString("Model");
        static constexpr uint32_t NonModel_HASH = ConstExprHashingUtils::HashString("NonModel");


        CodegenGenericDataFieldDataType GetCodegenGenericDataFieldDataTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ID_HASH)
          {
            return CodegenGenericDataFieldDataType::ID;
          }
          else if (hashCode == String_HASH)
          {
            return CodegenGenericDataFieldDataType::String;
          }
          else if (hashCode == Int_HASH)
          {
            return CodegenGenericDataFieldDataType::Int;
          }
          else if (hashCode == Float_HASH)
          {
            return CodegenGenericDataFieldDataType::Float;
          }
          else if (hashCode == AWSDate_HASH)
          {
            return CodegenGenericDataFieldDataType::AWSDate;
          }
          else if (hashCode == AWSTime_HASH)
          {
            return CodegenGenericDataFieldDataType::AWSTime;
          }
          else if (hashCode == AWSDateTime_HASH)
          {
            return CodegenGenericDataFieldDataType::AWSDateTime;
          }
          else if (hashCode == AWSTimestamp_HASH)
          {
            return CodegenGenericDataFieldDataType::AWSTimestamp;
          }
          else if (hashCode == AWSEmail_HASH)
          {
            return CodegenGenericDataFieldDataType::AWSEmail;
          }
          else if (hashCode == AWSURL_HASH)
          {
            return CodegenGenericDataFieldDataType::AWSURL;
          }
          else if (hashCode == AWSIPAddress_HASH)
          {
            return CodegenGenericDataFieldDataType::AWSIPAddress;
          }
          else if (hashCode == Boolean_HASH)
          {
            return CodegenGenericDataFieldDataType::Boolean;
          }
          else if (hashCode == AWSJSON_HASH)
          {
            return CodegenGenericDataFieldDataType::AWSJSON;
          }
          else if (hashCode == AWSPhone_HASH)
          {
            return CodegenGenericDataFieldDataType::AWSPhone;
          }
          else if (hashCode == Enum_HASH)
          {
            return CodegenGenericDataFieldDataType::Enum;
          }
          else if (hashCode == Model_HASH)
          {
            return CodegenGenericDataFieldDataType::Model;
          }
          else if (hashCode == NonModel_HASH)
          {
            return CodegenGenericDataFieldDataType::NonModel;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CodegenGenericDataFieldDataType>(hashCode);
          }

          return CodegenGenericDataFieldDataType::NOT_SET;
        }

        Aws::String GetNameForCodegenGenericDataFieldDataType(CodegenGenericDataFieldDataType enumValue)
        {
          switch(enumValue)
          {
          case CodegenGenericDataFieldDataType::NOT_SET:
            return {};
          case CodegenGenericDataFieldDataType::ID:
            return "ID";
          case CodegenGenericDataFieldDataType::String:
            return "String";
          case CodegenGenericDataFieldDataType::Int:
            return "Int";
          case CodegenGenericDataFieldDataType::Float:
            return "Float";
          case CodegenGenericDataFieldDataType::AWSDate:
            return "AWSDate";
          case CodegenGenericDataFieldDataType::AWSTime:
            return "AWSTime";
          case CodegenGenericDataFieldDataType::AWSDateTime:
            return "AWSDateTime";
          case CodegenGenericDataFieldDataType::AWSTimestamp:
            return "AWSTimestamp";
          case CodegenGenericDataFieldDataType::AWSEmail:
            return "AWSEmail";
          case CodegenGenericDataFieldDataType::AWSURL:
            return "AWSURL";
          case CodegenGenericDataFieldDataType::AWSIPAddress:
            return "AWSIPAddress";
          case CodegenGenericDataFieldDataType::Boolean:
            return "Boolean";
          case CodegenGenericDataFieldDataType::AWSJSON:
            return "AWSJSON";
          case CodegenGenericDataFieldDataType::AWSPhone:
            return "AWSPhone";
          case CodegenGenericDataFieldDataType::Enum:
            return "Enum";
          case CodegenGenericDataFieldDataType::Model:
            return "Model";
          case CodegenGenericDataFieldDataType::NonModel:
            return "NonModel";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CodegenGenericDataFieldDataTypeMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws
