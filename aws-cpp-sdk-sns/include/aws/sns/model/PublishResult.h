/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  /**
   * <p>Response for Publish action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/PublishResponse">AWS
   * API Reference</a></p>
   */
  class PublishResult
  {
  public:
    AWS_SNS_API PublishResult();
    AWS_SNS_API PublishResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API PublishResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Unique identifier assigned to the published message.</p> <p>Length
     * Constraint: Maximum 100 characters</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>Unique identifier assigned to the published message.</p> <p>Length
     * Constraint: Maximum 100 characters</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    /**
     * <p>Unique identifier assigned to the published message.</p> <p>Length
     * Constraint: Maximum 100 characters</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }

    /**
     * <p>Unique identifier assigned to the published message.</p> <p>Length
     * Constraint: Maximum 100 characters</p>
     */
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    /**
     * <p>Unique identifier assigned to the published message.</p> <p>Length
     * Constraint: Maximum 100 characters</p>
     */
    inline PublishResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>Unique identifier assigned to the published message.</p> <p>Length
     * Constraint: Maximum 100 characters</p>
     */
    inline PublishResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier assigned to the published message.</p> <p>Length
     * Constraint: Maximum 100 characters</p>
     */
    inline PublishResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>This response element applies only to FIFO (first-in-first-out) topics. </p>
     * <p>The sequence number is a large, non-consecutive number that Amazon SNS
     * assigns to each message. The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for each
     * <code>MessageGroupId</code>.</p>
     */
    inline const Aws::String& GetSequenceNumber() const{ return m_sequenceNumber; }

    /**
     * <p>This response element applies only to FIFO (first-in-first-out) topics. </p>
     * <p>The sequence number is a large, non-consecutive number that Amazon SNS
     * assigns to each message. The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for each
     * <code>MessageGroupId</code>.</p>
     */
    inline void SetSequenceNumber(const Aws::String& value) { m_sequenceNumber = value; }

    /**
     * <p>This response element applies only to FIFO (first-in-first-out) topics. </p>
     * <p>The sequence number is a large, non-consecutive number that Amazon SNS
     * assigns to each message. The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for each
     * <code>MessageGroupId</code>.</p>
     */
    inline void SetSequenceNumber(Aws::String&& value) { m_sequenceNumber = std::move(value); }

    /**
     * <p>This response element applies only to FIFO (first-in-first-out) topics. </p>
     * <p>The sequence number is a large, non-consecutive number that Amazon SNS
     * assigns to each message. The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for each
     * <code>MessageGroupId</code>.</p>
     */
    inline void SetSequenceNumber(const char* value) { m_sequenceNumber.assign(value); }

    /**
     * <p>This response element applies only to FIFO (first-in-first-out) topics. </p>
     * <p>The sequence number is a large, non-consecutive number that Amazon SNS
     * assigns to each message. The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for each
     * <code>MessageGroupId</code>.</p>
     */
    inline PublishResult& WithSequenceNumber(const Aws::String& value) { SetSequenceNumber(value); return *this;}

    /**
     * <p>This response element applies only to FIFO (first-in-first-out) topics. </p>
     * <p>The sequence number is a large, non-consecutive number that Amazon SNS
     * assigns to each message. The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for each
     * <code>MessageGroupId</code>.</p>
     */
    inline PublishResult& WithSequenceNumber(Aws::String&& value) { SetSequenceNumber(std::move(value)); return *this;}

    /**
     * <p>This response element applies only to FIFO (first-in-first-out) topics. </p>
     * <p>The sequence number is a large, non-consecutive number that Amazon SNS
     * assigns to each message. The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for each
     * <code>MessageGroupId</code>.</p>
     */
    inline PublishResult& WithSequenceNumber(const char* value) { SetSequenceNumber(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline PublishResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline PublishResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_messageId;

    Aws::String m_sequenceNumber;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
