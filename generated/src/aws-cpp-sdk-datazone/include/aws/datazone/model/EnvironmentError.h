/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The failure reasons for the environment deployment.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EnvironmentError">AWS
   * API Reference</a></p>
   */
  class EnvironmentError
  {
  public:
    AWS_DATAZONE_API EnvironmentError();
    AWS_DATAZONE_API EnvironmentError(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code for the failure reason for the environment deployment.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The error code for the failure reason for the environment deployment.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error code for the failure reason for the environment deployment.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code for the failure reason for the environment deployment.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code for the failure reason for the environment deployment.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The error code for the failure reason for the environment deployment.</p>
     */
    inline EnvironmentError& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The error code for the failure reason for the environment deployment.</p>
     */
    inline EnvironmentError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The error code for the failure reason for the environment deployment.</p>
     */
    inline EnvironmentError& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The error message for the failure reason for the environment deployment.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message for the failure reason for the environment deployment.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message for the failure reason for the environment deployment.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message for the failure reason for the environment deployment.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message for the failure reason for the environment deployment.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message for the failure reason for the environment deployment.</p>
     */
    inline EnvironmentError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message for the failure reason for the environment deployment.</p>
     */
    inline EnvironmentError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message for the failure reason for the environment deployment.</p>
     */
    inline EnvironmentError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
