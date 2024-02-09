/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Array.h>
#include <aws/amp/model/AlertManagerDefinitionStatus.h>
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
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>The details of an alert manager definition. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/AlertManagerDefinitionDescription">AWS
   * API Reference</a></p>
   */
  class AlertManagerDefinitionDescription
  {
  public:
    AWS_PROMETHEUSSERVICE_API AlertManagerDefinitionDescription();
    AWS_PROMETHEUSSERVICE_API AlertManagerDefinitionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API AlertManagerDefinitionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time that the alert manager definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the alert manager definition was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the alert manager definition was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the alert manager definition was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the alert manager definition was created.</p>
     */
    inline AlertManagerDefinitionDescription& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the alert manager definition was created.</p>
     */
    inline AlertManagerDefinitionDescription& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The actual alert manager definition.</p> <p>For details about the alert
     * manager definition, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/APIReference/yaml-AlertManagerDefinitionData.html">AlertManagedDefinitionData</a>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const{ return m_data; }

    /**
     * <p>The actual alert manager definition.</p> <p>For details about the alert
     * manager definition, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/APIReference/yaml-AlertManagerDefinitionData.html">AlertManagedDefinitionData</a>.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The actual alert manager definition.</p> <p>For details about the alert
     * manager definition, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/APIReference/yaml-AlertManagerDefinitionData.html">AlertManagedDefinitionData</a>.</p>
     */
    inline void SetData(const Aws::Utils::ByteBuffer& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The actual alert manager definition.</p> <p>For details about the alert
     * manager definition, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/APIReference/yaml-AlertManagerDefinitionData.html">AlertManagedDefinitionData</a>.</p>
     */
    inline void SetData(Aws::Utils::ByteBuffer&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The actual alert manager definition.</p> <p>For details about the alert
     * manager definition, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/APIReference/yaml-AlertManagerDefinitionData.html">AlertManagedDefinitionData</a>.</p>
     */
    inline AlertManagerDefinitionDescription& WithData(const Aws::Utils::ByteBuffer& value) { SetData(value); return *this;}

    /**
     * <p>The actual alert manager definition.</p> <p>For details about the alert
     * manager definition, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/APIReference/yaml-AlertManagerDefinitionData.html">AlertManagedDefinitionData</a>.</p>
     */
    inline AlertManagerDefinitionDescription& WithData(Aws::Utils::ByteBuffer&& value) { SetData(std::move(value)); return *this;}


    /**
     * <p>The date and time that the alert manager definition was most recently
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The date and time that the alert manager definition was most recently
     * changed.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>The date and time that the alert manager definition was most recently
     * changed.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>The date and time that the alert manager definition was most recently
     * changed.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>The date and time that the alert manager definition was most recently
     * changed.</p>
     */
    inline AlertManagerDefinitionDescription& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The date and time that the alert manager definition was most recently
     * changed.</p>
     */
    inline AlertManagerDefinitionDescription& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>A structure that displays the current status of the alert manager
     * definition..</p>
     */
    inline const AlertManagerDefinitionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A structure that displays the current status of the alert manager
     * definition..</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A structure that displays the current status of the alert manager
     * definition..</p>
     */
    inline void SetStatus(const AlertManagerDefinitionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A structure that displays the current status of the alert manager
     * definition..</p>
     */
    inline void SetStatus(AlertManagerDefinitionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A structure that displays the current status of the alert manager
     * definition..</p>
     */
    inline AlertManagerDefinitionDescription& WithStatus(const AlertManagerDefinitionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A structure that displays the current status of the alert manager
     * definition..</p>
     */
    inline AlertManagerDefinitionDescription& WithStatus(AlertManagerDefinitionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::ByteBuffer m_data;
    bool m_dataHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    AlertManagerDefinitionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
