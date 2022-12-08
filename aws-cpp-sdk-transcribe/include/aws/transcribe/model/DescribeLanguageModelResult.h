/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/LanguageModel.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TranscribeService
{
namespace Model
{
  class DescribeLanguageModelResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API DescribeLanguageModelResult();
    AWS_TRANSCRIBESERVICE_API DescribeLanguageModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API DescribeLanguageModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides information about the specified custom language model.</p> <p>This
     * parameter also shows if the base language model you used to create your custom
     * language model has been updated. If Amazon Transcribe has updated the base
     * model, you can create a new custom language model using the updated base
     * model.</p> <p>If you tried to create a new custom language model and the request
     * wasn't successful, you can use this <code>DescribeLanguageModel</code> to help
     * identify the reason for this failure.</p>
     */
    inline const LanguageModel& GetLanguageModel() const{ return m_languageModel; }

    /**
     * <p>Provides information about the specified custom language model.</p> <p>This
     * parameter also shows if the base language model you used to create your custom
     * language model has been updated. If Amazon Transcribe has updated the base
     * model, you can create a new custom language model using the updated base
     * model.</p> <p>If you tried to create a new custom language model and the request
     * wasn't successful, you can use this <code>DescribeLanguageModel</code> to help
     * identify the reason for this failure.</p>
     */
    inline void SetLanguageModel(const LanguageModel& value) { m_languageModel = value; }

    /**
     * <p>Provides information about the specified custom language model.</p> <p>This
     * parameter also shows if the base language model you used to create your custom
     * language model has been updated. If Amazon Transcribe has updated the base
     * model, you can create a new custom language model using the updated base
     * model.</p> <p>If you tried to create a new custom language model and the request
     * wasn't successful, you can use this <code>DescribeLanguageModel</code> to help
     * identify the reason for this failure.</p>
     */
    inline void SetLanguageModel(LanguageModel&& value) { m_languageModel = std::move(value); }

    /**
     * <p>Provides information about the specified custom language model.</p> <p>This
     * parameter also shows if the base language model you used to create your custom
     * language model has been updated. If Amazon Transcribe has updated the base
     * model, you can create a new custom language model using the updated base
     * model.</p> <p>If you tried to create a new custom language model and the request
     * wasn't successful, you can use this <code>DescribeLanguageModel</code> to help
     * identify the reason for this failure.</p>
     */
    inline DescribeLanguageModelResult& WithLanguageModel(const LanguageModel& value) { SetLanguageModel(value); return *this;}

    /**
     * <p>Provides information about the specified custom language model.</p> <p>This
     * parameter also shows if the base language model you used to create your custom
     * language model has been updated. If Amazon Transcribe has updated the base
     * model, you can create a new custom language model using the updated base
     * model.</p> <p>If you tried to create a new custom language model and the request
     * wasn't successful, you can use this <code>DescribeLanguageModel</code> to help
     * identify the reason for this failure.</p>
     */
    inline DescribeLanguageModelResult& WithLanguageModel(LanguageModel&& value) { SetLanguageModel(std::move(value)); return *this;}

  private:

    LanguageModel m_languageModel;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
