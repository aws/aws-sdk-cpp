/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/PropertyValueEntry.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An error returned by the <code>BatchPutProperty</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/BatchPutPropertyError">AWS
   * API Reference</a></p>
   */
  class BatchPutPropertyError
  {
  public:
    AWS_IOTTWINMAKER_API BatchPutPropertyError();
    AWS_IOTTWINMAKER_API BatchPutPropertyError(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API BatchPutPropertyError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code.</p>
     */
    inline BatchPutPropertyError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline BatchPutPropertyError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline BatchPutPropertyError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message.</p>
     */
    inline BatchPutPropertyError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline BatchPutPropertyError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline BatchPutPropertyError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>An object that contains information about errors returned by the
     * <code>BatchPutProperty</code> action.</p>
     */
    inline const PropertyValueEntry& GetEntry() const{ return m_entry; }

    /**
     * <p>An object that contains information about errors returned by the
     * <code>BatchPutProperty</code> action.</p>
     */
    inline bool EntryHasBeenSet() const { return m_entryHasBeenSet; }

    /**
     * <p>An object that contains information about errors returned by the
     * <code>BatchPutProperty</code> action.</p>
     */
    inline void SetEntry(const PropertyValueEntry& value) { m_entryHasBeenSet = true; m_entry = value; }

    /**
     * <p>An object that contains information about errors returned by the
     * <code>BatchPutProperty</code> action.</p>
     */
    inline void SetEntry(PropertyValueEntry&& value) { m_entryHasBeenSet = true; m_entry = std::move(value); }

    /**
     * <p>An object that contains information about errors returned by the
     * <code>BatchPutProperty</code> action.</p>
     */
    inline BatchPutPropertyError& WithEntry(const PropertyValueEntry& value) { SetEntry(value); return *this;}

    /**
     * <p>An object that contains information about errors returned by the
     * <code>BatchPutProperty</code> action.</p>
     */
    inline BatchPutPropertyError& WithEntry(PropertyValueEntry&& value) { SetEntry(std::move(value)); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    PropertyValueEntry m_entry;
    bool m_entryHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
