/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTFleetWise
{
namespace Model
{
  class GetStateTemplateResult
  {
  public:
    AWS_IOTFLEETWISE_API GetStateTemplateResult() = default;
    AWS_IOTFLEETWISE_API GetStateTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetStateTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the state template.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetStateTemplateResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state template.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetStateTemplateResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the state template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetStateTemplateResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the signal catalog associated with the state template.</p>
     */
    inline const Aws::String& GetSignalCatalogArn() const { return m_signalCatalogArn; }
    template<typename SignalCatalogArnT = Aws::String>
    void SetSignalCatalogArn(SignalCatalogArnT&& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = std::forward<SignalCatalogArnT>(value); }
    template<typename SignalCatalogArnT = Aws::String>
    GetStateTemplateResult& WithSignalCatalogArn(SignalCatalogArnT&& value) { SetSignalCatalogArn(std::forward<SignalCatalogArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of signals from which data is collected. The state template properties
     * contain the fully qualified names of the signals.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStateTemplateProperties() const { return m_stateTemplateProperties; }
    template<typename StateTemplatePropertiesT = Aws::Vector<Aws::String>>
    void SetStateTemplateProperties(StateTemplatePropertiesT&& value) { m_stateTemplatePropertiesHasBeenSet = true; m_stateTemplateProperties = std::forward<StateTemplatePropertiesT>(value); }
    template<typename StateTemplatePropertiesT = Aws::Vector<Aws::String>>
    GetStateTemplateResult& WithStateTemplateProperties(StateTemplatePropertiesT&& value) { SetStateTemplateProperties(std::forward<StateTemplatePropertiesT>(value)); return *this;}
    template<typename StateTemplatePropertiesT = Aws::String>
    GetStateTemplateResult& AddStateTemplateProperties(StateTemplatePropertiesT&& value) { m_stateTemplatePropertiesHasBeenSet = true; m_stateTemplateProperties.emplace_back(std::forward<StateTemplatePropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of vehicle attributes associated with the payload published on the
     * state template's MQTT topic. </p> <p>Default: An empty array</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataExtraDimensions() const { return m_dataExtraDimensions; }
    template<typename DataExtraDimensionsT = Aws::Vector<Aws::String>>
    void SetDataExtraDimensions(DataExtraDimensionsT&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = std::forward<DataExtraDimensionsT>(value); }
    template<typename DataExtraDimensionsT = Aws::Vector<Aws::String>>
    GetStateTemplateResult& WithDataExtraDimensions(DataExtraDimensionsT&& value) { SetDataExtraDimensions(std::forward<DataExtraDimensionsT>(value)); return *this;}
    template<typename DataExtraDimensionsT = Aws::String>
    GetStateTemplateResult& AddDataExtraDimensions(DataExtraDimensionsT&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.emplace_back(std::forward<DataExtraDimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of vehicle attributes to associate with user properties of the
     * messages published on the state template's MQTT topic.</p> <p>Default: An empty
     * array</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetadataExtraDimensions() const { return m_metadataExtraDimensions; }
    template<typename MetadataExtraDimensionsT = Aws::Vector<Aws::String>>
    void SetMetadataExtraDimensions(MetadataExtraDimensionsT&& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions = std::forward<MetadataExtraDimensionsT>(value); }
    template<typename MetadataExtraDimensionsT = Aws::Vector<Aws::String>>
    GetStateTemplateResult& WithMetadataExtraDimensions(MetadataExtraDimensionsT&& value) { SetMetadataExtraDimensions(std::forward<MetadataExtraDimensionsT>(value)); return *this;}
    template<typename MetadataExtraDimensionsT = Aws::String>
    GetStateTemplateResult& AddMetadataExtraDimensions(MetadataExtraDimensionsT&& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions.emplace_back(std::forward<MetadataExtraDimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time the state template was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetStateTemplateResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the state template was last updated in seconds since epoch (January
     * 1, 1970 at midnight UTC time).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    GetStateTemplateResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the state template.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetStateTemplateResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetStateTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_signalCatalogArn;
    bool m_signalCatalogArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_stateTemplateProperties;
    bool m_stateTemplatePropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataExtraDimensions;
    bool m_dataExtraDimensionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_metadataExtraDimensions;
    bool m_metadataExtraDimensionsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
