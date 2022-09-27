﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>An entity attribute that's unique to a specific entity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/UniqueAttribute">AWS
   * API Reference</a></p>
   */
  class AWS_IDENTITYSTORE_API UniqueAttribute
  {
  public:
    UniqueAttribute();
    UniqueAttribute(Aws::Utils::Json::JsonView jsonValue);
    UniqueAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string representation of the path to a given attribute or sub-attribute.
     * Supports JMESPath.</p>
     */
    inline const Aws::String& GetAttributePath() const{ return m_attributePath; }

    /**
     * <p>A string representation of the path to a given attribute or sub-attribute.
     * Supports JMESPath.</p>
     */
    inline bool AttributePathHasBeenSet() const { return m_attributePathHasBeenSet; }

    /**
     * <p>A string representation of the path to a given attribute or sub-attribute.
     * Supports JMESPath.</p>
     */
    inline void SetAttributePath(const Aws::String& value) { m_attributePathHasBeenSet = true; m_attributePath = value; }

    /**
     * <p>A string representation of the path to a given attribute or sub-attribute.
     * Supports JMESPath.</p>
     */
    inline void SetAttributePath(Aws::String&& value) { m_attributePathHasBeenSet = true; m_attributePath = std::move(value); }

    /**
     * <p>A string representation of the path to a given attribute or sub-attribute.
     * Supports JMESPath.</p>
     */
    inline void SetAttributePath(const char* value) { m_attributePathHasBeenSet = true; m_attributePath.assign(value); }

    /**
     * <p>A string representation of the path to a given attribute or sub-attribute.
     * Supports JMESPath.</p>
     */
    inline UniqueAttribute& WithAttributePath(const Aws::String& value) { SetAttributePath(value); return *this;}

    /**
     * <p>A string representation of the path to a given attribute or sub-attribute.
     * Supports JMESPath.</p>
     */
    inline UniqueAttribute& WithAttributePath(Aws::String&& value) { SetAttributePath(std::move(value)); return *this;}

    /**
     * <p>A string representation of the path to a given attribute or sub-attribute.
     * Supports JMESPath.</p>
     */
    inline UniqueAttribute& WithAttributePath(const char* value) { SetAttributePath(value); return *this;}


    /**
     * <p>The value of the attribute. This is a <code>Document</code> type. This type
     * is not supported by Java V1, Go V1, and older versions of the AWS CLI.</p>
     */
    inline Aws::Utils::DocumentView GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>The value of the attribute. This is a <code>Document</code> type. This type
     * is not supported by Java V1, Go V1, and older versions of the AWS CLI.</p>
     */
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }

    /**
     * <p>The value of the attribute. This is a <code>Document</code> type. This type
     * is not supported by Java V1, Go V1, and older versions of the AWS CLI.</p>
     */
    inline void SetAttributeValue(const Aws::Utils::Document& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The value of the attribute. This is a <code>Document</code> type. This type
     * is not supported by Java V1, Go V1, and older versions of the AWS CLI.</p>
     */
    inline void SetAttributeValue(Aws::Utils::Document&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }

    /**
     * <p>The value of the attribute. This is a <code>Document</code> type. This type
     * is not supported by Java V1, Go V1, and older versions of the AWS CLI.</p>
     */
    inline UniqueAttribute& WithAttributeValue(const Aws::Utils::Document& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The value of the attribute. This is a <code>Document</code> type. This type
     * is not supported by Java V1, Go V1, and older versions of the AWS CLI.</p>
     */
    inline UniqueAttribute& WithAttributeValue(Aws::Utils::Document&& value) { SetAttributeValue(std::move(value)); return *this;}

  private:

    Aws::String m_attributePath;
    bool m_attributePathHasBeenSet = false;

    Aws::Utils::Document m_attributeValue;
    bool m_attributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
