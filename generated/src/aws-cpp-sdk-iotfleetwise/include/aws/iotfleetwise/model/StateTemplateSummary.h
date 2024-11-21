/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about a state template.</p>  <p>Access to certain
   * Amazon Web Services IoT FleetWise features is currently gated. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
   * Web Services Region and feature availability</a> in the <i>Amazon Web Services
   * IoT FleetWise Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/StateTemplateSummary">AWS
   * API Reference</a></p>
   */
  class StateTemplateSummary
  {
  public:
    AWS_IOTFLEETWISE_API StateTemplateSummary();
    AWS_IOTFLEETWISE_API StateTemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API StateTemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the state template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StateTemplateSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StateTemplateSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StateTemplateSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline StateTemplateSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StateTemplateSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StateTemplateSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the signal catalog associated with the
     * state template.</p>
     */
    inline const Aws::String& GetSignalCatalogArn() const{ return m_signalCatalogArn; }
    inline bool SignalCatalogArnHasBeenSet() const { return m_signalCatalogArnHasBeenSet; }
    inline void SetSignalCatalogArn(const Aws::String& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = value; }
    inline void SetSignalCatalogArn(Aws::String&& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = std::move(value); }
    inline void SetSignalCatalogArn(const char* value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn.assign(value); }
    inline StateTemplateSummary& WithSignalCatalogArn(const Aws::String& value) { SetSignalCatalogArn(value); return *this;}
    inline StateTemplateSummary& WithSignalCatalogArn(Aws::String&& value) { SetSignalCatalogArn(std::move(value)); return *this;}
    inline StateTemplateSummary& WithSignalCatalogArn(const char* value) { SetSignalCatalogArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the state template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StateTemplateSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StateTemplateSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StateTemplateSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the state template was created, in seconds since epoch (January 1,
     * 1970 at midnight UTC time).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline StateTemplateSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline StateTemplateSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the state template was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }
    inline StateTemplateSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline StateTemplateSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the state template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline StateTemplateSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline StateTemplateSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline StateTemplateSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_signalCatalogArn;
    bool m_signalCatalogArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
