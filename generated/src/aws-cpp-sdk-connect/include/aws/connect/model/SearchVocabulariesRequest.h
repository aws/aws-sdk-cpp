/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/VocabularyState.h>
#include <aws/connect/model/VocabularyLanguageCode.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class SearchVocabulariesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API SearchVocabulariesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchVocabularies"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline SearchVocabulariesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline SearchVocabulariesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline SearchVocabulariesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchVocabulariesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline SearchVocabulariesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchVocabulariesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchVocabulariesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the custom vocabulary.</p>
     */
    inline const VocabularyState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const VocabularyState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(VocabularyState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline SearchVocabulariesRequest& WithState(const VocabularyState& value) { SetState(value); return *this;}
    inline SearchVocabulariesRequest& WithState(VocabularyState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting pattern of the name of the vocabulary.</p>
     */
    inline const Aws::String& GetNameStartsWith() const{ return m_nameStartsWith; }
    inline bool NameStartsWithHasBeenSet() const { return m_nameStartsWithHasBeenSet; }
    inline void SetNameStartsWith(const Aws::String& value) { m_nameStartsWithHasBeenSet = true; m_nameStartsWith = value; }
    inline void SetNameStartsWith(Aws::String&& value) { m_nameStartsWithHasBeenSet = true; m_nameStartsWith = std::move(value); }
    inline void SetNameStartsWith(const char* value) { m_nameStartsWithHasBeenSet = true; m_nameStartsWith.assign(value); }
    inline SearchVocabulariesRequest& WithNameStartsWith(const Aws::String& value) { SetNameStartsWith(value); return *this;}
    inline SearchVocabulariesRequest& WithNameStartsWith(Aws::String&& value) { SetNameStartsWith(std::move(value)); return *this;}
    inline SearchVocabulariesRequest& WithNameStartsWith(const char* value) { SetNameStartsWith(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/transcribe-whatis.html">What
     * is Amazon Transcribe?</a> </p>
     */
    inline const VocabularyLanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const VocabularyLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(VocabularyLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline SearchVocabulariesRequest& WithLanguageCode(const VocabularyLanguageCode& value) { SetLanguageCode(value); return *this;}
    inline SearchVocabulariesRequest& WithLanguageCode(VocabularyLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    VocabularyState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_nameStartsWith;
    bool m_nameStartsWithHasBeenSet = false;

    VocabularyLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
