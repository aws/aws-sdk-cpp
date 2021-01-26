/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/InputDataConfig.h>
#include <aws/translate/model/OutputDataConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class AWS_TRANSLATE_API StartTextTranslationJobRequest : public TranslateRequest
  {
  public:
    StartTextTranslationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTextTranslationJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the batch translation job to be performed.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the batch translation job to be performed.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the batch translation job to be performed.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the batch translation job to be performed.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the batch translation job to be performed.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the batch translation job to be performed.</p>
     */
    inline StartTextTranslationJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the batch translation job to be performed.</p>
     */
    inline StartTextTranslationJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the batch translation job to be performed.</p>
     */
    inline StartTextTranslationJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Specifies the format and S3 location of the input documents for the
     * translation job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>Specifies the format and S3 location of the input documents for the
     * translation job.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>Specifies the format and S3 location of the input documents for the
     * translation job.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>Specifies the format and S3 location of the input documents for the
     * translation job.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>Specifies the format and S3 location of the input documents for the
     * translation job.</p>
     */
    inline StartTextTranslationJobRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>Specifies the format and S3 location of the input documents for the
     * translation job.</p>
     */
    inline StartTextTranslationJobRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies the S3 folder to which your job output will be saved. </p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>Specifies the S3 folder to which your job output will be saved. </p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>Specifies the S3 folder to which your job output will be saved. </p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>Specifies the S3 folder to which your job output will be saved. </p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>Specifies the S3 folder to which your job output will be saved. </p>
     */
    inline StartTextTranslationJobRequest& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>Specifies the S3 folder to which your job output will be saved. </p>
     */
    inline StartTextTranslationJobRequest& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that grants Amazon Translate read access to your input data. For more
     * nformation, see <a>identity-and-access-management</a>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that grants Amazon Translate read access to your input data. For more
     * nformation, see <a>identity-and-access-management</a>.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that grants Amazon Translate read access to your input data. For more
     * nformation, see <a>identity-and-access-management</a>.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that grants Amazon Translate read access to your input data. For more
     * nformation, see <a>identity-and-access-management</a>.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that grants Amazon Translate read access to your input data. For more
     * nformation, see <a>identity-and-access-management</a>.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that grants Amazon Translate read access to your input data. For more
     * nformation, see <a>identity-and-access-management</a>.</p>
     */
    inline StartTextTranslationJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that grants Amazon Translate read access to your input data. For more
     * nformation, see <a>identity-and-access-management</a>.</p>
     */
    inline StartTextTranslationJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that grants Amazon Translate read access to your input data. For more
     * nformation, see <a>identity-and-access-management</a>.</p>
     */
    inline StartTextTranslationJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>The language code of the input language. For a list of language codes, see
     * <a>what-is-languages</a>.</p> <p>Amazon Translate does not automatically detect
     * a source language during batch translation jobs.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }

    /**
     * <p>The language code of the input language. For a list of language codes, see
     * <a>what-is-languages</a>.</p> <p>Amazon Translate does not automatically detect
     * a source language during batch translation jobs.</p>
     */
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }

    /**
     * <p>The language code of the input language. For a list of language codes, see
     * <a>what-is-languages</a>.</p> <p>Amazon Translate does not automatically detect
     * a source language during batch translation jobs.</p>
     */
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = value; }

    /**
     * <p>The language code of the input language. For a list of language codes, see
     * <a>what-is-languages</a>.</p> <p>Amazon Translate does not automatically detect
     * a source language during batch translation jobs.</p>
     */
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::move(value); }

    /**
     * <p>The language code of the input language. For a list of language codes, see
     * <a>what-is-languages</a>.</p> <p>Amazon Translate does not automatically detect
     * a source language during batch translation jobs.</p>
     */
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode.assign(value); }

    /**
     * <p>The language code of the input language. For a list of language codes, see
     * <a>what-is-languages</a>.</p> <p>Amazon Translate does not automatically detect
     * a source language during batch translation jobs.</p>
     */
    inline StartTextTranslationJobRequest& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}

    /**
     * <p>The language code of the input language. For a list of language codes, see
     * <a>what-is-languages</a>.</p> <p>Amazon Translate does not automatically detect
     * a source language during batch translation jobs.</p>
     */
    inline StartTextTranslationJobRequest& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code of the input language. For a list of language codes, see
     * <a>what-is-languages</a>.</p> <p>Amazon Translate does not automatically detect
     * a source language during batch translation jobs.</p>
     */
    inline StartTextTranslationJobRequest& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}


    /**
     * <p>The language code of the output language.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetLanguageCodes() const{ return m_targetLanguageCodes; }

    /**
     * <p>The language code of the output language.</p>
     */
    inline bool TargetLanguageCodesHasBeenSet() const { return m_targetLanguageCodesHasBeenSet; }

    /**
     * <p>The language code of the output language.</p>
     */
    inline void SetTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = value; }

    /**
     * <p>The language code of the output language.</p>
     */
    inline void SetTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = std::move(value); }

    /**
     * <p>The language code of the output language.</p>
     */
    inline StartTextTranslationJobRequest& WithTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { SetTargetLanguageCodes(value); return *this;}

    /**
     * <p>The language code of the output language.</p>
     */
    inline StartTextTranslationJobRequest& WithTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { SetTargetLanguageCodes(std::move(value)); return *this;}

    /**
     * <p>The language code of the output language.</p>
     */
    inline StartTextTranslationJobRequest& AddTargetLanguageCodes(const Aws::String& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }

    /**
     * <p>The language code of the output language.</p>
     */
    inline StartTextTranslationJobRequest& AddTargetLanguageCodes(Aws::String&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(std::move(value)); return *this; }

    /**
     * <p>The language code of the output language.</p>
     */
    inline StartTextTranslationJobRequest& AddTargetLanguageCodes(const char* value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }


    /**
     * <p>The name of the terminology to use in the batch translation job. For a list
     * of available terminologies, use the <a>ListTerminologies</a> operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminologyNames() const{ return m_terminologyNames; }

    /**
     * <p>The name of the terminology to use in the batch translation job. For a list
     * of available terminologies, use the <a>ListTerminologies</a> operation.</p>
     */
    inline bool TerminologyNamesHasBeenSet() const { return m_terminologyNamesHasBeenSet; }

    /**
     * <p>The name of the terminology to use in the batch translation job. For a list
     * of available terminologies, use the <a>ListTerminologies</a> operation.</p>
     */
    inline void SetTerminologyNames(const Aws::Vector<Aws::String>& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = value; }

    /**
     * <p>The name of the terminology to use in the batch translation job. For a list
     * of available terminologies, use the <a>ListTerminologies</a> operation.</p>
     */
    inline void SetTerminologyNames(Aws::Vector<Aws::String>&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = std::move(value); }

    /**
     * <p>The name of the terminology to use in the batch translation job. For a list
     * of available terminologies, use the <a>ListTerminologies</a> operation.</p>
     */
    inline StartTextTranslationJobRequest& WithTerminologyNames(const Aws::Vector<Aws::String>& value) { SetTerminologyNames(value); return *this;}

    /**
     * <p>The name of the terminology to use in the batch translation job. For a list
     * of available terminologies, use the <a>ListTerminologies</a> operation.</p>
     */
    inline StartTextTranslationJobRequest& WithTerminologyNames(Aws::Vector<Aws::String>&& value) { SetTerminologyNames(std::move(value)); return *this;}

    /**
     * <p>The name of the terminology to use in the batch translation job. For a list
     * of available terminologies, use the <a>ListTerminologies</a> operation.</p>
     */
    inline StartTextTranslationJobRequest& AddTerminologyNames(const Aws::String& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }

    /**
     * <p>The name of the terminology to use in the batch translation job. For a list
     * of available terminologies, use the <a>ListTerminologies</a> operation.</p>
     */
    inline StartTextTranslationJobRequest& AddTerminologyNames(Aws::String&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the terminology to use in the batch translation job. For a list
     * of available terminologies, use the <a>ListTerminologies</a> operation.</p>
     */
    inline StartTextTranslationJobRequest& AddTerminologyNames(const char* value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }


    /**
     * <p>The names of the parallel data resources to use in the batch translation job.
     * For a list of available parallel data resources, use the <a>ListParallelData</a>
     * operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParallelDataNames() const{ return m_parallelDataNames; }

    /**
     * <p>The names of the parallel data resources to use in the batch translation job.
     * For a list of available parallel data resources, use the <a>ListParallelData</a>
     * operation.</p>
     */
    inline bool ParallelDataNamesHasBeenSet() const { return m_parallelDataNamesHasBeenSet; }

    /**
     * <p>The names of the parallel data resources to use in the batch translation job.
     * For a list of available parallel data resources, use the <a>ListParallelData</a>
     * operation.</p>
     */
    inline void SetParallelDataNames(const Aws::Vector<Aws::String>& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames = value; }

    /**
     * <p>The names of the parallel data resources to use in the batch translation job.
     * For a list of available parallel data resources, use the <a>ListParallelData</a>
     * operation.</p>
     */
    inline void SetParallelDataNames(Aws::Vector<Aws::String>&& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames = std::move(value); }

    /**
     * <p>The names of the parallel data resources to use in the batch translation job.
     * For a list of available parallel data resources, use the <a>ListParallelData</a>
     * operation.</p>
     */
    inline StartTextTranslationJobRequest& WithParallelDataNames(const Aws::Vector<Aws::String>& value) { SetParallelDataNames(value); return *this;}

    /**
     * <p>The names of the parallel data resources to use in the batch translation job.
     * For a list of available parallel data resources, use the <a>ListParallelData</a>
     * operation.</p>
     */
    inline StartTextTranslationJobRequest& WithParallelDataNames(Aws::Vector<Aws::String>&& value) { SetParallelDataNames(std::move(value)); return *this;}

    /**
     * <p>The names of the parallel data resources to use in the batch translation job.
     * For a list of available parallel data resources, use the <a>ListParallelData</a>
     * operation.</p>
     */
    inline StartTextTranslationJobRequest& AddParallelDataNames(const Aws::String& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.push_back(value); return *this; }

    /**
     * <p>The names of the parallel data resources to use in the batch translation job.
     * For a list of available parallel data resources, use the <a>ListParallelData</a>
     * operation.</p>
     */
    inline StartTextTranslationJobRequest& AddParallelDataNames(Aws::String&& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the parallel data resources to use in the batch translation job.
     * For a list of available parallel data resources, use the <a>ListParallelData</a>
     * operation.</p>
     */
    inline StartTextTranslationJobRequest& AddParallelDataNames(const char* value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.push_back(value); return *this; }


    /**
     * <p>A unique identifier for the request. This token is auto-generated when using
     * the Amazon Translate SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique identifier for the request. This token is auto-generated when using
     * the Amazon Translate SDK.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique identifier for the request. This token is auto-generated when using
     * the Amazon Translate SDK.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier for the request. This token is auto-generated when using
     * the Amazon Translate SDK.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique identifier for the request. This token is auto-generated when using
     * the Amazon Translate SDK.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique identifier for the request. This token is auto-generated when using
     * the Amazon Translate SDK.</p>
     */
    inline StartTextTranslationJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier for the request. This token is auto-generated when using
     * the Amazon Translate SDK.</p>
     */
    inline StartTextTranslationJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the request. This token is auto-generated when using
     * the Amazon Translate SDK.</p>
     */
    inline StartTextTranslationJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet;

    Aws::String m_sourceLanguageCode;
    bool m_sourceLanguageCodeHasBeenSet;

    Aws::Vector<Aws::String> m_targetLanguageCodes;
    bool m_targetLanguageCodesHasBeenSet;

    Aws::Vector<Aws::String> m_terminologyNames;
    bool m_terminologyNamesHasBeenSet;

    Aws::Vector<Aws::String> m_parallelDataNames;
    bool m_parallelDataNamesHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
