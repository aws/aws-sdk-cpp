/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>An OTA update summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/OTAUpdateSummary">AWS
   * API Reference</a></p>
   */
  class OTAUpdateSummary
  {
  public:
    AWS_IOT_API OTAUpdateSummary();
    AWS_IOT_API OTAUpdateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API OTAUpdateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The OTA update ID.</p>
     */
    inline const Aws::String& GetOtaUpdateId() const{ return m_otaUpdateId; }

    /**
     * <p>The OTA update ID.</p>
     */
    inline bool OtaUpdateIdHasBeenSet() const { return m_otaUpdateIdHasBeenSet; }

    /**
     * <p>The OTA update ID.</p>
     */
    inline void SetOtaUpdateId(const Aws::String& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = value; }

    /**
     * <p>The OTA update ID.</p>
     */
    inline void SetOtaUpdateId(Aws::String&& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = std::move(value); }

    /**
     * <p>The OTA update ID.</p>
     */
    inline void SetOtaUpdateId(const char* value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId.assign(value); }

    /**
     * <p>The OTA update ID.</p>
     */
    inline OTAUpdateSummary& WithOtaUpdateId(const Aws::String& value) { SetOtaUpdateId(value); return *this;}

    /**
     * <p>The OTA update ID.</p>
     */
    inline OTAUpdateSummary& WithOtaUpdateId(Aws::String&& value) { SetOtaUpdateId(std::move(value)); return *this;}

    /**
     * <p>The OTA update ID.</p>
     */
    inline OTAUpdateSummary& WithOtaUpdateId(const char* value) { SetOtaUpdateId(value); return *this;}


    /**
     * <p>The OTA update ARN.</p>
     */
    inline const Aws::String& GetOtaUpdateArn() const{ return m_otaUpdateArn; }

    /**
     * <p>The OTA update ARN.</p>
     */
    inline bool OtaUpdateArnHasBeenSet() const { return m_otaUpdateArnHasBeenSet; }

    /**
     * <p>The OTA update ARN.</p>
     */
    inline void SetOtaUpdateArn(const Aws::String& value) { m_otaUpdateArnHasBeenSet = true; m_otaUpdateArn = value; }

    /**
     * <p>The OTA update ARN.</p>
     */
    inline void SetOtaUpdateArn(Aws::String&& value) { m_otaUpdateArnHasBeenSet = true; m_otaUpdateArn = std::move(value); }

    /**
     * <p>The OTA update ARN.</p>
     */
    inline void SetOtaUpdateArn(const char* value) { m_otaUpdateArnHasBeenSet = true; m_otaUpdateArn.assign(value); }

    /**
     * <p>The OTA update ARN.</p>
     */
    inline OTAUpdateSummary& WithOtaUpdateArn(const Aws::String& value) { SetOtaUpdateArn(value); return *this;}

    /**
     * <p>The OTA update ARN.</p>
     */
    inline OTAUpdateSummary& WithOtaUpdateArn(Aws::String&& value) { SetOtaUpdateArn(std::move(value)); return *this;}

    /**
     * <p>The OTA update ARN.</p>
     */
    inline OTAUpdateSummary& WithOtaUpdateArn(const char* value) { SetOtaUpdateArn(value); return *this;}


    /**
     * <p>The date when the OTA update was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date when the OTA update was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date when the OTA update was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date when the OTA update was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date when the OTA update was created.</p>
     */
    inline OTAUpdateSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date when the OTA update was created.</p>
     */
    inline OTAUpdateSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_otaUpdateId;
    bool m_otaUpdateIdHasBeenSet = false;

    Aws::String m_otaUpdateArn;
    bool m_otaUpdateArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
