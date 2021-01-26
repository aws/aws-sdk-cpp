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
  class AWS_TRANSCRIBESERVICE_API DescribeLanguageModelResult
  {
  public:
    DescribeLanguageModelResult();
    DescribeLanguageModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLanguageModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the custom language model you requested more information
     * about.</p>
     */
    inline const LanguageModel& GetLanguageModel() const{ return m_languageModel; }

    /**
     * <p>The name of the custom language model you requested more information
     * about.</p>
     */
    inline void SetLanguageModel(const LanguageModel& value) { m_languageModel = value; }

    /**
     * <p>The name of the custom language model you requested more information
     * about.</p>
     */
    inline void SetLanguageModel(LanguageModel&& value) { m_languageModel = std::move(value); }

    /**
     * <p>The name of the custom language model you requested more information
     * about.</p>
     */
    inline DescribeLanguageModelResult& WithLanguageModel(const LanguageModel& value) { SetLanguageModel(value); return *this;}

    /**
     * <p>The name of the custom language model you requested more information
     * about.</p>
     */
    inline DescribeLanguageModelResult& WithLanguageModel(LanguageModel&& value) { SetLanguageModel(std::move(value)); return *this;}

  private:

    LanguageModel m_languageModel;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
