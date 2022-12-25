/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/comprehend/model/InputDataConfig.h>
#include <aws/comprehend/model/OutputDataConfig.h>
#include <aws/comprehend/model/PiiEntitiesDetectionMode.h>
#include <aws/comprehend/model/RedactionConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/LanguageCode.h>
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
  class StartPiiEntitiesDetectionJobRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API StartPiiEntitiesDetectionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartPiiEntitiesDetectionJob"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The input properties for a PII entities detection job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>The input properties for a PII entities detection job.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>The input properties for a PII entities detection job.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>The input properties for a PII entities detection job.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>The input properties for a PII entities detection job.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>The input properties for a PII entities detection job.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>Provides conﬁguration parameters for the output of PII entity detection
     * jobs.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>Provides conﬁguration parameters for the output of PII entity detection
     * jobs.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>Provides conﬁguration parameters for the output of PII entity detection
     * jobs.</p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>Provides conﬁguration parameters for the output of PII entity detection
     * jobs.</p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>Provides conﬁguration parameters for the output of PII entity detection
     * jobs.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>Provides conﬁguration parameters for the output of PII entity detection
     * jobs.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the output provides the locations (offsets) of PII entities
     * or a file in which PII entities are redacted.</p>
     */
    inline const PiiEntitiesDetectionMode& GetMode() const{ return m_mode; }

    /**
     * <p>Specifies whether the output provides the locations (offsets) of PII entities
     * or a file in which PII entities are redacted.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Specifies whether the output provides the locations (offsets) of PII entities
     * or a file in which PII entities are redacted.</p>
     */
    inline void SetMode(const PiiEntitiesDetectionMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Specifies whether the output provides the locations (offsets) of PII entities
     * or a file in which PII entities are redacted.</p>
     */
    inline void SetMode(PiiEntitiesDetectionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Specifies whether the output provides the locations (offsets) of PII entities
     * or a file in which PII entities are redacted.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithMode(const PiiEntitiesDetectionMode& value) { SetMode(value); return *this;}

    /**
     * <p>Specifies whether the output provides the locations (offsets) of PII entities
     * or a file in which PII entities are redacted.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithMode(PiiEntitiesDetectionMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>Provides configuration parameters for PII entity redaction.</p> <p>This
     * parameter is required if you set the <code>Mode</code> parameter to
     * <code>ONLY_REDACTION</code>. In that case, you must provide a
     * <code>RedactionConfig</code> definition that includes the
     * <code>PiiEntityTypes</code> parameter.</p>
     */
    inline const RedactionConfig& GetRedactionConfig() const{ return m_redactionConfig; }

    /**
     * <p>Provides configuration parameters for PII entity redaction.</p> <p>This
     * parameter is required if you set the <code>Mode</code> parameter to
     * <code>ONLY_REDACTION</code>. In that case, you must provide a
     * <code>RedactionConfig</code> definition that includes the
     * <code>PiiEntityTypes</code> parameter.</p>
     */
    inline bool RedactionConfigHasBeenSet() const { return m_redactionConfigHasBeenSet; }

    /**
     * <p>Provides configuration parameters for PII entity redaction.</p> <p>This
     * parameter is required if you set the <code>Mode</code> parameter to
     * <code>ONLY_REDACTION</code>. In that case, you must provide a
     * <code>RedactionConfig</code> definition that includes the
     * <code>PiiEntityTypes</code> parameter.</p>
     */
    inline void SetRedactionConfig(const RedactionConfig& value) { m_redactionConfigHasBeenSet = true; m_redactionConfig = value; }

    /**
     * <p>Provides configuration parameters for PII entity redaction.</p> <p>This
     * parameter is required if you set the <code>Mode</code> parameter to
     * <code>ONLY_REDACTION</code>. In that case, you must provide a
     * <code>RedactionConfig</code> definition that includes the
     * <code>PiiEntityTypes</code> parameter.</p>
     */
    inline void SetRedactionConfig(RedactionConfig&& value) { m_redactionConfigHasBeenSet = true; m_redactionConfig = std::move(value); }

    /**
     * <p>Provides configuration parameters for PII entity redaction.</p> <p>This
     * parameter is required if you set the <code>Mode</code> parameter to
     * <code>ONLY_REDACTION</code>. In that case, you must provide a
     * <code>RedactionConfig</code> definition that includes the
     * <code>PiiEntityTypes</code> parameter.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithRedactionConfig(const RedactionConfig& value) { SetRedactionConfig(value); return *this;}

    /**
     * <p>Provides configuration parameters for PII entity redaction.</p> <p>This
     * parameter is required if you set the <code>Mode</code> parameter to
     * <code>ONLY_REDACTION</code>. In that case, you must provide a
     * <code>RedactionConfig</code> definition that includes the
     * <code>PiiEntityTypes</code> parameter.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithRedactionConfig(RedactionConfig&& value) { SetRedactionConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>The identifier of the job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The identifier of the job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The identifier of the job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The identifier of the job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The identifier of the job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The identifier of the job.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The identifier of the job.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The identifier of the job.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The language of the input documents. Currently, English is the only valid
     * language.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language of the input documents. Currently, English is the only valid
     * language.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language of the input documents. Currently, English is the only valid
     * language.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language of the input documents. Currently, English is the only valid
     * language.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language of the input documents. Currently, English is the only valid
     * language.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of the input documents. Currently, English is the only valid
     * language.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Tags to be associated with the PII entities detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to be associated with the PII entities detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to be associated with the PII entities detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be associated with the PII entities detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to be associated with the PII entities detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be associated with the PII entities detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to be associated with the PII entities detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to be associated with the PII entities detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline StartPiiEntitiesDetectionJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    PiiEntitiesDetectionMode m_mode;
    bool m_modeHasBeenSet = false;

    RedactionConfig m_redactionConfig;
    bool m_redactionConfigHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
