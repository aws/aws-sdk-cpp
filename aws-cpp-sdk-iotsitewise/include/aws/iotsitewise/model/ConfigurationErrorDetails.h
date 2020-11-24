/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ErrorCode.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ConfigurationErrorDetails">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API ConfigurationErrorDetails
  {
  public:
    ConfigurationErrorDetails();
    ConfigurationErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    ConfigurationErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const ErrorCode& GetCode() const{ return m_code; }

    /**
     * <p/>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCode(const ErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p/>
     */
    inline void SetCode(ErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p/>
     */
    inline ConfigurationErrorDetails& WithCode(const ErrorCode& value) { SetCode(value); return *this;}

    /**
     * <p/>
     */
    inline ConfigurationErrorDetails& WithCode(ErrorCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p/>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p/>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p/>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p/>
     */
    inline ConfigurationErrorDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p/>
     */
    inline ConfigurationErrorDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ConfigurationErrorDetails& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ErrorCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
