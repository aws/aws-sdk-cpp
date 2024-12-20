/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ScalarAttributeType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  class KeySchemaElement
  {
  public:
    AWS_DYNAMODB_API KeySchemaElement();
    AWS_DYNAMODB_API KeySchemaElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API KeySchemaElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }
    inline KeySchemaElement& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}
    inline KeySchemaElement& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}
    inline KeySchemaElement& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}
    ///@}

    ///@{
    
    inline const ScalarAttributeType& GetAttributeType() const{ return m_attributeType; }
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
    inline void SetAttributeType(const ScalarAttributeType& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }
    inline void SetAttributeType(ScalarAttributeType&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }
    inline KeySchemaElement& WithAttributeType(const ScalarAttributeType& value) { SetAttributeType(value); return *this;}
    inline KeySchemaElement& WithAttributeType(ScalarAttributeType&& value) { SetAttributeType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    ScalarAttributeType m_attributeType;
    bool m_attributeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
