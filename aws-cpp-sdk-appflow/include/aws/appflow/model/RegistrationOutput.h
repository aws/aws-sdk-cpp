/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ExecutionStatus.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>Describes the status of an attempt from Amazon AppFlow to register a
   * resource.</p> <p>When you run a flow that you've configured to use a metadata
   * catalog, Amazon AppFlow registers a metadata table and data partitions with that
   * catalog. This operation provides the status of that registration attempt. The
   * operation also indicates how many related resources Amazon AppFlow created or
   * updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/RegistrationOutput">AWS
   * API Reference</a></p>
   */
  class RegistrationOutput
  {
  public:
    AWS_APPFLOW_API RegistrationOutput();
    AWS_APPFLOW_API RegistrationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API RegistrationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Explains the status of the registration attempt from Amazon AppFlow. If the
     * attempt fails, the message explains why.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Explains the status of the registration attempt from Amazon AppFlow. If the
     * attempt fails, the message explains why.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Explains the status of the registration attempt from Amazon AppFlow. If the
     * attempt fails, the message explains why.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Explains the status of the registration attempt from Amazon AppFlow. If the
     * attempt fails, the message explains why.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Explains the status of the registration attempt from Amazon AppFlow. If the
     * attempt fails, the message explains why.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Explains the status of the registration attempt from Amazon AppFlow. If the
     * attempt fails, the message explains why.</p>
     */
    inline RegistrationOutput& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Explains the status of the registration attempt from Amazon AppFlow. If the
     * attempt fails, the message explains why.</p>
     */
    inline RegistrationOutput& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Explains the status of the registration attempt from Amazon AppFlow. If the
     * attempt fails, the message explains why.</p>
     */
    inline RegistrationOutput& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Indicates the number of resources that Amazon AppFlow created or updated.
     * Possible resources include metadata tables and data partitions.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * <p>Indicates the number of resources that Amazon AppFlow created or updated.
     * Possible resources include metadata tables and data partitions.</p>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>Indicates the number of resources that Amazon AppFlow created or updated.
     * Possible resources include metadata tables and data partitions.</p>
     */
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>Indicates the number of resources that Amazon AppFlow created or updated.
     * Possible resources include metadata tables and data partitions.</p>
     */
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>Indicates the number of resources that Amazon AppFlow created or updated.
     * Possible resources include metadata tables and data partitions.</p>
     */
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }

    /**
     * <p>Indicates the number of resources that Amazon AppFlow created or updated.
     * Possible resources include metadata tables and data partitions.</p>
     */
    inline RegistrationOutput& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * <p>Indicates the number of resources that Amazon AppFlow created or updated.
     * Possible resources include metadata tables and data partitions.</p>
     */
    inline RegistrationOutput& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p>Indicates the number of resources that Amazon AppFlow created or updated.
     * Possible resources include metadata tables and data partitions.</p>
     */
    inline RegistrationOutput& WithResult(const char* value) { SetResult(value); return *this;}


    /**
     * <p>Indicates the status of the registration attempt from Amazon AppFlow.</p>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the registration attempt from Amazon AppFlow.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates the status of the registration attempt from Amazon AppFlow.</p>
     */
    inline void SetStatus(const ExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates the status of the registration attempt from Amazon AppFlow.</p>
     */
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates the status of the registration attempt from Amazon AppFlow.</p>
     */
    inline RegistrationOutput& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the registration attempt from Amazon AppFlow.</p>
     */
    inline RegistrationOutput& WithStatus(ExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_result;
    bool m_resultHasBeenSet = false;

    ExecutionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
