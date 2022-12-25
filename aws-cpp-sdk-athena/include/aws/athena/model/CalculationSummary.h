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
    AWS_ATHENA_API CalculationSummary();
    AWS_ATHENA_API CalculationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CalculationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The calculation execution UUID.</p>
     */
    inline const Aws::String& GetCalculationExecutionId() const{ return m_calculationExecutionId; }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline bool CalculationExecutionIdHasBeenSet() const { return m_calculationExecutionIdHasBeenSet; }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline void SetCalculationExecutionId(const Aws::String& value) { m_calculationExecutionIdHasBeenSet = true; m_calculationExecutionId = value; }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline void SetCalculationExecutionId(Aws::String&& value) { m_calculationExecutionIdHasBeenSet = true; m_calculationExecutionId = std::move(value); }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline void SetCalculationExecutionId(const char* value) { m_calculationExecutionIdHasBeenSet = true; m_calculationExecutionId.assign(value); }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline CalculationSummary& WithCalculationExecutionId(const Aws::String& value) { SetCalculationExecutionId(value); return *this;}

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline CalculationSummary& WithCalculationExecutionId(Aws::String&& value) { SetCalculationExecutionId(std::move(value)); return *this;}

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline CalculationSummary& WithCalculationExecutionId(const char* value) { SetCalculationExecutionId(value); return *this;}


    /**
     * <p>A description of the calculation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the calculation.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the calculation.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the calculation.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the calculation.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the calculation.</p>
     */
    inline CalculationSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the calculation.</p>
     */
    inline CalculationSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the calculation.</p>
     */
    inline CalculationSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline const CalculationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline void SetStatus(const CalculationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline void SetStatus(CalculationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline CalculationSummary& WithStatus(const CalculationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline CalculationSummary& WithStatus(CalculationStatus&& value) { SetStatus(std::move(value)); return *this;}

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
