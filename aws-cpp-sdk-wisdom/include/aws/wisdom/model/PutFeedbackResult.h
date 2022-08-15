/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/FeedbackData.h>
#include <aws/wisdom/model/TargetType.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class AWS_CONNECTWISDOMSERVICE_API PutFeedbackResult
  {
  public:
    PutFeedbackResult();
    PutFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline const Aws::String& GetAssistantArn() const{ return m_assistantArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline void SetAssistantArn(const Aws::String& value) { m_assistantArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline void SetAssistantArn(Aws::String&& value) { m_assistantArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline void SetAssistantArn(const char* value) { m_assistantArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline PutFeedbackResult& WithAssistantArn(const Aws::String& value) { SetAssistantArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline PutFeedbackResult& WithAssistantArn(Aws::String&& value) { SetAssistantArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom assistant.</p>
     */
    inline PutFeedbackResult& WithAssistantArn(const char* value) { SetAssistantArn(value); return *this;}


    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }

    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline void SetAssistantId(const Aws::String& value) { m_assistantId = value; }

    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline void SetAssistantId(Aws::String&& value) { m_assistantId = std::move(value); }

    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline void SetAssistantId(const char* value) { m_assistantId.assign(value); }

    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline PutFeedbackResult& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}

    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline PutFeedbackResult& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Wisdom assistant.</p>
     */
    inline PutFeedbackResult& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}


    /**
     * <p>The feedback.</p>
     */
    inline const FeedbackData& GetFeedback() const{ return m_feedback; }

    /**
     * <p>The feedback.</p>
     */
    inline void SetFeedback(const FeedbackData& value) { m_feedback = value; }

    /**
     * <p>The feedback.</p>
     */
    inline void SetFeedback(FeedbackData&& value) { m_feedback = std::move(value); }

    /**
     * <p>The feedback.</p>
     */
    inline PutFeedbackResult& WithFeedback(const FeedbackData& value) { SetFeedback(value); return *this;}

    /**
     * <p>The feedback.</p>
     */
    inline PutFeedbackResult& WithFeedback(FeedbackData&& value) { SetFeedback(std::move(value)); return *this;}


    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetId = value; }

    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetId = std::move(value); }

    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline void SetTargetId(const char* value) { m_targetId.assign(value); }

    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline PutFeedbackResult& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline PutFeedbackResult& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline PutFeedbackResult& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p>The type of the targetId for which The feedback. is targeted.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of the targetId for which The feedback. is targeted.</p>
     */
    inline void SetTargetType(const TargetType& value) { m_targetType = value; }

    /**
     * <p>The type of the targetId for which The feedback. is targeted.</p>
     */
    inline void SetTargetType(TargetType&& value) { m_targetType = std::move(value); }

    /**
     * <p>The type of the targetId for which The feedback. is targeted.</p>
     */
    inline PutFeedbackResult& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of the targetId for which The feedback. is targeted.</p>
     */
    inline PutFeedbackResult& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}

  private:

    Aws::String m_assistantArn;

    Aws::String m_assistantId;

    FeedbackData m_feedback;

    Aws::String m_targetId;

    TargetType m_targetType;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
