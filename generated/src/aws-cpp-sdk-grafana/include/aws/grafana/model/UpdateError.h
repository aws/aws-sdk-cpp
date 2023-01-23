/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/UpdateInstruction.h>
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
namespace ManagedGrafana
{
namespace Model
{

  /**
   * <p>A structure containing information about one error encountered while
   * performing an <a
   * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_UpdatePermissions.html">UpdatePermissions</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdateError">AWS
   * API Reference</a></p>
   */
  class UpdateError
  {
  public:
    AWS_MANAGEDGRAFANA_API UpdateError();
    AWS_MANAGEDGRAFANA_API UpdateError(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API UpdateError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies which permission update caused the error.</p>
     */
    inline const UpdateInstruction& GetCausedBy() const{ return m_causedBy; }

    /**
     * <p>Specifies which permission update caused the error.</p>
     */
    inline bool CausedByHasBeenSet() const { return m_causedByHasBeenSet; }

    /**
     * <p>Specifies which permission update caused the error.</p>
     */
    inline void SetCausedBy(const UpdateInstruction& value) { m_causedByHasBeenSet = true; m_causedBy = value; }

    /**
     * <p>Specifies which permission update caused the error.</p>
     */
    inline void SetCausedBy(UpdateInstruction&& value) { m_causedByHasBeenSet = true; m_causedBy = std::move(value); }

    /**
     * <p>Specifies which permission update caused the error.</p>
     */
    inline UpdateError& WithCausedBy(const UpdateInstruction& value) { SetCausedBy(value); return *this;}

    /**
     * <p>Specifies which permission update caused the error.</p>
     */
    inline UpdateError& WithCausedBy(UpdateInstruction&& value) { SetCausedBy(std::move(value)); return *this;}


    /**
     * <p>The error code.</p>
     */
    inline int GetCode() const{ return m_code; }

    /**
     * <p>The error code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code.</p>
     */
    inline UpdateError& WithCode(int value) { SetCode(value); return *this;}


    /**
     * <p>The message for this error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message for this error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message for this error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message for this error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message for this error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message for this error.</p>
     */
    inline UpdateError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message for this error.</p>
     */
    inline UpdateError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message for this error.</p>
     */
    inline UpdateError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    UpdateInstruction m_causedBy;
    bool m_causedByHasBeenSet = false;

    int m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
