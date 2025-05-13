/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/DocumentClassifierInputDataConfig.h>
#include <aws/comprehend/model/DocumentClassifierOutputDataConfig.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/comprehend/model/VpcConfig.h>
#include <aws/comprehend/model/DocumentClassifierMode.h>
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
  class CreateDocumentClassifierRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API CreateDocumentClassifierRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDocumentClassifier"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the document classifier.</p>
     */
    inline const Aws::String& GetDocumentClassifierName() const { return m_documentClassifierName; }
    inline bool DocumentClassifierNameHasBeenSet() const { return m_documentClassifierNameHasBeenSet; }
    template<typename DocumentClassifierNameT = Aws::String>
    void SetDocumentClassifierName(DocumentClassifierNameT&& value) { m_documentClassifierNameHasBeenSet = true; m_documentClassifierName = std::forward<DocumentClassifierNameT>(value); }
    template<typename DocumentClassifierNameT = Aws::String>
    CreateDocumentClassifierRequest& WithDocumentClassifierName(DocumentClassifierNameT&& value) { SetDocumentClassifierName(std::forward<DocumentClassifierNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version name given to the newly created classifier. Version names can
     * have a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same classifier name in the Amazon Web Services account/Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    CreateDocumentClassifierRequest& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * read access to your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    CreateDocumentClassifierRequest& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to associate with the document classifier. A tag is a key-value pair
     * that adds as a metadata to a resource used by Amazon Comprehend. For example, a
     * tag with "Sales" as the key might be added to a resource to indicate its use by
     * the sales department. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDocumentClassifierRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDocumentClassifierRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline const DocumentClassifierInputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    template<typename InputDataConfigT = DocumentClassifierInputDataConfig>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = DocumentClassifierInputDataConfig>
    CreateDocumentClassifierRequest& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the location for the output files from a custom classifier job.
     * This parameter is required for a request that creates a native document
     * model.</p>
     */
    inline const DocumentClassifierOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = DocumentClassifierOutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = DocumentClassifierOutputDataConfig>
    CreateDocumentClassifierRequest& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateDocumentClassifierRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language of the input documents. You can specify any of the languages
     * supported by Amazon Comprehend. All documents must be in the same language.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline CreateDocumentClassifierRequest& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the Amazon Web Services Key Management Service (KMS) key that Amazon
     * Comprehend uses to encrypt data on the storage volume attached to the ML compute
     * instance(s) that process the analysis job. The VolumeKmsKeyId can be either of
     * the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const { return m_volumeKmsKeyId; }
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }
    template<typename VolumeKmsKeyIdT = Aws::String>
    void SetVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::forward<VolumeKmsKeyIdT>(value); }
    template<typename VolumeKmsKeyIdT = Aws::String>
    CreateDocumentClassifierRequest& WithVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { SetVolumeKmsKeyId(std::forward<VolumeKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom classifier. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    CreateDocumentClassifierRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the mode in which the classifier will be trained. The classifier
     * can be trained in multi-class (single-label) mode or multi-label mode.
     * Multi-class mode identifies a single class label for each document and
     * multi-label mode identifies one or more class labels for each document. Multiple
     * labels for an individual document are separated by a delimiter. The default
     * delimiter between labels is a pipe (|).</p>
     */
    inline DocumentClassifierMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(DocumentClassifierMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline CreateDocumentClassifierRequest& WithMode(DocumentClassifierMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt trained custom
     * models. The ModelKmsKeyId can be either of the following formats:</p> <ul> <li>
     * <p>KMS Key ID: <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li>
     * <li> <p>Amazon Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetModelKmsKeyId() const { return m_modelKmsKeyId; }
    inline bool ModelKmsKeyIdHasBeenSet() const { return m_modelKmsKeyIdHasBeenSet; }
    template<typename ModelKmsKeyIdT = Aws::String>
    void SetModelKmsKeyId(ModelKmsKeyIdT&& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = std::forward<ModelKmsKeyIdT>(value); }
    template<typename ModelKmsKeyIdT = Aws::String>
    CreateDocumentClassifierRequest& WithModelKmsKeyId(ModelKmsKeyIdT&& value) { SetModelKmsKeyId(std::forward<ModelKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource-based policy to attach to your custom document classifier model.
     * You can use this policy to allow another Amazon Web Services account to import
     * your custom model.</p> <p>Provide your policy as a JSON body that you enter as a
     * UTF-8 encoded string without line breaks. To provide valid JSON, enclose the
     * attribute names and values in double quotes. If the JSON body is also enclosed
     * in double quotes, then you must escape the double quotes that are inside the
     * policy:</p> <p> <code>"{\"attribute\": \"value\", \"attribute\":
     * [\"value\"]}"</code> </p> <p>To avoid escaping quotes, you can use single quotes
     * to enclose the policy and double quotes to enclose the JSON names and
     * values:</p> <p> <code>'{"attribute": "value", "attribute": ["value"]}'</code>
     * </p>
     */
    inline const Aws::String& GetModelPolicy() const { return m_modelPolicy; }
    inline bool ModelPolicyHasBeenSet() const { return m_modelPolicyHasBeenSet; }
    template<typename ModelPolicyT = Aws::String>
    void SetModelPolicy(ModelPolicyT&& value) { m_modelPolicyHasBeenSet = true; m_modelPolicy = std::forward<ModelPolicyT>(value); }
    template<typename ModelPolicyT = Aws::String>
    CreateDocumentClassifierRequest& WithModelPolicy(ModelPolicyT&& value) { SetModelPolicy(std::forward<ModelPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_documentClassifierName;
    bool m_documentClassifierNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DocumentClassifierInputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    DocumentClassifierOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    DocumentClassifierMode m_mode{DocumentClassifierMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    Aws::String m_modelKmsKeyId;
    bool m_modelKmsKeyIdHasBeenSet = false;

    Aws::String m_modelPolicy;
    bool m_modelPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
