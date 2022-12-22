/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/ManifestStatus.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about a vehicle model (model manifest). You can use the API
   * operation to return this information about multiple vehicle
   * models.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ModelManifestSummary">AWS
   * API Reference</a></p>
   */
  class ModelManifestSummary
  {
  public:
    AWS_IOTFLEETWISE_API ModelManifestSummary();
    AWS_IOTFLEETWISE_API ModelManifestSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API ModelManifestSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the vehicle model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the vehicle model.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the vehicle model.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the vehicle model.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the vehicle model.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the vehicle model.</p>
     */
    inline ModelManifestSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the vehicle model.</p>
     */
    inline ModelManifestSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the vehicle model.</p>
     */
    inline ModelManifestSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle model.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle model.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle model.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle model.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle model.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle model.</p>
     */
    inline ModelManifestSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle model.</p>
     */
    inline ModelManifestSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle model.</p>
     */
    inline ModelManifestSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ARN of the signal catalog associated with the vehicle model.</p>
     */
    inline const Aws::String& GetSignalCatalogArn() const{ return m_signalCatalogArn; }

    /**
     * <p>The ARN of the signal catalog associated with the vehicle model.</p>
     */
    inline bool SignalCatalogArnHasBeenSet() const { return m_signalCatalogArnHasBeenSet; }

    /**
     * <p>The ARN of the signal catalog associated with the vehicle model.</p>
     */
    inline void SetSignalCatalogArn(const Aws::String& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = value; }

    /**
     * <p>The ARN of the signal catalog associated with the vehicle model.</p>
     */
    inline void SetSignalCatalogArn(Aws::String&& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = std::move(value); }

    /**
     * <p>The ARN of the signal catalog associated with the vehicle model.</p>
     */
    inline void SetSignalCatalogArn(const char* value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn.assign(value); }

    /**
     * <p>The ARN of the signal catalog associated with the vehicle model.</p>
     */
    inline ModelManifestSummary& WithSignalCatalogArn(const Aws::String& value) { SetSignalCatalogArn(value); return *this;}

    /**
     * <p>The ARN of the signal catalog associated with the vehicle model.</p>
     */
    inline ModelManifestSummary& WithSignalCatalogArn(Aws::String&& value) { SetSignalCatalogArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the signal catalog associated with the vehicle model.</p>
     */
    inline ModelManifestSummary& WithSignalCatalogArn(const char* value) { SetSignalCatalogArn(value); return *this;}


    /**
     * <p>A brief description of the vehicle model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the vehicle model.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the vehicle model.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the vehicle model.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the vehicle model.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the vehicle model.</p>
     */
    inline ModelManifestSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the vehicle model.</p>
     */
    inline ModelManifestSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the vehicle model.</p>
     */
    inline ModelManifestSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The state of the vehicle model. If the status is <code>ACTIVE</code>, the
     * vehicle model can't be edited. If the status is <code>DRAFT</code>, you can edit
     * the vehicle model.</p>
     */
    inline const ManifestStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The state of the vehicle model. If the status is <code>ACTIVE</code>, the
     * vehicle model can't be edited. If the status is <code>DRAFT</code>, you can edit
     * the vehicle model.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The state of the vehicle model. If the status is <code>ACTIVE</code>, the
     * vehicle model can't be edited. If the status is <code>DRAFT</code>, you can edit
     * the vehicle model.</p>
     */
    inline void SetStatus(const ManifestStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The state of the vehicle model. If the status is <code>ACTIVE</code>, the
     * vehicle model can't be edited. If the status is <code>DRAFT</code>, you can edit
     * the vehicle model.</p>
     */
    inline void SetStatus(ManifestStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The state of the vehicle model. If the status is <code>ACTIVE</code>, the
     * vehicle model can't be edited. If the status is <code>DRAFT</code>, you can edit
     * the vehicle model.</p>
     */
    inline ModelManifestSummary& WithStatus(const ManifestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The state of the vehicle model. If the status is <code>ACTIVE</code>, the
     * vehicle model can't be edited. If the status is <code>DRAFT</code>, you can edit
     * the vehicle model.</p>
     */
    inline ModelManifestSummary& WithStatus(ManifestStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time the vehicle model was created, in seconds since epoch (January 1,
     * 1970 at midnight UTC time).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the vehicle model was created, in seconds since epoch (January 1,
     * 1970 at midnight UTC time).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the vehicle model was created, in seconds since epoch (January 1,
     * 1970 at midnight UTC time).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the vehicle model was created, in seconds since epoch (January 1,
     * 1970 at midnight UTC time).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the vehicle model was created, in seconds since epoch (January 1,
     * 1970 at midnight UTC time).</p>
     */
    inline ModelManifestSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the vehicle model was created, in seconds since epoch (January 1,
     * 1970 at midnight UTC time).</p>
     */
    inline ModelManifestSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the vehicle model was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>The time the vehicle model was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time).</p>
     */
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }

    /**
     * <p>The time the vehicle model was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time).</p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }

    /**
     * <p>The time the vehicle model was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time).</p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }

    /**
     * <p>The time the vehicle model was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time).</p>
     */
    inline ModelManifestSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The time the vehicle model was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time).</p>
     */
    inline ModelManifestSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_signalCatalogArn;
    bool m_signalCatalogArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ManifestStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
