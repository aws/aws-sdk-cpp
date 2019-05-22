/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/RecordStatus.h>
#include <aws/servicecatalog/model/PropertyKey.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API UpdateProvisionedProductPropertiesResult
  {
  public:
    UpdateProvisionedProductPropertiesResult();
    UpdateProvisionedProductPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateProvisionedProductPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The provisioned product identifier.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const{ return m_provisionedProductId; }

    /**
     * <p>The provisioned product identifier.</p>
     */
    inline void SetProvisionedProductId(const Aws::String& value) { m_provisionedProductId = value; }

    /**
     * <p>The provisioned product identifier.</p>
     */
    inline void SetProvisionedProductId(Aws::String&& value) { m_provisionedProductId = std::move(value); }

    /**
     * <p>The provisioned product identifier.</p>
     */
    inline void SetProvisionedProductId(const char* value) { m_provisionedProductId.assign(value); }

    /**
     * <p>The provisioned product identifier.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& WithProvisionedProductId(const Aws::String& value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The provisioned product identifier.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& WithProvisionedProductId(Aws::String&& value) { SetProvisionedProductId(std::move(value)); return *this;}

    /**
     * <p>The provisioned product identifier.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& WithProvisionedProductId(const char* value) { SetProvisionedProductId(value); return *this;}


    /**
     * <p>A map that contains the properties updated.</p>
     */
    inline const Aws::Map<PropertyKey, Aws::String>& GetProvisionedProductProperties() const{ return m_provisionedProductProperties; }

    /**
     * <p>A map that contains the properties updated.</p>
     */
    inline void SetProvisionedProductProperties(const Aws::Map<PropertyKey, Aws::String>& value) { m_provisionedProductProperties = value; }

    /**
     * <p>A map that contains the properties updated.</p>
     */
    inline void SetProvisionedProductProperties(Aws::Map<PropertyKey, Aws::String>&& value) { m_provisionedProductProperties = std::move(value); }

    /**
     * <p>A map that contains the properties updated.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& WithProvisionedProductProperties(const Aws::Map<PropertyKey, Aws::String>& value) { SetProvisionedProductProperties(value); return *this;}

    /**
     * <p>A map that contains the properties updated.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& WithProvisionedProductProperties(Aws::Map<PropertyKey, Aws::String>&& value) { SetProvisionedProductProperties(std::move(value)); return *this;}

    /**
     * <p>A map that contains the properties updated.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& AddProvisionedProductProperties(const PropertyKey& key, const Aws::String& value) { m_provisionedProductProperties.emplace(key, value); return *this; }

    /**
     * <p>A map that contains the properties updated.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& AddProvisionedProductProperties(PropertyKey&& key, const Aws::String& value) { m_provisionedProductProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains the properties updated.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& AddProvisionedProductProperties(const PropertyKey& key, Aws::String&& value) { m_provisionedProductProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains the properties updated.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& AddProvisionedProductProperties(PropertyKey&& key, Aws::String&& value) { m_provisionedProductProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains the properties updated.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& AddProvisionedProductProperties(PropertyKey&& key, const char* value) { m_provisionedProductProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains the properties updated.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& AddProvisionedProductProperties(const PropertyKey& key, const char* value) { m_provisionedProductProperties.emplace(key, value); return *this; }


    /**
     * <p>The identifier of the record.</p>
     */
    inline const Aws::String& GetRecordId() const{ return m_recordId; }

    /**
     * <p>The identifier of the record.</p>
     */
    inline void SetRecordId(const Aws::String& value) { m_recordId = value; }

    /**
     * <p>The identifier of the record.</p>
     */
    inline void SetRecordId(Aws::String&& value) { m_recordId = std::move(value); }

    /**
     * <p>The identifier of the record.</p>
     */
    inline void SetRecordId(const char* value) { m_recordId.assign(value); }

    /**
     * <p>The identifier of the record.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& WithRecordId(const Aws::String& value) { SetRecordId(value); return *this;}

    /**
     * <p>The identifier of the record.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& WithRecordId(Aws::String&& value) { SetRecordId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the record.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& WithRecordId(const char* value) { SetRecordId(value); return *this;}


    /**
     * <p>The status of the request.</p>
     */
    inline const RecordStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the request.</p>
     */
    inline void SetStatus(const RecordStatus& value) { m_status = value; }

    /**
     * <p>The status of the request.</p>
     */
    inline void SetStatus(RecordStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the request.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& WithStatus(const RecordStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the request.</p>
     */
    inline UpdateProvisionedProductPropertiesResult& WithStatus(RecordStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_provisionedProductId;

    Aws::Map<PropertyKey, Aws::String> m_provisionedProductProperties;

    Aws::String m_recordId;

    RecordStatus m_status;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
