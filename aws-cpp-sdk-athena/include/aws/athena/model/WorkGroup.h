/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * EnforceWorkGroupConfiguration (true/false) in the WorkGroupConfiguration. See
   * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/WorkGroup">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API WorkGroup
  {
  public:
    WorkGroup();
    WorkGroup(Aws::Utils::Json::JsonView jsonValue);
    WorkGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The workgroup name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The workgroup name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The workgroup name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The workgroup name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The workgroup name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The workgroup name.</p>
     */
    inline WorkGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The workgroup name.</p>
     */
    inline WorkGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The workgroup name.</p>
     */
    inline WorkGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The state of the workgroup: ENABLED or DISABLED.</p>
     */
    inline const WorkGroupState& GetState() const{ return m_state; }

    /**
     * <p>The state of the workgroup: ENABLED or DISABLED.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the workgroup: ENABLED or DISABLED.</p>
     */
    inline void SetState(const WorkGroupState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the workgroup: ENABLED or DISABLED.</p>
     */
    inline void SetState(WorkGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the workgroup: ENABLED or DISABLED.</p>
     */
    inline WorkGroup& WithState(const WorkGroupState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the workgroup: ENABLED or DISABLED.</p>
     */
    inline WorkGroup& WithState(WorkGroupState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The configuration of the workgroup, which includes the location in Amazon S3
     * where query results are stored, the encryption configuration, if any, used for
     * query results; whether the Amazon CloudWatch Metrics are enabled for the
     * workgroup; whether workgroup settings override client-side settings; and the
     * data usage limit for the amount of data scanned per query, if it is specified.
     * The workgroup settings override is specified in EnforceWorkGroupConfiguration
     * (true/false) in the WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline const WorkGroupConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration of the workgroup, which includes the location in Amazon S3
     * where query results are stored, the encryption configuration, if any, used for
     * query results; whether the Amazon CloudWatch Metrics are enabled for the
     * workgroup; whether workgroup settings override client-side settings; and the
     * data usage limit for the amount of data scanned per query, if it is specified.
     * The workgroup settings override is specified in EnforceWorkGroupConfiguration
     * (true/false) in the WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration of the workgroup, which includes the location in Amazon S3
     * where query results are stored, the encryption configuration, if any, used for
     * query results; whether the Amazon CloudWatch Metrics are enabled for the
     * workgroup; whether workgroup settings override client-side settings; and the
     * data usage limit for the amount of data scanned per query, if it is specified.
     * The workgroup settings override is specified in EnforceWorkGroupConfiguration
     * (true/false) in the WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline void SetConfiguration(const WorkGroupConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration of the workgroup, which includes the location in Amazon S3
     * where query results are stored, the encryption configuration, if any, used for
     * query results; whether the Amazon CloudWatch Metrics are enabled for the
     * workgroup; whether workgroup settings override client-side settings; and the
     * data usage limit for the amount of data scanned per query, if it is specified.
     * The workgroup settings override is specified in EnforceWorkGroupConfiguration
     * (true/false) in the WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline void SetConfiguration(WorkGroupConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration of the workgroup, which includes the location in Amazon S3
     * where query results are stored, the encryption configuration, if any, used for
     * query results; whether the Amazon CloudWatch Metrics are enabled for the
     * workgroup; whether workgroup settings override client-side settings; and the
     * data usage limit for the amount of data scanned per query, if it is specified.
     * The workgroup settings override is specified in EnforceWorkGroupConfiguration
     * (true/false) in the WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline WorkGroup& WithConfiguration(const WorkGroupConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration of the workgroup, which includes the location in Amazon S3
     * where query results are stored, the encryption configuration, if any, used for
     * query results; whether the Amazon CloudWatch Metrics are enabled for the
     * workgroup; whether workgroup settings override client-side settings; and the
     * data usage limit for the amount of data scanned per query, if it is specified.
     * The workgroup settings override is specified in EnforceWorkGroupConfiguration
     * (true/false) in the WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline WorkGroup& WithConfiguration(WorkGroupConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


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
    inline WorkGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The workgroup description.</p>
     */
    inline WorkGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The workgroup description.</p>
     */
    inline WorkGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time the workgroup was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time the workgroup was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time the workgroup was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time the workgroup was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time the workgroup was created.</p>
     */
    inline WorkGroup& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time the workgroup was created.</p>
     */
    inline WorkGroup& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    WorkGroupState m_state;
    bool m_stateHasBeenSet;

    WorkGroupConfiguration m_configuration;
    bool m_configurationHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
