/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/comprehend/model/InputDataConfig.h>
#include <aws/comprehend/model/OutputDataConfig.h>
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
  class StartEventsDetectionJobRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API StartEventsDetectionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartEventsDetectionJob"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline StartEventsDetectionJobRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline StartEventsDetectionJobRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies where to send the output files.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>Specifies where to send the output files.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>Specifies where to send the output files.</p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>Specifies where to send the output files.</p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>Specifies where to send the output files.</p>
     */
    inline StartEventsDetectionJobRequest& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>Specifies where to send the output files.</p>
     */
    inline StartEventsDetectionJobRequest& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


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
    inline StartEventsDetectionJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline StartEventsDetectionJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline StartEventsDetectionJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>The identifier of the events detection job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The identifier of the events detection job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The identifier of the events detection job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The identifier of the events detection job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The identifier of the events detection job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The identifier of the events detection job.</p>
     */
    inline StartEventsDetectionJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The identifier of the events detection job.</p>
     */
    inline StartEventsDetectionJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The identifier of the events detection job.</p>
     */
    inline StartEventsDetectionJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The language code of the input documents.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the input documents.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code of the input documents.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code of the input documents.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code of the input documents.</p>
     */
    inline StartEventsDetectionJobRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the input documents.</p>
     */
    inline StartEventsDetectionJobRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline StartEventsDetectionJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline StartEventsDetectionJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline StartEventsDetectionJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The types of events to detect in the input documents.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetEventTypes() const{ return m_targetEventTypes; }

    /**
     * <p>The types of events to detect in the input documents.</p>
     */
    inline bool TargetEventTypesHasBeenSet() const { return m_targetEventTypesHasBeenSet; }

    /**
     * <p>The types of events to detect in the input documents.</p>
     */
    inline void SetTargetEventTypes(const Aws::Vector<Aws::String>& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes = value; }

    /**
     * <p>The types of events to detect in the input documents.</p>
     */
    inline void SetTargetEventTypes(Aws::Vector<Aws::String>&& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes = std::move(value); }

    /**
     * <p>The types of events to detect in the input documents.</p>
     */
    inline StartEventsDetectionJobRequest& WithTargetEventTypes(const Aws::Vector<Aws::String>& value) { SetTargetEventTypes(value); return *this;}

    /**
     * <p>The types of events to detect in the input documents.</p>
     */
    inline StartEventsDetectionJobRequest& WithTargetEventTypes(Aws::Vector<Aws::String>&& value) { SetTargetEventTypes(std::move(value)); return *this;}

    /**
     * <p>The types of events to detect in the input documents.</p>
     */
    inline StartEventsDetectionJobRequest& AddTargetEventTypes(const Aws::String& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes.push_back(value); return *this; }

    /**
     * <p>The types of events to detect in the input documents.</p>
     */
    inline StartEventsDetectionJobRequest& AddTargetEventTypes(Aws::String&& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The types of events to detect in the input documents.</p>
     */
    inline StartEventsDetectionJobRequest& AddTargetEventTypes(const char* value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes.push_back(value); return *this; }


    /**
     * <p>Tags to be associated with the events detection job. A tag is a key-value
     * pair that adds metadata to a resource used by Amazon Comprehend. For example, a
     * tag with "Sales" as the key might be added to a resource to indicate its use by
     * the sales department.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to be associated with the events detection job. A tag is a key-value
     * pair that adds metadata to a resource used by Amazon Comprehend. For example, a
     * tag with "Sales" as the key might be added to a resource to indicate its use by
     * the sales department.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to be associated with the events detection job. A tag is a key-value
     * pair that adds metadata to a resource used by Amazon Comprehend. For example, a
     * tag with "Sales" as the key might be added to a resource to indicate its use by
     * the sales department.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be associated with the events detection job. A tag is a key-value
     * pair that adds metadata to a resource used by Amazon Comprehend. For example, a
     * tag with "Sales" as the key might be added to a resource to indicate its use by
     * the sales department.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to be associated with the events detection job. A tag is a key-value
     * pair that adds metadata to a resource used by Amazon Comprehend. For example, a
     * tag with "Sales" as the key might be added to a resource to indicate its use by
     * the sales department.</p>
     */
    inline StartEventsDetectionJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be associated with the events detection job. A tag is a key-value
     * pair that adds metadata to a resource used by Amazon Comprehend. For example, a
     * tag with "Sales" as the key might be added to a resource to indicate its use by
     * the sales department.</p>
     */
    inline StartEventsDetectionJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to be associated with the events detection job. A tag is a key-value
     * pair that adds metadata to a resource used by Amazon Comprehend. For example, a
     * tag with "Sales" as the key might be added to a resource to indicate its use by
     * the sales department.</p>
     */
    inline StartEventsDetectionJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to be associated with the events detection job. A tag is a key-value
     * pair that adds metadata to a resource used by Amazon Comprehend. For example, a
     * tag with "Sales" as the key might be added to a resource to indicate its use by
     * the sales department.</p>
     */
    inline StartEventsDetectionJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetEventTypes;
    bool m_targetEventTypesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
