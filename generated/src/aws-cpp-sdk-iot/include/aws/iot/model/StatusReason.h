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
   * <p>Provide additional context about the status of a command execution using a
   * reason code and description.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StatusReason">AWS
   * API Reference</a></p>
   */
  class StatusReason
  {
  public:
    AWS_IOT_API StatusReason();
    AWS_IOT_API StatusReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API StatusReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A code that provides additional context for the command execution status.</p>
     */
    inline const Aws::String& GetReasonCode() const{ return m_reasonCode; }
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
    inline void SetReasonCode(const Aws::String& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }
    inline void SetReasonCode(Aws::String&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::move(value); }
    inline void SetReasonCode(const char* value) { m_reasonCodeHasBeenSet = true; m_reasonCode.assign(value); }
    inline StatusReason& WithReasonCode(const Aws::String& value) { SetReasonCode(value); return *this;}
    inline StatusReason& WithReasonCode(Aws::String&& value) { SetReasonCode(std::move(value)); return *this;}
    inline StatusReason& WithReasonCode(const char* value) { SetReasonCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A literal string for devices to optionally provide additional information
     * about the reason code for a command execution status.</p>
     */
    inline const Aws::String& GetReasonDescription() const{ return m_reasonDescription; }
    inline bool ReasonDescriptionHasBeenSet() const { return m_reasonDescriptionHasBeenSet; }
    inline void SetReasonDescription(const Aws::String& value) { m_reasonDescriptionHasBeenSet = true; m_reasonDescription = value; }
    inline void SetReasonDescription(Aws::String&& value) { m_reasonDescriptionHasBeenSet = true; m_reasonDescription = std::move(value); }
    inline void SetReasonDescription(const char* value) { m_reasonDescriptionHasBeenSet = true; m_reasonDescription.assign(value); }
    inline StatusReason& WithReasonDescription(const Aws::String& value) { SetReasonDescription(value); return *this;}
    inline StatusReason& WithReasonDescription(Aws::String&& value) { SetReasonDescription(std::move(value)); return *this;}
    inline StatusReason& WithReasonDescription(const char* value) { SetReasonDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_reasonCode;
    bool m_reasonCodeHasBeenSet = false;

    Aws::String m_reasonDescription;
    bool m_reasonDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
