/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/DataReplicationInitiationStepName.h>
#include <aws/drs/model/DataReplicationInitiationStepStatus.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Data replication initiation step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DataReplicationInitiationStep">AWS
   * API Reference</a></p>
   */
  class DataReplicationInitiationStep
  {
  public:
    AWS_DRS_API DataReplicationInitiationStep();
    AWS_DRS_API DataReplicationInitiationStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DataReplicationInitiationStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the step.</p>
     */
    inline const DataReplicationInitiationStepName& GetName() const{ return m_name; }

    /**
     * <p>The name of the step.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const DataReplicationInitiationStepName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(DataReplicationInitiationStepName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline DataReplicationInitiationStep& WithName(const DataReplicationInitiationStepName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline DataReplicationInitiationStep& WithName(DataReplicationInitiationStepName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The status of the step.</p>
     */
    inline const DataReplicationInitiationStepStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the step.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the step.</p>
     */
    inline void SetStatus(const DataReplicationInitiationStepStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the step.</p>
     */
    inline void SetStatus(DataReplicationInitiationStepStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the step.</p>
     */
    inline DataReplicationInitiationStep& WithStatus(const DataReplicationInitiationStepStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the step.</p>
     */
    inline DataReplicationInitiationStep& WithStatus(DataReplicationInitiationStepStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    DataReplicationInitiationStepName m_name;
    bool m_nameHasBeenSet = false;

    DataReplicationInitiationStepStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
