﻿/**
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
  class AWS_ATHENA_API WorkGroupSummary
  {
  public:
    WorkGroupSummary();
    WorkGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    WorkGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the workgroup.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the workgroup.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the workgroup.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the workgroup.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the workgroup.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the workgroup.</p>
     */
    inline WorkGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workgroup.</p>
     */
    inline WorkGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup.</p>
     */
    inline WorkGroupSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The state of the workgroup.</p>
     */
    inline const WorkGroupState& GetState() const{ return m_state; }

    /**
     * <p>The state of the workgroup.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the workgroup.</p>
     */
    inline void SetState(const WorkGroupState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the workgroup.</p>
     */
    inline void SetState(WorkGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the workgroup.</p>
     */
    inline WorkGroupSummary& WithState(const WorkGroupState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the workgroup.</p>
     */
    inline WorkGroupSummary& WithState(WorkGroupState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The workgroup description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The workgroup description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The workgroup description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The workgroup description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The workgroup description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The workgroup description.</p>
     */
    inline WorkGroupSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The workgroup description.</p>
     */
    inline WorkGroupSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The workgroup description.</p>
     */
    inline WorkGroupSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The workgroup creation date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The workgroup creation date and time.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The workgroup creation date and time.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The workgroup creation date and time.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The workgroup creation date and time.</p>
     */
    inline WorkGroupSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The workgroup creation date and time.</p>
     */
    inline WorkGroupSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The engine version setting for all queries on the workgroup. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline const EngineVersion& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version setting for all queries on the workgroup. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version setting for all queries on the workgroup. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline void SetEngineVersion(const EngineVersion& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version setting for all queries on the workgroup. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline void SetEngineVersion(EngineVersion&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version setting for all queries on the workgroup. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline WorkGroupSummary& WithEngineVersion(const EngineVersion& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version setting for all queries on the workgroup. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline WorkGroupSummary& WithEngineVersion(EngineVersion&& value) { SetEngineVersion(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    WorkGroupState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    EngineVersion m_engineVersion;
    bool m_engineVersionHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
