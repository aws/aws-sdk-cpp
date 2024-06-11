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


    ///@{
    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline StartEventsDetectionJobRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}
    inline StartEventsDetectionJobRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies where to send the output files.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline StartEventsDetectionJobRequest& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline StartEventsDetectionJobRequest& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * read access to your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }
    inline StartEventsDetectionJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline StartEventsDetectionJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline StartEventsDetectionJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the events detection job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline StartEventsDetectionJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline StartEventsDetectionJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline StartEventsDetectionJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the input documents.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline StartEventsDetectionJobRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline StartEventsDetectionJobRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline StartEventsDetectionJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline StartEventsDetectionJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline StartEventsDetectionJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of events to detect in the input documents.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetEventTypes() const{ return m_targetEventTypes; }
    inline bool TargetEventTypesHasBeenSet() const { return m_targetEventTypesHasBeenSet; }
    inline void SetTargetEventTypes(const Aws::Vector<Aws::String>& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes = value; }
    inline void SetTargetEventTypes(Aws::Vector<Aws::String>&& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes = std::move(value); }
    inline StartEventsDetectionJobRequest& WithTargetEventTypes(const Aws::Vector<Aws::String>& value) { SetTargetEventTypes(value); return *this;}
    inline StartEventsDetectionJobRequest& WithTargetEventTypes(Aws::Vector<Aws::String>&& value) { SetTargetEventTypes(std::move(value)); return *this;}
    inline StartEventsDetectionJobRequest& AddTargetEventTypes(const Aws::String& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes.push_back(value); return *this; }
    inline StartEventsDetectionJobRequest& AddTargetEventTypes(Aws::String&& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes.push_back(std::move(value)); return *this; }
    inline StartEventsDetectionJobRequest& AddTargetEventTypes(const char* value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags to associate with the events detection job. A tag is a key-value pair
     * that adds metadata to a resource used by Amazon Comprehend. For example, a tag
     * with "Sales" as the key might be added to a resource to indicate its use by the
     * sales department.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartEventsDetectionJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline StartEventsDetectionJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline StartEventsDetectionJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline StartEventsDetectionJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
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
