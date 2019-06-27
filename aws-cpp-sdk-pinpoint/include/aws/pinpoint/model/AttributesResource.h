/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the type and the names of attributes that were
   * removed from all the endpoints that are associated with an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/AttributesResource">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API AttributesResource
  {
  public:
    AttributesResource();
    AttributesResource(Aws::Utils::Json::JsonView jsonValue);
    AttributesResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline AttributesResource& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline AttributesResource& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline AttributesResource& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The type of attribute or attributes that were removed from the endpoints.
     * Valid values are:</p> <ul><li><p>endpoint-custom-attributes - Custom attributes
     * that describe endpoints</p></li> <li><p>endpoint-custom-metrics - Custom metrics
     * that your app reports to Amazon Pinpoint for endpoints</p></li>
     * <li><p>endpoint-user-attributes - Custom attributes that describe
     * users</p></li></ul>
     */
    inline const Aws::String& GetAttributeType() const{ return m_attributeType; }

    /**
     * <p>The type of attribute or attributes that were removed from the endpoints.
     * Valid values are:</p> <ul><li><p>endpoint-custom-attributes - Custom attributes
     * that describe endpoints</p></li> <li><p>endpoint-custom-metrics - Custom metrics
     * that your app reports to Amazon Pinpoint for endpoints</p></li>
     * <li><p>endpoint-user-attributes - Custom attributes that describe
     * users</p></li></ul>
     */
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }

    /**
     * <p>The type of attribute or attributes that were removed from the endpoints.
     * Valid values are:</p> <ul><li><p>endpoint-custom-attributes - Custom attributes
     * that describe endpoints</p></li> <li><p>endpoint-custom-metrics - Custom metrics
     * that your app reports to Amazon Pinpoint for endpoints</p></li>
     * <li><p>endpoint-user-attributes - Custom attributes that describe
     * users</p></li></ul>
     */
    inline void SetAttributeType(const Aws::String& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }

    /**
     * <p>The type of attribute or attributes that were removed from the endpoints.
     * Valid values are:</p> <ul><li><p>endpoint-custom-attributes - Custom attributes
     * that describe endpoints</p></li> <li><p>endpoint-custom-metrics - Custom metrics
     * that your app reports to Amazon Pinpoint for endpoints</p></li>
     * <li><p>endpoint-user-attributes - Custom attributes that describe
     * users</p></li></ul>
     */
    inline void SetAttributeType(Aws::String&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }

    /**
     * <p>The type of attribute or attributes that were removed from the endpoints.
     * Valid values are:</p> <ul><li><p>endpoint-custom-attributes - Custom attributes
     * that describe endpoints</p></li> <li><p>endpoint-custom-metrics - Custom metrics
     * that your app reports to Amazon Pinpoint for endpoints</p></li>
     * <li><p>endpoint-user-attributes - Custom attributes that describe
     * users</p></li></ul>
     */
    inline void SetAttributeType(const char* value) { m_attributeTypeHasBeenSet = true; m_attributeType.assign(value); }

    /**
     * <p>The type of attribute or attributes that were removed from the endpoints.
     * Valid values are:</p> <ul><li><p>endpoint-custom-attributes - Custom attributes
     * that describe endpoints</p></li> <li><p>endpoint-custom-metrics - Custom metrics
     * that your app reports to Amazon Pinpoint for endpoints</p></li>
     * <li><p>endpoint-user-attributes - Custom attributes that describe
     * users</p></li></ul>
     */
    inline AttributesResource& WithAttributeType(const Aws::String& value) { SetAttributeType(value); return *this;}

    /**
     * <p>The type of attribute or attributes that were removed from the endpoints.
     * Valid values are:</p> <ul><li><p>endpoint-custom-attributes - Custom attributes
     * that describe endpoints</p></li> <li><p>endpoint-custom-metrics - Custom metrics
     * that your app reports to Amazon Pinpoint for endpoints</p></li>
     * <li><p>endpoint-user-attributes - Custom attributes that describe
     * users</p></li></ul>
     */
    inline AttributesResource& WithAttributeType(Aws::String&& value) { SetAttributeType(std::move(value)); return *this;}

    /**
     * <p>The type of attribute or attributes that were removed from the endpoints.
     * Valid values are:</p> <ul><li><p>endpoint-custom-attributes - Custom attributes
     * that describe endpoints</p></li> <li><p>endpoint-custom-metrics - Custom metrics
     * that your app reports to Amazon Pinpoint for endpoints</p></li>
     * <li><p>endpoint-user-attributes - Custom attributes that describe
     * users</p></li></ul>
     */
    inline AttributesResource& WithAttributeType(const char* value) { SetAttributeType(value); return *this;}


    /**
     * <p>An array that specifies the names of the attributes that were removed from
     * the endpoints.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>An array that specifies the names of the attributes that were removed from
     * the endpoints.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>An array that specifies the names of the attributes that were removed from
     * the endpoints.</p>
     */
    inline void SetAttributes(const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>An array that specifies the names of the attributes that were removed from
     * the endpoints.</p>
     */
    inline void SetAttributes(Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>An array that specifies the names of the attributes that were removed from
     * the endpoints.</p>
     */
    inline AttributesResource& WithAttributes(const Aws::Vector<Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>An array that specifies the names of the attributes that were removed from
     * the endpoints.</p>
     */
    inline AttributesResource& WithAttributes(Aws::Vector<Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>An array that specifies the names of the attributes that were removed from
     * the endpoints.</p>
     */
    inline AttributesResource& AddAttributes(const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>An array that specifies the names of the attributes that were removed from
     * the endpoints.</p>
     */
    inline AttributesResource& AddAttributes(Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that specifies the names of the attributes that were removed from
     * the endpoints.</p>
     */
    inline AttributesResource& AddAttributes(const char* value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_attributeType;
    bool m_attributeTypeHasBeenSet;

    Aws::Vector<Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
