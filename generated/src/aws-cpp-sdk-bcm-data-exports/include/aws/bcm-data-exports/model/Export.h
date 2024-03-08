/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/model/DataQuery.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-data-exports/model/DestinationConfigurations.h>
#include <aws/bcm-data-exports/model/RefreshCadence.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>The details that are available for an export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/Export">AWS
   * API Reference</a></p>
   */
  class Export
  {
  public:
    AWS_BCMDATAEXPORTS_API Export();
    AWS_BCMDATAEXPORTS_API Export(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Export& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data query for this specific data export.</p>
     */
    inline const DataQuery& GetDataQuery() const{ return m_dataQuery; }

    /**
     * <p>The data query for this specific data export.</p>
     */
    inline bool DataQueryHasBeenSet() const { return m_dataQueryHasBeenSet; }

    /**
     * <p>The data query for this specific data export.</p>
     */
    inline void SetDataQuery(const DataQuery& value) { m_dataQueryHasBeenSet = true; m_dataQuery = value; }

    /**
     * <p>The data query for this specific data export.</p>
     */
    inline void SetDataQuery(DataQuery&& value) { m_dataQueryHasBeenSet = true; m_dataQuery = std::move(value); }

    /**
     * <p>The data query for this specific data export.</p>
     */
    inline Export& WithDataQuery(const DataQuery& value) { SetDataQuery(value); return *this;}

    /**
     * <p>The data query for this specific data export.</p>
     */
    inline Export& WithDataQuery(DataQuery&& value) { SetDataQuery(std::move(value)); return *this;}


    /**
     * <p>The description for this specific data export.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for this specific data export.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for this specific data export.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for this specific data export.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for this specific data export.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for this specific data export.</p>
     */
    inline Export& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for this specific data export.</p>
     */
    inline Export& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for this specific data export.</p>
     */
    inline Export& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The destination configuration for this specific data export.</p>
     */
    inline const DestinationConfigurations& GetDestinationConfigurations() const{ return m_destinationConfigurations; }

    /**
     * <p>The destination configuration for this specific data export.</p>
     */
    inline bool DestinationConfigurationsHasBeenSet() const { return m_destinationConfigurationsHasBeenSet; }

    /**
     * <p>The destination configuration for this specific data export.</p>
     */
    inline void SetDestinationConfigurations(const DestinationConfigurations& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations = value; }

    /**
     * <p>The destination configuration for this specific data export.</p>
     */
    inline void SetDestinationConfigurations(DestinationConfigurations&& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations = std::move(value); }

    /**
     * <p>The destination configuration for this specific data export.</p>
     */
    inline Export& WithDestinationConfigurations(const DestinationConfigurations& value) { SetDestinationConfigurations(value); return *this;}

    /**
     * <p>The destination configuration for this specific data export.</p>
     */
    inline Export& WithDestinationConfigurations(DestinationConfigurations&& value) { SetDestinationConfigurations(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline const Aws::String& GetExportArn() const{ return m_exportArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline bool ExportArnHasBeenSet() const { return m_exportArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline void SetExportArn(const Aws::String& value) { m_exportArnHasBeenSet = true; m_exportArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline void SetExportArn(Aws::String&& value) { m_exportArnHasBeenSet = true; m_exportArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline void SetExportArn(const char* value) { m_exportArnHasBeenSet = true; m_exportArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline Export& WithExportArn(const Aws::String& value) { SetExportArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline Export& WithExportArn(Aws::String&& value) { SetExportArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline Export& WithExportArn(const char* value) { SetExportArn(value); return *this;}


    /**
     * <p>The name of this specific data export.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this specific data export.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this specific data export.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this specific data export.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this specific data export.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this specific data export.</p>
     */
    inline Export& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this specific data export.</p>
     */
    inline Export& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this specific data export.</p>
     */
    inline Export& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The cadence for Amazon Web Services to update the export in your S3
     * bucket.</p>
     */
    inline const RefreshCadence& GetRefreshCadence() const{ return m_refreshCadence; }

    /**
     * <p>The cadence for Amazon Web Services to update the export in your S3
     * bucket.</p>
     */
    inline bool RefreshCadenceHasBeenSet() const { return m_refreshCadenceHasBeenSet; }

    /**
     * <p>The cadence for Amazon Web Services to update the export in your S3
     * bucket.</p>
     */
    inline void SetRefreshCadence(const RefreshCadence& value) { m_refreshCadenceHasBeenSet = true; m_refreshCadence = value; }

    /**
     * <p>The cadence for Amazon Web Services to update the export in your S3
     * bucket.</p>
     */
    inline void SetRefreshCadence(RefreshCadence&& value) { m_refreshCadenceHasBeenSet = true; m_refreshCadence = std::move(value); }

    /**
     * <p>The cadence for Amazon Web Services to update the export in your S3
     * bucket.</p>
     */
    inline Export& WithRefreshCadence(const RefreshCadence& value) { SetRefreshCadence(value); return *this;}

    /**
     * <p>The cadence for Amazon Web Services to update the export in your S3
     * bucket.</p>
     */
    inline Export& WithRefreshCadence(RefreshCadence&& value) { SetRefreshCadence(std::move(value)); return *this;}

  private:

    DataQuery m_dataQuery;
    bool m_dataQueryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DestinationConfigurations m_destinationConfigurations;
    bool m_destinationConfigurationsHasBeenSet = false;

    Aws::String m_exportArn;
    bool m_exportArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RefreshCadence m_refreshCadence;
    bool m_refreshCadenceHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
