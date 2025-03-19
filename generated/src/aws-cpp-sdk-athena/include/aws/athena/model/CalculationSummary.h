/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/CalculationStatus.h>
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
   * <p>Summary information for a notebook calculation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CalculationSummary">AWS
   * API Reference</a></p>
   */
  class CalculationSummary
  {
  public:
    AWS_ATHENA_API CalculationSummary() = default;
    AWS_ATHENA_API CalculationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CalculationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The calculation execution UUID.</p>
     */
    inline const Aws::String& GetCalculationExecutionId() const { return m_calculationExecutionId; }
    inline bool CalculationExecutionIdHasBeenSet() const { return m_calculationExecutionIdHasBeenSet; }
    template<typename CalculationExecutionIdT = Aws::String>
    void SetCalculationExecutionId(CalculationExecutionIdT&& value) { m_calculationExecutionIdHasBeenSet = true; m_calculationExecutionId = std::forward<CalculationExecutionIdT>(value); }
    template<typename CalculationExecutionIdT = Aws::String>
    CalculationSummary& WithCalculationExecutionId(CalculationExecutionIdT&& value) { SetCalculationExecutionId(std::forward<CalculationExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the calculation.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CalculationSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline const CalculationStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = CalculationStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = CalculationStatus>
    CalculationSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_calculationExecutionId;
    bool m_calculationExecutionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CalculationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
