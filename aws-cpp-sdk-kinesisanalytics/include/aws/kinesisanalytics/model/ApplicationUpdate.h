/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/InputUpdate.h>
#include <aws/kinesisanalytics/model/OutputUpdate.h>
#include <aws/kinesisanalytics/model/ReferenceDataSourceUpdate.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Describes updates to apply to an existing Kinesis Analytics application.</p>
   */
  class AWS_KINESISANALYTICS_API ApplicationUpdate
  {
  public:
    ApplicationUpdate();
    ApplicationUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    ApplicationUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Describes application input configuration updates.</p>
     */
    inline const Aws::Vector<InputUpdate>& GetInputUpdates() const{ return m_inputUpdates; }

    /**
     * <p>Describes application input configuration updates.</p>
     */
    inline void SetInputUpdates(const Aws::Vector<InputUpdate>& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates = value; }

    /**
     * <p>Describes application input configuration updates.</p>
     */
    inline void SetInputUpdates(Aws::Vector<InputUpdate>&& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates = value; }

    /**
     * <p>Describes application input configuration updates.</p>
     */
    inline ApplicationUpdate& WithInputUpdates(const Aws::Vector<InputUpdate>& value) { SetInputUpdates(value); return *this;}

    /**
     * <p>Describes application input configuration updates.</p>
     */
    inline ApplicationUpdate& WithInputUpdates(Aws::Vector<InputUpdate>&& value) { SetInputUpdates(value); return *this;}

    /**
     * <p>Describes application input configuration updates.</p>
     */
    inline ApplicationUpdate& AddInputUpdates(const InputUpdate& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates.push_back(value); return *this; }

    /**
     * <p>Describes application input configuration updates.</p>
     */
    inline ApplicationUpdate& AddInputUpdates(InputUpdate&& value) { m_inputUpdatesHasBeenSet = true; m_inputUpdates.push_back(value); return *this; }

    /**
     * <p>Describes application code updates.</p>
     */
    inline const Aws::String& GetApplicationCodeUpdate() const{ return m_applicationCodeUpdate; }

    /**
     * <p>Describes application code updates.</p>
     */
    inline void SetApplicationCodeUpdate(const Aws::String& value) { m_applicationCodeUpdateHasBeenSet = true; m_applicationCodeUpdate = value; }

    /**
     * <p>Describes application code updates.</p>
     */
    inline void SetApplicationCodeUpdate(Aws::String&& value) { m_applicationCodeUpdateHasBeenSet = true; m_applicationCodeUpdate = value; }

    /**
     * <p>Describes application code updates.</p>
     */
    inline void SetApplicationCodeUpdate(const char* value) { m_applicationCodeUpdateHasBeenSet = true; m_applicationCodeUpdate.assign(value); }

    /**
     * <p>Describes application code updates.</p>
     */
    inline ApplicationUpdate& WithApplicationCodeUpdate(const Aws::String& value) { SetApplicationCodeUpdate(value); return *this;}

    /**
     * <p>Describes application code updates.</p>
     */
    inline ApplicationUpdate& WithApplicationCodeUpdate(Aws::String&& value) { SetApplicationCodeUpdate(value); return *this;}

    /**
     * <p>Describes application code updates.</p>
     */
    inline ApplicationUpdate& WithApplicationCodeUpdate(const char* value) { SetApplicationCodeUpdate(value); return *this;}

    /**
     * <p>Describes application output configuration updates.</p>
     */
    inline const Aws::Vector<OutputUpdate>& GetOutputUpdates() const{ return m_outputUpdates; }

    /**
     * <p>Describes application output configuration updates.</p>
     */
    inline void SetOutputUpdates(const Aws::Vector<OutputUpdate>& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates = value; }

    /**
     * <p>Describes application output configuration updates.</p>
     */
    inline void SetOutputUpdates(Aws::Vector<OutputUpdate>&& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates = value; }

    /**
     * <p>Describes application output configuration updates.</p>
     */
    inline ApplicationUpdate& WithOutputUpdates(const Aws::Vector<OutputUpdate>& value) { SetOutputUpdates(value); return *this;}

    /**
     * <p>Describes application output configuration updates.</p>
     */
    inline ApplicationUpdate& WithOutputUpdates(Aws::Vector<OutputUpdate>&& value) { SetOutputUpdates(value); return *this;}

    /**
     * <p>Describes application output configuration updates.</p>
     */
    inline ApplicationUpdate& AddOutputUpdates(const OutputUpdate& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates.push_back(value); return *this; }

    /**
     * <p>Describes application output configuration updates.</p>
     */
    inline ApplicationUpdate& AddOutputUpdates(OutputUpdate&& value) { m_outputUpdatesHasBeenSet = true; m_outputUpdates.push_back(value); return *this; }

    /**
     * <p>Describes application reference data source updates.</p>
     */
    inline const Aws::Vector<ReferenceDataSourceUpdate>& GetReferenceDataSourceUpdates() const{ return m_referenceDataSourceUpdates; }

    /**
     * <p>Describes application reference data source updates.</p>
     */
    inline void SetReferenceDataSourceUpdates(const Aws::Vector<ReferenceDataSourceUpdate>& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates = value; }

    /**
     * <p>Describes application reference data source updates.</p>
     */
    inline void SetReferenceDataSourceUpdates(Aws::Vector<ReferenceDataSourceUpdate>&& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates = value; }

    /**
     * <p>Describes application reference data source updates.</p>
     */
    inline ApplicationUpdate& WithReferenceDataSourceUpdates(const Aws::Vector<ReferenceDataSourceUpdate>& value) { SetReferenceDataSourceUpdates(value); return *this;}

    /**
     * <p>Describes application reference data source updates.</p>
     */
    inline ApplicationUpdate& WithReferenceDataSourceUpdates(Aws::Vector<ReferenceDataSourceUpdate>&& value) { SetReferenceDataSourceUpdates(value); return *this;}

    /**
     * <p>Describes application reference data source updates.</p>
     */
    inline ApplicationUpdate& AddReferenceDataSourceUpdates(const ReferenceDataSourceUpdate& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates.push_back(value); return *this; }

    /**
     * <p>Describes application reference data source updates.</p>
     */
    inline ApplicationUpdate& AddReferenceDataSourceUpdates(ReferenceDataSourceUpdate&& value) { m_referenceDataSourceUpdatesHasBeenSet = true; m_referenceDataSourceUpdates.push_back(value); return *this; }

  private:
    Aws::Vector<InputUpdate> m_inputUpdates;
    bool m_inputUpdatesHasBeenSet;
    Aws::String m_applicationCodeUpdate;
    bool m_applicationCodeUpdateHasBeenSet;
    Aws::Vector<OutputUpdate> m_outputUpdates;
    bool m_outputUpdatesHasBeenSet;
    Aws::Vector<ReferenceDataSourceUpdate> m_referenceDataSourceUpdates;
    bool m_referenceDataSourceUpdatesHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
