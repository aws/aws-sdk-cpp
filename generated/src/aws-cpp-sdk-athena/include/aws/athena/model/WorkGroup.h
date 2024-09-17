/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/WorkGroupState.h>
#include <aws/athena/model/WorkGroupConfiguration.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>A workgroup, which contains a name, description, creation time, state, and
   * other configuration, listed under <a>WorkGroup$Configuration</a>. Each workgroup
   * enables you to isolate queries for you or your group of users from other queries
   * in the same account, to configure the query results location and the encryption
   * configuration (known as workgroup settings), to enable sending query metrics to
   * Amazon CloudWatch, and to establish per-query data usage control limits for all
   * queries in a workgroup. The workgroup settings override is specified in
   * <code>EnforceWorkGroupConfiguration</code> (true/false) in the
   * <code>WorkGroupConfiguration</code>. See
   * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/WorkGroup">AWS
   * API Reference</a></p>
   */
  class WorkGroup
  {
  public:
    AWS_ATHENA_API WorkGroup();
    AWS_ATHENA_API WorkGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API WorkGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The workgroup name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WorkGroup& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WorkGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WorkGroup& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the workgroup: ENABLED or DISABLED.</p>
     */
    inline const WorkGroupState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const WorkGroupState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(WorkGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline WorkGroup& WithState(const WorkGroupState& value) { SetState(value); return *this;}
    inline WorkGroup& WithState(WorkGroupState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the workgroup, which includes the location in Amazon S3
     * where query and calculation results are stored, the encryption configuration, if
     * any, used for query and calculation results; whether the Amazon CloudWatch
     * Metrics are enabled for the workgroup; whether workgroup settings override
     * client-side settings; and the data usage limits for the amount of data scanned
     * per query or per workgroup. The workgroup settings override is specified in
     * <code>EnforceWorkGroupConfiguration</code> (true/false) in the
     * <code>WorkGroupConfiguration</code>. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline const WorkGroupConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const WorkGroupConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(WorkGroupConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline WorkGroup& WithConfiguration(const WorkGroupConfiguration& value) { SetConfiguration(value); return *this;}
    inline WorkGroup& WithConfiguration(WorkGroupConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
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
    inline WorkGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WorkGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WorkGroup& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the workgroup was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline WorkGroup& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline WorkGroup& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
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
    inline WorkGroup& WithIdentityCenterApplicationArn(const Aws::String& value) { SetIdentityCenterApplicationArn(value); return *this;}
    inline WorkGroup& WithIdentityCenterApplicationArn(Aws::String&& value) { SetIdentityCenterApplicationArn(std::move(value)); return *this;}
    inline WorkGroup& WithIdentityCenterApplicationArn(const char* value) { SetIdentityCenterApplicationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    WorkGroupState m_state;
    bool m_stateHasBeenSet = false;

    WorkGroupConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_identityCenterApplicationArn;
    bool m_identityCenterApplicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
