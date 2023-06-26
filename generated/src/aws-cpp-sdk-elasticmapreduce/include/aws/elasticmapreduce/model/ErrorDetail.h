/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>A tuple that provides information about an error that caused a cluster to
   * terminate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ErrorDetail">AWS
   * API Reference</a></p>
   */
  class ErrorDetail
  {
  public:
    AWS_EMR_API ErrorDetail();
    AWS_EMR_API ErrorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name or code associated with the error.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The name or code associated with the error.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The name or code associated with the error.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The name or code associated with the error.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The name or code associated with the error.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The name or code associated with the error.</p>
     */
    inline ErrorDetail& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The name or code associated with the error.</p>
     */
    inline ErrorDetail& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The name or code associated with the error.</p>
     */
    inline ErrorDetail& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>A list of key value pairs that provides contextual information about why an
     * error occured.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetErrorData() const{ return m_errorData; }

    /**
     * <p>A list of key value pairs that provides contextual information about why an
     * error occured.</p>
     */
    inline bool ErrorDataHasBeenSet() const { return m_errorDataHasBeenSet; }

    /**
     * <p>A list of key value pairs that provides contextual information about why an
     * error occured.</p>
     */
    inline void SetErrorData(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_errorDataHasBeenSet = true; m_errorData = value; }

    /**
     * <p>A list of key value pairs that provides contextual information about why an
     * error occured.</p>
     */
    inline void SetErrorData(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_errorDataHasBeenSet = true; m_errorData = std::move(value); }

    /**
     * <p>A list of key value pairs that provides contextual information about why an
     * error occured.</p>
     */
    inline ErrorDetail& WithErrorData(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetErrorData(value); return *this;}

    /**
     * <p>A list of key value pairs that provides contextual information about why an
     * error occured.</p>
     */
    inline ErrorDetail& WithErrorData(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetErrorData(std::move(value)); return *this;}

    /**
     * <p>A list of key value pairs that provides contextual information about why an
     * error occured.</p>
     */
    inline ErrorDetail& AddErrorData(const Aws::Map<Aws::String, Aws::String>& value) { m_errorDataHasBeenSet = true; m_errorData.push_back(value); return *this; }

    /**
     * <p>A list of key value pairs that provides contextual information about why an
     * error occured.</p>
     */
    inline ErrorDetail& AddErrorData(Aws::Map<Aws::String, Aws::String>&& value) { m_errorDataHasBeenSet = true; m_errorData.push_back(std::move(value)); return *this; }


    /**
     * <p>A message that describes the error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A message that describes the error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>A message that describes the error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>A message that describes the error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>A message that describes the error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>A message that describes the error.</p>
     */
    inline ErrorDetail& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A message that describes the error.</p>
     */
    inline ErrorDetail& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A message that describes the error.</p>
     */
    inline ErrorDetail& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_errorData;
    bool m_errorDataHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
