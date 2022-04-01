/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/MessageType.h>
#include <aws/mediatailor/model/SlateSource.h>
#include <aws/mediatailor/model/SpliceInsertMessage.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Ad break configuration parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AdBreak">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API AdBreak
  {
  public:
    AdBreak();
    AdBreak(Aws::Utils::Json::JsonView jsonValue);
    AdBreak& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SCTE-35 ad insertion type. Accepted value: SPLICE_INSERT.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>The SCTE-35 ad insertion type. Accepted value: SPLICE_INSERT.</p>
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * <p>The SCTE-35 ad insertion type. Accepted value: SPLICE_INSERT.</p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>The SCTE-35 ad insertion type. Accepted value: SPLICE_INSERT.</p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * <p>The SCTE-35 ad insertion type. Accepted value: SPLICE_INSERT.</p>
     */
    inline AdBreak& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>The SCTE-35 ad insertion type. Accepted value: SPLICE_INSERT.</p>
     */
    inline AdBreak& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>How long (in milliseconds) after the beginning of the program that an ad
     * starts. This value must fall within 100ms of a segment boundary, otherwise the
     * ad break will be skipped.</p>
     */
    inline long long GetOffsetMillis() const{ return m_offsetMillis; }

    /**
     * <p>How long (in milliseconds) after the beginning of the program that an ad
     * starts. This value must fall within 100ms of a segment boundary, otherwise the
     * ad break will be skipped.</p>
     */
    inline bool OffsetMillisHasBeenSet() const { return m_offsetMillisHasBeenSet; }

    /**
     * <p>How long (in milliseconds) after the beginning of the program that an ad
     * starts. This value must fall within 100ms of a segment boundary, otherwise the
     * ad break will be skipped.</p>
     */
    inline void SetOffsetMillis(long long value) { m_offsetMillisHasBeenSet = true; m_offsetMillis = value; }

    /**
     * <p>How long (in milliseconds) after the beginning of the program that an ad
     * starts. This value must fall within 100ms of a segment boundary, otherwise the
     * ad break will be skipped.</p>
     */
    inline AdBreak& WithOffsetMillis(long long value) { SetOffsetMillis(value); return *this;}


    /**
     * <p>Ad break slate configuration.</p>
     */
    inline const SlateSource& GetSlate() const{ return m_slate; }

    /**
     * <p>Ad break slate configuration.</p>
     */
    inline bool SlateHasBeenSet() const { return m_slateHasBeenSet; }

    /**
     * <p>Ad break slate configuration.</p>
     */
    inline void SetSlate(const SlateSource& value) { m_slateHasBeenSet = true; m_slate = value; }

    /**
     * <p>Ad break slate configuration.</p>
     */
    inline void SetSlate(SlateSource&& value) { m_slateHasBeenSet = true; m_slate = std::move(value); }

    /**
     * <p>Ad break slate configuration.</p>
     */
    inline AdBreak& WithSlate(const SlateSource& value) { SetSlate(value); return *this;}

    /**
     * <p>Ad break slate configuration.</p>
     */
    inline AdBreak& WithSlate(SlateSource&& value) { SetSlate(std::move(value)); return *this;}


    /**
     * <p>This defines the SCTE-35 splice_insert() message inserted around the ad. For
     * information about using splice_insert(), see the SCTE-35 specficiaiton, section
     * 9.7.3.1.</p>
     */
    inline const SpliceInsertMessage& GetSpliceInsertMessage() const{ return m_spliceInsertMessage; }

    /**
     * <p>This defines the SCTE-35 splice_insert() message inserted around the ad. For
     * information about using splice_insert(), see the SCTE-35 specficiaiton, section
     * 9.7.3.1.</p>
     */
    inline bool SpliceInsertMessageHasBeenSet() const { return m_spliceInsertMessageHasBeenSet; }

    /**
     * <p>This defines the SCTE-35 splice_insert() message inserted around the ad. For
     * information about using splice_insert(), see the SCTE-35 specficiaiton, section
     * 9.7.3.1.</p>
     */
    inline void SetSpliceInsertMessage(const SpliceInsertMessage& value) { m_spliceInsertMessageHasBeenSet = true; m_spliceInsertMessage = value; }

    /**
     * <p>This defines the SCTE-35 splice_insert() message inserted around the ad. For
     * information about using splice_insert(), see the SCTE-35 specficiaiton, section
     * 9.7.3.1.</p>
     */
    inline void SetSpliceInsertMessage(SpliceInsertMessage&& value) { m_spliceInsertMessageHasBeenSet = true; m_spliceInsertMessage = std::move(value); }

    /**
     * <p>This defines the SCTE-35 splice_insert() message inserted around the ad. For
     * information about using splice_insert(), see the SCTE-35 specficiaiton, section
     * 9.7.3.1.</p>
     */
    inline AdBreak& WithSpliceInsertMessage(const SpliceInsertMessage& value) { SetSpliceInsertMessage(value); return *this;}

    /**
     * <p>This defines the SCTE-35 splice_insert() message inserted around the ad. For
     * information about using splice_insert(), see the SCTE-35 specficiaiton, section
     * 9.7.3.1.</p>
     */
    inline AdBreak& WithSpliceInsertMessage(SpliceInsertMessage&& value) { SetSpliceInsertMessage(std::move(value)); return *this;}

  private:

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet;

    long long m_offsetMillis;
    bool m_offsetMillisHasBeenSet;

    SlateSource m_slate;
    bool m_slateHasBeenSet;

    SpliceInsertMessage m_spliceInsertMessage;
    bool m_spliceInsertMessageHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
