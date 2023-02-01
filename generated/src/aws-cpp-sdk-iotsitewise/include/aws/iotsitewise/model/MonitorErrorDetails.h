/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/MonitorErrorCode.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains IoT SiteWise Monitor error details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/MonitorErrorDetails">AWS
   * API Reference</a></p>
   */
  class MonitorErrorDetails
  {
  public:
    AWS_IOTSITEWISE_API MonitorErrorDetails();
    AWS_IOTSITEWISE_API MonitorErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API MonitorErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code.</p>
     */
    inline const MonitorErrorCode& GetCode() const{ return m_code; }

    /**
     * <p>The error code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(const MonitorErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(MonitorErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code.</p>
     */
    inline MonitorErrorDetails& WithCode(const MonitorErrorCode& value) { SetCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline MonitorErrorDetails& WithCode(MonitorErrorCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message.</p>
     */
    inline MonitorErrorDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline MonitorErrorDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline MonitorErrorDetails& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    MonitorErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
