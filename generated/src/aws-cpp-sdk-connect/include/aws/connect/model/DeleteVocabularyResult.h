﻿/**
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
  class DeleteVocabularyResult
  {
  public:
    AWS_CONNECT_API DeleteVocabularyResult();
    AWS_CONNECT_API DeleteVocabularyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DeleteVocabularyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom vocabulary.</p>
     */
    inline const Aws::String& GetVocabularyArn() const{ return m_vocabularyArn; }
    inline void SetVocabularyArn(const Aws::String& value) { m_vocabularyArn = value; }
    inline void SetVocabularyArn(Aws::String&& value) { m_vocabularyArn = std::move(value); }
    inline void SetVocabularyArn(const char* value) { m_vocabularyArn.assign(value); }
    inline DeleteVocabularyResult& WithVocabularyArn(const Aws::String& value) { SetVocabularyArn(value); return *this;}
    inline DeleteVocabularyResult& WithVocabularyArn(Aws::String&& value) { SetVocabularyArn(std::move(value)); return *this;}
    inline DeleteVocabularyResult& WithVocabularyArn(const char* value) { SetVocabularyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline const Aws::String& GetVocabularyId() const{ return m_vocabularyId; }
    inline void SetVocabularyId(const Aws::String& value) { m_vocabularyId = value; }
    inline void SetVocabularyId(Aws::String&& value) { m_vocabularyId = std::move(value); }
    inline void SetVocabularyId(const char* value) { m_vocabularyId.assign(value); }
    inline DeleteVocabularyResult& WithVocabularyId(const Aws::String& value) { SetVocabularyId(value); return *this;}
    inline DeleteVocabularyResult& WithVocabularyId(Aws::String&& value) { SetVocabularyId(std::move(value)); return *this;}
    inline DeleteVocabularyResult& WithVocabularyId(const char* value) { SetVocabularyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the custom vocabulary.</p>
     */
    inline const VocabularyState& GetState() const{ return m_state; }
    inline void SetState(const VocabularyState& value) { m_state = value; }
    inline void SetState(VocabularyState&& value) { m_state = std::move(value); }
    inline DeleteVocabularyResult& WithState(const VocabularyState& value) { SetState(value); return *this;}
    inline DeleteVocabularyResult& WithState(VocabularyState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteVocabularyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteVocabularyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteVocabularyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_vocabularyArn;

    Aws::String m_vocabularyId;

    VocabularyState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
