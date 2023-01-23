/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class CreateEndpointRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API CreateEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEndpoint"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>This is the descriptive suffix that becomes part of the
     * <code>EndpointArn</code> used for all subsequent requests to this resource. </p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>This is the descriptive suffix that becomes part of the
     * <code>EndpointArn</code> used for all subsequent requests to this resource. </p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>This is the descriptive suffix that becomes part of the
     * <code>EndpointArn</code> used for all subsequent requests to this resource. </p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>This is the descriptive suffix that becomes part of the
     * <code>EndpointArn</code> used for all subsequent requests to this resource. </p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>This is the descriptive suffix that becomes part of the
     * <code>EndpointArn</code> used for all subsequent requests to this resource. </p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>This is the descriptive suffix that becomes part of the
     * <code>EndpointArn</code> used for all subsequent requests to this resource. </p>
     */
    inline CreateEndpointRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>This is the descriptive suffix that becomes part of the
     * <code>EndpointArn</code> used for all subsequent requests to this resource. </p>
     */
    inline CreateEndpointRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>This is the descriptive suffix that becomes part of the
     * <code>EndpointArn</code> used for all subsequent requests to this resource. </p>
     */
    inline CreateEndpointRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint will be
     * attached.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint will be
     * attached.</p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint will be
     * attached.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint will be
     * attached.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint will be
     * attached.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint will be
     * attached.</p>
     */
    inline CreateEndpointRequest& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint will be
     * attached.</p>
     */
    inline CreateEndpointRequest& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint will be
     * attached.</p>
     */
    inline CreateEndpointRequest& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p> The desired number of inference units to be used by the model using this
     * endpoint. Each inference unit represents of a throughput of 100 characters per
     * second.</p>
     */
    inline int GetDesiredInferenceUnits() const{ return m_desiredInferenceUnits; }

    /**
     * <p> The desired number of inference units to be used by the model using this
     * endpoint. Each inference unit represents of a throughput of 100 characters per
     * second.</p>
     */
    inline bool DesiredInferenceUnitsHasBeenSet() const { return m_desiredInferenceUnitsHasBeenSet; }

    /**
     * <p> The desired number of inference units to be used by the model using this
     * endpoint. Each inference unit represents of a throughput of 100 characters per
     * second.</p>
     */
    inline void SetDesiredInferenceUnits(int value) { m_desiredInferenceUnitsHasBeenSet = true; m_desiredInferenceUnits = value; }

    /**
     * <p> The desired number of inference units to be used by the model using this
     * endpoint. Each inference unit represents of a throughput of 100 characters per
     * second.</p>
     */
    inline CreateEndpointRequest& WithDesiredInferenceUnits(int value) { SetDesiredInferenceUnits(value); return *this;}


    /**
     * <p>An idempotency token provided by the customer. If this token matches a
     * previous endpoint creation request, Amazon Comprehend will not return a
     * <code>ResourceInUseException</code>. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>An idempotency token provided by the customer. If this token matches a
     * previous endpoint creation request, Amazon Comprehend will not return a
     * <code>ResourceInUseException</code>. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>An idempotency token provided by the customer. If this token matches a
     * previous endpoint creation request, Amazon Comprehend will not return a
     * <code>ResourceInUseException</code>. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>An idempotency token provided by the customer. If this token matches a
     * previous endpoint creation request, Amazon Comprehend will not return a
     * <code>ResourceInUseException</code>. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>An idempotency token provided by the customer. If this token matches a
     * previous endpoint creation request, Amazon Comprehend will not return a
     * <code>ResourceInUseException</code>. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>An idempotency token provided by the customer. If this token matches a
     * previous endpoint creation request, Amazon Comprehend will not return a
     * <code>ResourceInUseException</code>. </p>
     */
    inline CreateEndpointRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>An idempotency token provided by the customer. If this token matches a
     * previous endpoint creation request, Amazon Comprehend will not return a
     * <code>ResourceInUseException</code>. </p>
     */
    inline CreateEndpointRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>An idempotency token provided by the customer. If this token matches a
     * previous endpoint creation request, Amazon Comprehend will not return a
     * <code>ResourceInUseException</code>. </p>
     */
    inline CreateEndpointRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Tags associated with the endpoint being created. A tag is a key-value pair
     * that adds metadata to the endpoint. For example, a tag with "Sales" as the key
     * might be added to an endpoint to indicate its use by the sales department. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the endpoint being created. A tag is a key-value pair
     * that adds metadata to the endpoint. For example, a tag with "Sales" as the key
     * might be added to an endpoint to indicate its use by the sales department. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags associated with the endpoint being created. A tag is a key-value pair
     * that adds metadata to the endpoint. For example, a tag with "Sales" as the key
     * might be added to an endpoint to indicate its use by the sales department. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags associated with the endpoint being created. A tag is a key-value pair
     * that adds metadata to the endpoint. For example, a tag with "Sales" as the key
     * might be added to an endpoint to indicate its use by the sales department. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags associated with the endpoint being created. A tag is a key-value pair
     * that adds metadata to the endpoint. For example, a tag with "Sales" as the key
     * might be added to an endpoint to indicate its use by the sales department. </p>
     */
    inline CreateEndpointRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the endpoint being created. A tag is a key-value pair
     * that adds metadata to the endpoint. For example, a tag with "Sales" as the key
     * might be added to an endpoint to indicate its use by the sales department. </p>
     */
    inline CreateEndpointRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the endpoint being created. A tag is a key-value pair
     * that adds metadata to the endpoint. For example, a tag with "Sales" as the key
     * might be added to an endpoint to indicate its use by the sales department. </p>
     */
    inline CreateEndpointRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags associated with the endpoint being created. A tag is a key-value pair
     * that adds metadata to the endpoint. For example, a tag with "Sales" as the key
     * might be added to an endpoint to indicate its use by the sales department. </p>
     */
    inline CreateEndpointRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline CreateEndpointRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline CreateEndpointRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to trained custom models
     * encrypted with a customer managed key (ModelKmsKeyId).</p>
     */
    inline CreateEndpointRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    int m_desiredInferenceUnits;
    bool m_desiredInferenceUnitsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
