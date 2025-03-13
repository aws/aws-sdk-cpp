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
    AWS_IOT_API OTAUpdateSummary() = default;
    AWS_IOT_API OTAUpdateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API OTAUpdateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OTA update ID.</p>
     */
    inline const Aws::String& GetOtaUpdateId() const { return m_otaUpdateId; }
    inline bool OtaUpdateIdHasBeenSet() const { return m_otaUpdateIdHasBeenSet; }
    template<typename OtaUpdateIdT = Aws::String>
    void SetOtaUpdateId(OtaUpdateIdT&& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = std::forward<OtaUpdateIdT>(value); }
    template<typename OtaUpdateIdT = Aws::String>
    OTAUpdateSummary& WithOtaUpdateId(OtaUpdateIdT&& value) { SetOtaUpdateId(std::forward<OtaUpdateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OTA update ARN.</p>
     */
    inline const Aws::String& GetOtaUpdateArn() const { return m_otaUpdateArn; }
    inline bool OtaUpdateArnHasBeenSet() const { return m_otaUpdateArnHasBeenSet; }
    template<typename OtaUpdateArnT = Aws::String>
    void SetOtaUpdateArn(OtaUpdateArnT&& value) { m_otaUpdateArnHasBeenSet = true; m_otaUpdateArn = std::forward<OtaUpdateArnT>(value); }
    template<typename OtaUpdateArnT = Aws::String>
    OTAUpdateSummary& WithOtaUpdateArn(OtaUpdateArnT&& value) { SetOtaUpdateArn(std::forward<OtaUpdateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the OTA update was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    OTAUpdateSummary& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_otaUpdateId;
    bool m_otaUpdateIdHasBeenSet = false;

    Aws::String m_otaUpdateArn;
    bool m_otaUpdateArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
