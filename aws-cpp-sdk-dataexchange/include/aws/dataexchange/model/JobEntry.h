/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dataexchange/model/ResponseDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/model/State.h>
#include <aws/dataexchange/model/Type.h>
#include <aws/dataexchange/model/JobError.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>AWS Data Exchange Jobs are asynchronous import or export operations used to
   * create or copy assets. A data set owner can both import and export as they see
   * fit. Someone with an entitlement to a data set can only export. Jobs are deleted
   * 90 days after they are created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/JobEntry">AWS
   * API Reference</a></p>
   */
  class JobEntry
  {
  public:
    AWS_DATAEXCHANGE_API JobEntry();
    AWS_DATAEXCHANGE_API JobEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API JobEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN for the job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the job.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN for the job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN for the job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN for the job.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN for the job.</p>
     */
    inline JobEntry& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the job.</p>
     */
    inline JobEntry& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the job.</p>
     */
    inline JobEntry& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that the job was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the job was created, in ISO 8601 format.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the job was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the job was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the job was created, in ISO 8601 format.</p>
     */
    inline JobEntry& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the job was created, in ISO 8601 format.</p>
     */
    inline JobEntry& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Details of the operation to be performed by the job, such as export
     * destination details or import source details.</p>
     */
    inline const ResponseDetails& GetDetails() const{ return m_details; }

    /**
     * <p>Details of the operation to be performed by the job, such as export
     * destination details or import source details.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>Details of the operation to be performed by the job, such as export
     * destination details or import source details.</p>
     */
    inline void SetDetails(const ResponseDetails& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>Details of the operation to be performed by the job, such as export
     * destination details or import source details.</p>
     */
    inline void SetDetails(ResponseDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>Details of the operation to be performed by the job, such as export
     * destination details or import source details.</p>
     */
    inline JobEntry& WithDetails(const ResponseDetails& value) { SetDetails(value); return *this;}

    /**
     * <p>Details of the operation to be performed by the job, such as export
     * destination details or import source details.</p>
     */
    inline JobEntry& WithDetails(ResponseDetails&& value) { SetDetails(std::move(value)); return *this;}


    /**
     * <p>Errors for jobs.</p>
     */
    inline const Aws::Vector<JobError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Errors for jobs.</p>
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * <p>Errors for jobs.</p>
     */
    inline void SetErrors(const Aws::Vector<JobError>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * <p>Errors for jobs.</p>
     */
    inline void SetErrors(Aws::Vector<JobError>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * <p>Errors for jobs.</p>
     */
    inline JobEntry& WithErrors(const Aws::Vector<JobError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Errors for jobs.</p>
     */
    inline JobEntry& WithErrors(Aws::Vector<JobError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Errors for jobs.</p>
     */
    inline JobEntry& AddErrors(const JobError& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

    /**
     * <p>Errors for jobs.</p>
     */
    inline JobEntry& AddErrors(JobError&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier for the job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the job.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the job.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the job.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the job.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the job.</p>
     */
    inline JobEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the job.</p>
     */
    inline JobEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the job.</p>
     */
    inline JobEntry& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The state of the job.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The state of the job.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the job.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the job.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the job.</p>
     */
    inline JobEntry& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The state of the job.</p>
     */
    inline JobEntry& WithState(State&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The job type.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The job type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The job type.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The job type.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The job type.</p>
     */
    inline JobEntry& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The job type.</p>
     */
    inline JobEntry& WithType(Type&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The date and time that the job was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time that the job was last updated, in ISO 8601 format.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time that the job was last updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time that the job was last updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time that the job was last updated, in ISO 8601 format.</p>
     */
    inline JobEntry& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the job was last updated, in ISO 8601 format.</p>
     */
    inline JobEntry& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ResponseDetails m_details;
    bool m_detailsHasBeenSet = false;

    Aws::Vector<JobError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    State m_state;
    bool m_stateHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
