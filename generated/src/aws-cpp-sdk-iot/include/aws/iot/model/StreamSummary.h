/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A summary of a stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StreamSummary">AWS
   * API Reference</a></p>
   */
  class StreamSummary
  {
  public:
    AWS_IOT_API StreamSummary();
    AWS_IOT_API StreamSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API StreamSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stream ID.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }
    inline StreamSummary& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}
    inline StreamSummary& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}
    inline StreamSummary& WithStreamId(const char* value) { SetStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stream ARN.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }
    inline StreamSummary& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}
    inline StreamSummary& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}
    inline StreamSummary& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stream version.</p>
     */
    inline int GetStreamVersion() const{ return m_streamVersion; }
    inline bool StreamVersionHasBeenSet() const { return m_streamVersionHasBeenSet; }
    inline void SetStreamVersion(int value) { m_streamVersionHasBeenSet = true; m_streamVersion = value; }
    inline StreamSummary& WithStreamVersion(int value) { SetStreamVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the stream.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StreamSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StreamSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StreamSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    int m_streamVersion;
    bool m_streamVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
