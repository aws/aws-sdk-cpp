/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/WorkGroupState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/athena/model/EngineVersion.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>The summary information for the workgroup, which includes its name, state,
   * description, and the date and time it was created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/WorkGroupSummary">AWS
   * API Reference</a></p>
   */
  class WorkGroupSummary
  {
  public:
    AWS_ATHENA_API WorkGroupSummary();
    AWS_ATHENA_API WorkGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API WorkGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the workgroup.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WorkGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WorkGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WorkGroupSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the workgroup.</p>
     */
    inline const WorkGroupState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const WorkGroupState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(WorkGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline WorkGroupSummary& WithState(const WorkGroupState& value) { SetState(value); return *this;}
    inline WorkGroupSummary& WithState(WorkGroupState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workgroup description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline WorkGroupSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WorkGroupSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WorkGroupSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workgroup creation date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline WorkGroupSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline WorkGroupSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version setting for all queries on the workgroup. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline const EngineVersion& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const EngineVersion& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(EngineVersion&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline WorkGroupSummary& WithEngineVersion(const EngineVersion& value) { SetEngineVersion(value); return *this;}
    inline WorkGroupSummary& WithEngineVersion(EngineVersion&& value) { SetEngineVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Identity Center enabled application associated with the
     * workgroup.</p>
     */
    inline const Aws::String& GetIdentityCenterApplicationArn() const{ return m_identityCenterApplicationArn; }
    inline bool IdentityCenterApplicationArnHasBeenSet() const { return m_identityCenterApplicationArnHasBeenSet; }
    inline void SetIdentityCenterApplicationArn(const Aws::String& value) { m_identityCenterApplicationArnHasBeenSet = true; m_identityCenterApplicationArn = value; }
    inline void SetIdentityCenterApplicationArn(Aws::String&& value) { m_identityCenterApplicationArnHasBeenSet = true; m_identityCenterApplicationArn = std::move(value); }
    inline void SetIdentityCenterApplicationArn(const char* value) { m_identityCenterApplicationArnHasBeenSet = true; m_identityCenterApplicationArn.assign(value); }
    inline WorkGroupSummary& WithIdentityCenterApplicationArn(const Aws::String& value) { SetIdentityCenterApplicationArn(value); return *this;}
    inline WorkGroupSummary& WithIdentityCenterApplicationArn(Aws::String&& value) { SetIdentityCenterApplicationArn(std::move(value)); return *this;}
    inline WorkGroupSummary& WithIdentityCenterApplicationArn(const char* value) { SetIdentityCenterApplicationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    WorkGroupState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    EngineVersion m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_identityCenterApplicationArn;
    bool m_identityCenterApplicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
