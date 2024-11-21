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
    AWS_IOTFLEETWISE_API GetStateTemplateResult();
    AWS_IOTFLEETWISE_API GetStateTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetStateTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the state template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetStateTemplateResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetStateTemplateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetStateTemplateResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetStateTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetStateTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetStateTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the state template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetStateTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetStateTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetStateTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the signal catalog associated with the state template.</p>
     */
    inline const Aws::String& GetSignalCatalogArn() const{ return m_signalCatalogArn; }
    inline void SetSignalCatalogArn(const Aws::String& value) { m_signalCatalogArn = value; }
    inline void SetSignalCatalogArn(Aws::String&& value) { m_signalCatalogArn = std::move(value); }
    inline void SetSignalCatalogArn(const char* value) { m_signalCatalogArn.assign(value); }
    inline GetStateTemplateResult& WithSignalCatalogArn(const Aws::String& value) { SetSignalCatalogArn(value); return *this;}
    inline GetStateTemplateResult& WithSignalCatalogArn(Aws::String&& value) { SetSignalCatalogArn(std::move(value)); return *this;}
    inline GetStateTemplateResult& WithSignalCatalogArn(const char* value) { SetSignalCatalogArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of signals from which data is collected. The state template properties
     * contain the fully qualified names of the signals.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStateTemplateProperties() const{ return m_stateTemplateProperties; }
    inline void SetStateTemplateProperties(const Aws::Vector<Aws::String>& value) { m_stateTemplateProperties = value; }
    inline void SetStateTemplateProperties(Aws::Vector<Aws::String>&& value) { m_stateTemplateProperties = std::move(value); }
    inline GetStateTemplateResult& WithStateTemplateProperties(const Aws::Vector<Aws::String>& value) { SetStateTemplateProperties(value); return *this;}
    inline GetStateTemplateResult& WithStateTemplateProperties(Aws::Vector<Aws::String>&& value) { SetStateTemplateProperties(std::move(value)); return *this;}
    inline GetStateTemplateResult& AddStateTemplateProperties(const Aws::String& value) { m_stateTemplateProperties.push_back(value); return *this; }
    inline GetStateTemplateResult& AddStateTemplateProperties(Aws::String&& value) { m_stateTemplateProperties.push_back(std::move(value)); return *this; }
    inline GetStateTemplateResult& AddStateTemplateProperties(const char* value) { m_stateTemplateProperties.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of vehicle attributes associated with the payload published on the
     * state template's MQTT topic. </p> <p>Default: An empty array</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataExtraDimensions() const{ return m_dataExtraDimensions; }
    inline void SetDataExtraDimensions(const Aws::Vector<Aws::String>& value) { m_dataExtraDimensions = value; }
    inline void SetDataExtraDimensions(Aws::Vector<Aws::String>&& value) { m_dataExtraDimensions = std::move(value); }
    inline GetStateTemplateResult& WithDataExtraDimensions(const Aws::Vector<Aws::String>& value) { SetDataExtraDimensions(value); return *this;}
    inline GetStateTemplateResult& WithDataExtraDimensions(Aws::Vector<Aws::String>&& value) { SetDataExtraDimensions(std::move(value)); return *this;}
    inline GetStateTemplateResult& AddDataExtraDimensions(const Aws::String& value) { m_dataExtraDimensions.push_back(value); return *this; }
    inline GetStateTemplateResult& AddDataExtraDimensions(Aws::String&& value) { m_dataExtraDimensions.push_back(std::move(value)); return *this; }
    inline GetStateTemplateResult& AddDataExtraDimensions(const char* value) { m_dataExtraDimensions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of vehicle attributes to associate with user properties of the
     * messages published on the state template's MQTT topic.</p> <p>Default: An empty
     * array</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetadataExtraDimensions() const{ return m_metadataExtraDimensions; }
    inline void SetMetadataExtraDimensions(const Aws::Vector<Aws::String>& value) { m_metadataExtraDimensions = value; }
    inline void SetMetadataExtraDimensions(Aws::Vector<Aws::String>&& value) { m_metadataExtraDimensions = std::move(value); }
    inline GetStateTemplateResult& WithMetadataExtraDimensions(const Aws::Vector<Aws::String>& value) { SetMetadataExtraDimensions(value); return *this;}
    inline GetStateTemplateResult& WithMetadataExtraDimensions(Aws::Vector<Aws::String>&& value) { SetMetadataExtraDimensions(std::move(value)); return *this;}
    inline GetStateTemplateResult& AddMetadataExtraDimensions(const Aws::String& value) { m_metadataExtraDimensions.push_back(value); return *this; }
    inline GetStateTemplateResult& AddMetadataExtraDimensions(Aws::String&& value) { m_metadataExtraDimensions.push_back(std::move(value)); return *this; }
    inline GetStateTemplateResult& AddMetadataExtraDimensions(const char* value) { m_metadataExtraDimensions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time the state template was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetStateTemplateResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetStateTemplateResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the state template was last updated in seconds since epoch (January
     * 1, 1970 at midnight UTC time).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }
    inline GetStateTemplateResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline GetStateTemplateResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the state template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetStateTemplateResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetStateTemplateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetStateTemplateResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetStateTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetStateTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetStateTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_arn;

    Aws::String m_description;

    Aws::String m_signalCatalogArn;

    Aws::Vector<Aws::String> m_stateTemplateProperties;

    Aws::Vector<Aws::String> m_dataExtraDimensions;

    Aws::Vector<Aws::String> m_metadataExtraDimensions;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    Aws::String m_id;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
