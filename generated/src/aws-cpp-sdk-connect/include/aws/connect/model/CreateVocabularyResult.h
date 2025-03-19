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
    AWS_CONNECT_API CreateVocabularyResult() = default;
    AWS_CONNECT_API CreateVocabularyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateVocabularyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom vocabulary.</p>
     */
    inline const Aws::String& GetVocabularyArn() const { return m_vocabularyArn; }
    template<typename VocabularyArnT = Aws::String>
    void SetVocabularyArn(VocabularyArnT&& value) { m_vocabularyArnHasBeenSet = true; m_vocabularyArn = std::forward<VocabularyArnT>(value); }
    template<typename VocabularyArnT = Aws::String>
    CreateVocabularyResult& WithVocabularyArn(VocabularyArnT&& value) { SetVocabularyArn(std::forward<VocabularyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline const Aws::String& GetVocabularyId() const { return m_vocabularyId; }
    template<typename VocabularyIdT = Aws::String>
    void SetVocabularyId(VocabularyIdT&& value) { m_vocabularyIdHasBeenSet = true; m_vocabularyId = std::forward<VocabularyIdT>(value); }
    template<typename VocabularyIdT = Aws::String>
    CreateVocabularyResult& WithVocabularyId(VocabularyIdT&& value) { SetVocabularyId(std::forward<VocabularyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the custom vocabulary.</p>
     */
    inline VocabularyState GetState() const { return m_state; }
    inline void SetState(VocabularyState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CreateVocabularyResult& WithState(VocabularyState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateVocabularyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vocabularyArn;
    bool m_vocabularyArnHasBeenSet = false;

    Aws::String m_vocabularyId;
    bool m_vocabularyIdHasBeenSet = false;

    VocabularyState m_state{VocabularyState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
