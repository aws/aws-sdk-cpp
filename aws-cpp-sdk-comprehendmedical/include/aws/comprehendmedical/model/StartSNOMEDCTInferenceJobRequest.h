/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/ComprehendMedicalRequest.h>
#include <aws/comprehendmedical/model/InputDataConfig.h>
#include <aws/comprehendmedical/model/OutputDataConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/LanguageCode.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{

  /**
   */
  class StartSNOMEDCTInferenceJobRequest : public ComprehendMedicalRequest
  {
  public:
    AWS_COMPREHENDMEDICAL_API StartSNOMEDCTInferenceJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSNOMEDCTInferenceJob"; }

    AWS_COMPREHENDMEDICAL_API Aws::String SerializePayload() const override;

    AWS_COMPREHENDMEDICAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    
    inline StartSNOMEDCTInferenceJobRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    
    inline StartSNOMEDCTInferenceJobRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    
    inline StartSNOMEDCTInferenceJobRequest& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    
    inline StartSNOMEDCTInferenceJobRequest& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend Medical read access to your input data.
     * </p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend Medical read access to your input data.
     * </p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend Medical read access to your input data.
     * </p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend Medical read access to your input data.
     * </p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend Medical read access to your input data.
     * </p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend Medical read access to your input data.
     * </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend Medical read access to your input data.
     * </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend Medical read access to your input data.
     * </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p> The user generated name the asynchronous InferSNOMEDCT job. </p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p> The user generated name the asynchronous InferSNOMEDCT job. </p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p> The user generated name the asynchronous InferSNOMEDCT job. </p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p> The user generated name the asynchronous InferSNOMEDCT job. </p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p> The user generated name the asynchronous InferSNOMEDCT job. </p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p> The user generated name the asynchronous InferSNOMEDCT job. </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p> The user generated name the asynchronous InferSNOMEDCT job. </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p> The user generated name the asynchronous InferSNOMEDCT job. </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend Medical generates one. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend Medical generates one. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend Medical generates one. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend Medical generates one. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend Medical generates one. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend Medical generates one. </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend Medical generates one. </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend Medical generates one. </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p> An AWS Key Management Service key used to encrypt your output files. If you
     * do not specify a key, the files are written in plain text. </p>
     */
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    /**
     * <p> An AWS Key Management Service key used to encrypt your output files. If you
     * do not specify a key, the files are written in plain text. </p>
     */
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }

    /**
     * <p> An AWS Key Management Service key used to encrypt your output files. If you
     * do not specify a key, the files are written in plain text. </p>
     */
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    /**
     * <p> An AWS Key Management Service key used to encrypt your output files. If you
     * do not specify a key, the files are written in plain text. </p>
     */
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    /**
     * <p> An AWS Key Management Service key used to encrypt your output files. If you
     * do not specify a key, the files are written in plain text. </p>
     */
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    /**
     * <p> An AWS Key Management Service key used to encrypt your output files. If you
     * do not specify a key, the files are written in plain text. </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    /**
     * <p> An AWS Key Management Service key used to encrypt your output files. If you
     * do not specify a key, the files are written in plain text. </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    /**
     * <p> An AWS Key Management Service key used to encrypt your output files. If you
     * do not specify a key, the files are written in plain text. </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}


    /**
     * <p> The language of the input documents. All documents must be in the same
     * language. </p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p> The language of the input documents. All documents must be in the same
     * language. </p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p> The language of the input documents. All documents must be in the same
     * language. </p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p> The language of the input documents. All documents must be in the same
     * language. </p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p> The language of the input documents. All documents must be in the same
     * language. </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p> The language of the input documents. All documents must be in the same
     * language. </p>
     */
    inline StartSNOMEDCTInferenceJobRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}

  private:

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
