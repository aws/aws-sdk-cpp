/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/model/ApplicationState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/emr-serverless/model/Architecture.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The summary of attributes associated with an application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/ApplicationSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationSummary
  {
  public:
    AWS_EMRSERVERLESS_API ApplicationSummary();
    AWS_EMRSERVERLESS_API ApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API ApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ApplicationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ApplicationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ApplicationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ApplicationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ApplicationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ApplicationSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ApplicationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ApplicationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ApplicationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EMR release associated with the application.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }
    inline ApplicationSummary& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}
    inline ApplicationSummary& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}
    inline ApplicationSummary& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of application, such as Spark or Hive.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ApplicationSummary& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ApplicationSummary& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ApplicationSummary& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the application.</p>
     */
    inline const ApplicationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ApplicationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ApplicationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ApplicationSummary& WithState(const ApplicationState& value) { SetState(value); return *this;}
    inline ApplicationSummary& WithState(ApplicationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state details of the application.</p>
     */
    inline const Aws::String& GetStateDetails() const{ return m_stateDetails; }
    inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }
    inline void SetStateDetails(const Aws::String& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = value; }
    inline void SetStateDetails(Aws::String&& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = std::move(value); }
    inline void SetStateDetails(const char* value) { m_stateDetailsHasBeenSet = true; m_stateDetails.assign(value); }
    inline ApplicationSummary& WithStateDetails(const Aws::String& value) { SetStateDetails(value); return *this;}
    inline ApplicationSummary& WithStateDetails(Aws::String&& value) { SetStateDetails(std::move(value)); return *this;}
    inline ApplicationSummary& WithStateDetails(const char* value) { SetStateDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ApplicationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ApplicationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the application was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline ApplicationSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline ApplicationSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU architecture of an application.</p>
     */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const Architecture& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(Architecture&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline ApplicationSummary& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}
    inline ApplicationSummary& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    ApplicationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateDetails;
    bool m_stateDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Architecture m_architecture;
    bool m_architectureHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
