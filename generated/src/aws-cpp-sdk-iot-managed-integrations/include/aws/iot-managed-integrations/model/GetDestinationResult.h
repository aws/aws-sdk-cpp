/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/DeliveryDestinationType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class GetDestinationResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetDestinationResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of the customer-managed destination.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetDestinationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetDestinationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetDestinationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customer-managed destination.</p>
     */
    inline const Aws::String& GetDeliveryDestinationArn() const{ return m_deliveryDestinationArn; }
    inline void SetDeliveryDestinationArn(const Aws::String& value) { m_deliveryDestinationArn = value; }
    inline void SetDeliveryDestinationArn(Aws::String&& value) { m_deliveryDestinationArn = std::move(value); }
    inline void SetDeliveryDestinationArn(const char* value) { m_deliveryDestinationArn.assign(value); }
    inline GetDestinationResult& WithDeliveryDestinationArn(const Aws::String& value) { SetDeliveryDestinationArn(value); return *this;}
    inline GetDestinationResult& WithDeliveryDestinationArn(Aws::String&& value) { SetDeliveryDestinationArn(std::move(value)); return *this;}
    inline GetDestinationResult& WithDeliveryDestinationArn(const char* value) { SetDeliveryDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination type for the customer-managed destination.</p>
     */
    inline const DeliveryDestinationType& GetDeliveryDestinationType() const{ return m_deliveryDestinationType; }
    inline void SetDeliveryDestinationType(const DeliveryDestinationType& value) { m_deliveryDestinationType = value; }
    inline void SetDeliveryDestinationType(DeliveryDestinationType&& value) { m_deliveryDestinationType = std::move(value); }
    inline GetDestinationResult& WithDeliveryDestinationType(const DeliveryDestinationType& value) { SetDeliveryDestinationType(value); return *this;}
    inline GetDestinationResult& WithDeliveryDestinationType(DeliveryDestinationType&& value) { SetDeliveryDestinationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the customer-managed destination.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetDestinationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetDestinationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetDestinationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the delivery destination role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetDestinationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetDestinationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetDestinationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the destination creation requset occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetDestinationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetDestinationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the destination update requset occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetDestinationResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetDestinationResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that are used to manage the customer-managed
     * destination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetDestinationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetDestinationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetDestinationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetDestinationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDestinationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDestinationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetDestinationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDestinationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDestinationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_description;

    Aws::String m_deliveryDestinationArn;

    DeliveryDestinationType m_deliveryDestinationType;

    Aws::String m_name;

    Aws::String m_roleArn;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
