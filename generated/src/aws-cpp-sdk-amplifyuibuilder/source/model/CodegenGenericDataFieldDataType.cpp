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

        static const int ID_HASH = HashingUtils::HashString("ID");
        static const int String_HASH = HashingUtils::HashString("String");
        static const int Int_HASH = HashingUtils::HashString("Int");
        static const int Float_HASH = HashingUtils::HashString("Float");
        static const int AWSDate_HASH = HashingUtils::HashString("AWSDate");
        static const int AWSTime_HASH = HashingUtils::HashString("AWSTime");
        static const int AWSDateTime_HASH = HashingUtils::HashString("AWSDateTime");
        static const int AWSTimestamp_HASH = HashingUtils::HashString("AWSTimestamp");
        static const int AWSEmail_HASH = HashingUtils::HashString("AWSEmail");
        static const int AWSURL_HASH = HashingUtils::HashString("AWSURL");
        static const int AWSIPAddress_HASH = HashingUtils::HashString("AWSIPAddress");
        static const int Boolean_HASH = HashingUtils::HashString("Boolean");
        static const int AWSJSON_HASH = HashingUtils::HashString("AWSJSON");
        static const int AWSPhone_HASH = HashingUtils::HashString("AWSPhone");
        static const int Enum_HASH = HashingUtils::HashString("Enum");
        static const int Model_HASH = HashingUtils::HashString("Model");
        static const int NonModel_HASH = HashingUtils::HashString("NonModel");


        CodegenGenericDataFieldDataType GetCodegenGenericDataFieldDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
