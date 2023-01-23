/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/VocabularyState.h>
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
namespace Connect
{
namespace Model
{
  class CreateVocabularyResult
  {
  public:
    AWS_CONNECT_API CreateVocabularyResult();
    AWS_CONNECT_API CreateVocabularyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateVocabularyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the custom vocabulary.</p>
     */
    inline const Aws::String& GetVocabularyArn() const{ return m_vocabularyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom vocabulary.</p>
     */
    inline void SetVocabularyArn(const Aws::String& value) { m_vocabularyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom vocabulary.</p>
     */
    inline void SetVocabularyArn(Aws::String&& value) { m_vocabularyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom vocabulary.</p>
     */
    inline void SetVocabularyArn(const char* value) { m_vocabularyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom vocabulary.</p>
     */
    inline CreateVocabularyResult& WithVocabularyArn(const Aws::String& value) { SetVocabularyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom vocabulary.</p>
     */
    inline CreateVocabularyResult& WithVocabularyArn(Aws::String&& value) { SetVocabularyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom vocabulary.</p>
     */
    inline CreateVocabularyResult& WithVocabularyArn(const char* value) { SetVocabularyArn(value); return *this;}


    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline const Aws::String& GetVocabularyId() const{ return m_vocabularyId; }

    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline void SetVocabularyId(const Aws::String& value) { m_vocabularyId = value; }

    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline void SetVocabularyId(Aws::String&& value) { m_vocabularyId = std::move(value); }

    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline void SetVocabularyId(const char* value) { m_vocabularyId.assign(value); }

    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline CreateVocabularyResult& WithVocabularyId(const Aws::String& value) { SetVocabularyId(value); return *this;}

    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline CreateVocabularyResult& WithVocabularyId(Aws::String&& value) { SetVocabularyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline CreateVocabularyResult& WithVocabularyId(const char* value) { SetVocabularyId(value); return *this;}


    /**
     * <p>The current state of the custom vocabulary.</p>
     */
    inline const VocabularyState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the custom vocabulary.</p>
     */
    inline void SetState(const VocabularyState& value) { m_state = value; }

    /**
     * <p>The current state of the custom vocabulary.</p>
     */
    inline void SetState(VocabularyState&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the custom vocabulary.</p>
     */
    inline CreateVocabularyResult& WithState(const VocabularyState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the custom vocabulary.</p>
     */
    inline CreateVocabularyResult& WithState(VocabularyState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_vocabularyArn;

    Aws::String m_vocabularyId;

    VocabularyState m_state;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
