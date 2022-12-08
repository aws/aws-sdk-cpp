/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/DimensionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateDimensionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateDimensionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDimension"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline CreateDimensionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline CreateDimensionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline CreateDimensionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the type of dimension. Supported types: <code>TOPIC_FILTER.</code>
     * </p>
     */
    inline const DimensionType& GetType() const{ return m_type; }

    /**
     * <p>Specifies the type of dimension. Supported types: <code>TOPIC_FILTER.</code>
     * </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies the type of dimension. Supported types: <code>TOPIC_FILTER.</code>
     * </p>
     */
    inline void SetType(const DimensionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the type of dimension. Supported types: <code>TOPIC_FILTER.</code>
     * </p>
     */
    inline void SetType(DimensionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies the type of dimension. Supported types: <code>TOPIC_FILTER.</code>
     * </p>
     */
    inline CreateDimensionRequest& WithType(const DimensionType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the type of dimension. Supported types: <code>TOPIC_FILTER.</code>
     * </p>
     */
    inline CreateDimensionRequest& WithType(DimensionType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValues() const{ return m_stringValues; }

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline bool StringValuesHasBeenSet() const { return m_stringValuesHasBeenSet; }

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline void SetStringValues(const Aws::Vector<Aws::String>& value) { m_stringValuesHasBeenSet = true; m_stringValues = value; }

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline void SetStringValues(Aws::Vector<Aws::String>&& value) { m_stringValuesHasBeenSet = true; m_stringValues = std::move(value); }

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline CreateDimensionRequest& WithStringValues(const Aws::Vector<Aws::String>& value) { SetStringValues(value); return *this;}

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline CreateDimensionRequest& WithStringValues(Aws::Vector<Aws::String>&& value) { SetStringValues(std::move(value)); return *this;}

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline CreateDimensionRequest& AddStringValues(const Aws::String& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline CreateDimensionRequest& AddStringValues(Aws::String&& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline CreateDimensionRequest& AddStringValues(const char* value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }


    /**
     * <p>Metadata that can be used to manage the dimension.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata that can be used to manage the dimension.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata that can be used to manage the dimension.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata that can be used to manage the dimension.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata that can be used to manage the dimension.</p>
     */
    inline CreateDimensionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata that can be used to manage the dimension.</p>
     */
    inline CreateDimensionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that can be used to manage the dimension.</p>
     */
    inline CreateDimensionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata that can be used to manage the dimension.</p>
     */
    inline CreateDimensionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Each dimension must have a unique client request token. If you try to create
     * a new dimension with the same token as a dimension that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Each dimension must have a unique client request token. If you try to create
     * a new dimension with the same token as a dimension that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Each dimension must have a unique client request token. If you try to create
     * a new dimension with the same token as a dimension that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Each dimension must have a unique client request token. If you try to create
     * a new dimension with the same token as a dimension that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Each dimension must have a unique client request token. If you try to create
     * a new dimension with the same token as a dimension that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Each dimension must have a unique client request token. If you try to create
     * a new dimension with the same token as a dimension that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline CreateDimensionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Each dimension must have a unique client request token. If you try to create
     * a new dimension with the same token as a dimension that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline CreateDimensionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Each dimension must have a unique client request token. If you try to create
     * a new dimension with the same token as a dimension that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline CreateDimensionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DimensionType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringValues;
    bool m_stringValuesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
