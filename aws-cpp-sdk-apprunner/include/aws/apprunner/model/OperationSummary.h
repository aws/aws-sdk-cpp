/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/OperationType.h>
#include <aws/apprunner/model/OperationStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Provides summary information for an operation that occurred on an App Runner
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/OperationSummary">AWS
   * API Reference</a></p>
   */
  class OperationSummary
  {
  public:
    AWS_APPRUNNER_API OperationSummary();
    AWS_APPRUNNER_API OperationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API OperationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique ID of this operation. It's unique in the scope of the App Runner
     * service.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique ID of this operation. It's unique in the scope of the App Runner
     * service.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique ID of this operation. It's unique in the scope of the App Runner
     * service.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique ID of this operation. It's unique in the scope of the App Runner
     * service.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique ID of this operation. It's unique in the scope of the App Runner
     * service.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique ID of this operation. It's unique in the scope of the App Runner
     * service.</p>
     */
    inline OperationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique ID of this operation. It's unique in the scope of the App Runner
     * service.</p>
     */
    inline OperationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique ID of this operation. It's unique in the scope of the App Runner
     * service.</p>
     */
    inline OperationSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of operation. It indicates a specific action that occured.</p>
     */
    inline const OperationType& GetType() const{ return m_type; }

    /**
     * <p>The type of operation. It indicates a specific action that occured.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of operation. It indicates a specific action that occured.</p>
     */
    inline void SetType(const OperationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of operation. It indicates a specific action that occured.</p>
     */
    inline void SetType(OperationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of operation. It indicates a specific action that occured.</p>
     */
    inline OperationSummary& WithType(const OperationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of operation. It indicates a specific action that occured.</p>
     */
    inline OperationSummary& WithType(OperationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The current state of the operation.</p>
     */
    inline const OperationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the operation.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the operation.</p>
     */
    inline void SetStatus(const OperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the operation.</p>
     */
    inline void SetStatus(OperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the operation.</p>
     */
    inline OperationSummary& WithStatus(const OperationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the operation.</p>
     */
    inline OperationSummary& WithStatus(OperationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the operation acted on
     * (for example, an App Runner service).</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the operation acted on
     * (for example, an App Runner service).</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the operation acted on
     * (for example, an App Runner service).</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the operation acted on
     * (for example, an App Runner service).</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the operation acted on
     * (for example, an App Runner service).</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the operation acted on
     * (for example, an App Runner service).</p>
     */
    inline OperationSummary& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the operation acted on
     * (for example, an App Runner service).</p>
     */
    inline OperationSummary& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the operation acted on
     * (for example, an App Runner service).</p>
     */
    inline OperationSummary& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The time when the operation started. It's in the Unix time stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The time when the operation started. It's in the Unix time stamp format.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The time when the operation started. It's in the Unix time stamp format.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The time when the operation started. It's in the Unix time stamp format.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The time when the operation started. It's in the Unix time stamp format.</p>
     */
    inline OperationSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The time when the operation started. It's in the Unix time stamp format.</p>
     */
    inline OperationSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The time when the operation ended. It's in the Unix time stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>The time when the operation ended. It's in the Unix time stamp format.</p>
     */
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }

    /**
     * <p>The time when the operation ended. It's in the Unix time stamp format.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }

    /**
     * <p>The time when the operation ended. It's in the Unix time stamp format.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }

    /**
     * <p>The time when the operation ended. It's in the Unix time stamp format.</p>
     */
    inline OperationSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The time when the operation ended. It's in the Unix time stamp format.</p>
     */
    inline OperationSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The time when the operation was last updated. It's in the Unix time stamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time when the operation was last updated. It's in the Unix time stamp
     * format.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time when the operation was last updated. It's in the Unix time stamp
     * format.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time when the operation was last updated. It's in the Unix time stamp
     * format.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time when the operation was last updated. It's in the Unix time stamp
     * format.</p>
     */
    inline OperationSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time when the operation was last updated. It's in the Unix time stamp
     * format.</p>
     */
    inline OperationSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    OperationType m_type;
    bool m_typeHasBeenSet = false;

    OperationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
