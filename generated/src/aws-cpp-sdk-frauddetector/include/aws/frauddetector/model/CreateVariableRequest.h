/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/DataType.h>
#include <aws/frauddetector/model/DataSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/Tag.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class CreateVariableRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API CreateVariableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVariable"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the variable.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the variable.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the variable.</p>
     */
    inline CreateVariableRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the variable.</p>
     */
    inline CreateVariableRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the variable.</p>
     */
    inline CreateVariableRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data type.</p>
     */
    inline const DataType& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type.</p>
     */
    inline void SetDataType(const DataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type.</p>
     */
    inline void SetDataType(DataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type.</p>
     */
    inline CreateVariableRequest& WithDataType(const DataType& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type.</p>
     */
    inline CreateVariableRequest& WithDataType(DataType&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>The source of the data.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The source of the data.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The source of the data.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The source of the data.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The source of the data.</p>
     */
    inline CreateVariableRequest& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The source of the data.</p>
     */
    inline CreateVariableRequest& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline CreateVariableRequest& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline CreateVariableRequest& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline CreateVariableRequest& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline CreateVariableRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline CreateVariableRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline CreateVariableRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p> <p>Valid Values: <code>AUTH_CODE | AVS | BILLING_ADDRESS_L1 |
     * BILLING_ADDRESS_L2 | BILLING_CITY | BILLING_COUNTRY | BILLING_NAME |
     * BILLING_PHONE | BILLING_STATE | BILLING_ZIP | CARD_BIN | CATEGORICAL |
     * CURRENCY_CODE | EMAIL_ADDRESS | FINGERPRINT | FRAUD_LABEL | FREE_FORM_TEXT |
     * IP_ADDRESS | NUMERIC | ORDER_ID | PAYMENT_TYPE | PHONE_NUMBER | PRICE |
     * PRODUCT_CATEGORY | SHIPPING_ADDRESS_L1 | SHIPPING_ADDRESS_L2 | SHIPPING_CITY |
     * SHIPPING_COUNTRY | SHIPPING_NAME | SHIPPING_PHONE | SHIPPING_STATE |
     * SHIPPING_ZIP | USERAGENT</code> </p>
     */
    inline const Aws::String& GetVariableType() const{ return m_variableType; }

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p> <p>Valid Values: <code>AUTH_CODE | AVS | BILLING_ADDRESS_L1 |
     * BILLING_ADDRESS_L2 | BILLING_CITY | BILLING_COUNTRY | BILLING_NAME |
     * BILLING_PHONE | BILLING_STATE | BILLING_ZIP | CARD_BIN | CATEGORICAL |
     * CURRENCY_CODE | EMAIL_ADDRESS | FINGERPRINT | FRAUD_LABEL | FREE_FORM_TEXT |
     * IP_ADDRESS | NUMERIC | ORDER_ID | PAYMENT_TYPE | PHONE_NUMBER | PRICE |
     * PRODUCT_CATEGORY | SHIPPING_ADDRESS_L1 | SHIPPING_ADDRESS_L2 | SHIPPING_CITY |
     * SHIPPING_COUNTRY | SHIPPING_NAME | SHIPPING_PHONE | SHIPPING_STATE |
     * SHIPPING_ZIP | USERAGENT</code> </p>
     */
    inline bool VariableTypeHasBeenSet() const { return m_variableTypeHasBeenSet; }

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p> <p>Valid Values: <code>AUTH_CODE | AVS | BILLING_ADDRESS_L1 |
     * BILLING_ADDRESS_L2 | BILLING_CITY | BILLING_COUNTRY | BILLING_NAME |
     * BILLING_PHONE | BILLING_STATE | BILLING_ZIP | CARD_BIN | CATEGORICAL |
     * CURRENCY_CODE | EMAIL_ADDRESS | FINGERPRINT | FRAUD_LABEL | FREE_FORM_TEXT |
     * IP_ADDRESS | NUMERIC | ORDER_ID | PAYMENT_TYPE | PHONE_NUMBER | PRICE |
     * PRODUCT_CATEGORY | SHIPPING_ADDRESS_L1 | SHIPPING_ADDRESS_L2 | SHIPPING_CITY |
     * SHIPPING_COUNTRY | SHIPPING_NAME | SHIPPING_PHONE | SHIPPING_STATE |
     * SHIPPING_ZIP | USERAGENT</code> </p>
     */
    inline void SetVariableType(const Aws::String& value) { m_variableTypeHasBeenSet = true; m_variableType = value; }

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p> <p>Valid Values: <code>AUTH_CODE | AVS | BILLING_ADDRESS_L1 |
     * BILLING_ADDRESS_L2 | BILLING_CITY | BILLING_COUNTRY | BILLING_NAME |
     * BILLING_PHONE | BILLING_STATE | BILLING_ZIP | CARD_BIN | CATEGORICAL |
     * CURRENCY_CODE | EMAIL_ADDRESS | FINGERPRINT | FRAUD_LABEL | FREE_FORM_TEXT |
     * IP_ADDRESS | NUMERIC | ORDER_ID | PAYMENT_TYPE | PHONE_NUMBER | PRICE |
     * PRODUCT_CATEGORY | SHIPPING_ADDRESS_L1 | SHIPPING_ADDRESS_L2 | SHIPPING_CITY |
     * SHIPPING_COUNTRY | SHIPPING_NAME | SHIPPING_PHONE | SHIPPING_STATE |
     * SHIPPING_ZIP | USERAGENT</code> </p>
     */
    inline void SetVariableType(Aws::String&& value) { m_variableTypeHasBeenSet = true; m_variableType = std::move(value); }

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p> <p>Valid Values: <code>AUTH_CODE | AVS | BILLING_ADDRESS_L1 |
     * BILLING_ADDRESS_L2 | BILLING_CITY | BILLING_COUNTRY | BILLING_NAME |
     * BILLING_PHONE | BILLING_STATE | BILLING_ZIP | CARD_BIN | CATEGORICAL |
     * CURRENCY_CODE | EMAIL_ADDRESS | FINGERPRINT | FRAUD_LABEL | FREE_FORM_TEXT |
     * IP_ADDRESS | NUMERIC | ORDER_ID | PAYMENT_TYPE | PHONE_NUMBER | PRICE |
     * PRODUCT_CATEGORY | SHIPPING_ADDRESS_L1 | SHIPPING_ADDRESS_L2 | SHIPPING_CITY |
     * SHIPPING_COUNTRY | SHIPPING_NAME | SHIPPING_PHONE | SHIPPING_STATE |
     * SHIPPING_ZIP | USERAGENT</code> </p>
     */
    inline void SetVariableType(const char* value) { m_variableTypeHasBeenSet = true; m_variableType.assign(value); }

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p> <p>Valid Values: <code>AUTH_CODE | AVS | BILLING_ADDRESS_L1 |
     * BILLING_ADDRESS_L2 | BILLING_CITY | BILLING_COUNTRY | BILLING_NAME |
     * BILLING_PHONE | BILLING_STATE | BILLING_ZIP | CARD_BIN | CATEGORICAL |
     * CURRENCY_CODE | EMAIL_ADDRESS | FINGERPRINT | FRAUD_LABEL | FREE_FORM_TEXT |
     * IP_ADDRESS | NUMERIC | ORDER_ID | PAYMENT_TYPE | PHONE_NUMBER | PRICE |
     * PRODUCT_CATEGORY | SHIPPING_ADDRESS_L1 | SHIPPING_ADDRESS_L2 | SHIPPING_CITY |
     * SHIPPING_COUNTRY | SHIPPING_NAME | SHIPPING_PHONE | SHIPPING_STATE |
     * SHIPPING_ZIP | USERAGENT</code> </p>
     */
    inline CreateVariableRequest& WithVariableType(const Aws::String& value) { SetVariableType(value); return *this;}

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p> <p>Valid Values: <code>AUTH_CODE | AVS | BILLING_ADDRESS_L1 |
     * BILLING_ADDRESS_L2 | BILLING_CITY | BILLING_COUNTRY | BILLING_NAME |
     * BILLING_PHONE | BILLING_STATE | BILLING_ZIP | CARD_BIN | CATEGORICAL |
     * CURRENCY_CODE | EMAIL_ADDRESS | FINGERPRINT | FRAUD_LABEL | FREE_FORM_TEXT |
     * IP_ADDRESS | NUMERIC | ORDER_ID | PAYMENT_TYPE | PHONE_NUMBER | PRICE |
     * PRODUCT_CATEGORY | SHIPPING_ADDRESS_L1 | SHIPPING_ADDRESS_L2 | SHIPPING_CITY |
     * SHIPPING_COUNTRY | SHIPPING_NAME | SHIPPING_PHONE | SHIPPING_STATE |
     * SHIPPING_ZIP | USERAGENT</code> </p>
     */
    inline CreateVariableRequest& WithVariableType(Aws::String&& value) { SetVariableType(std::move(value)); return *this;}

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p> <p>Valid Values: <code>AUTH_CODE | AVS | BILLING_ADDRESS_L1 |
     * BILLING_ADDRESS_L2 | BILLING_CITY | BILLING_COUNTRY | BILLING_NAME |
     * BILLING_PHONE | BILLING_STATE | BILLING_ZIP | CARD_BIN | CATEGORICAL |
     * CURRENCY_CODE | EMAIL_ADDRESS | FINGERPRINT | FRAUD_LABEL | FREE_FORM_TEXT |
     * IP_ADDRESS | NUMERIC | ORDER_ID | PAYMENT_TYPE | PHONE_NUMBER | PRICE |
     * PRODUCT_CATEGORY | SHIPPING_ADDRESS_L1 | SHIPPING_ADDRESS_L2 | SHIPPING_CITY |
     * SHIPPING_COUNTRY | SHIPPING_NAME | SHIPPING_PHONE | SHIPPING_STATE |
     * SHIPPING_ZIP | USERAGENT</code> </p>
     */
    inline CreateVariableRequest& WithVariableType(const char* value) { SetVariableType(value); return *this;}


    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateVariableRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateVariableRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateVariableRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateVariableRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_variableType;
    bool m_variableTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
