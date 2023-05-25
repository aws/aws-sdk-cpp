/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/SdkConfigurationProperty.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>A type of SDK that API Gateway can generate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/SdkType">AWS
   * API Reference</a></p>
   */
  class GetSdkTypeResult
  {
  public:
    AWS_APIGATEWAY_API GetSdkTypeResult();
    AWS_APIGATEWAY_API GetSdkTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetSdkTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline GetSdkTypeResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline GetSdkTypeResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an SdkType instance.</p>
     */
    inline GetSdkTypeResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline const Aws::String& GetFriendlyName() const{ return m_friendlyName; }

    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline void SetFriendlyName(const Aws::String& value) { m_friendlyName = value; }

    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline void SetFriendlyName(Aws::String&& value) { m_friendlyName = std::move(value); }

    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline void SetFriendlyName(const char* value) { m_friendlyName.assign(value); }

    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline GetSdkTypeResult& WithFriendlyName(const Aws::String& value) { SetFriendlyName(value); return *this;}

    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline GetSdkTypeResult& WithFriendlyName(Aws::String&& value) { SetFriendlyName(std::move(value)); return *this;}

    /**
     * <p>The user-friendly name of an SdkType instance.</p>
     */
    inline GetSdkTypeResult& WithFriendlyName(const char* value) { SetFriendlyName(value); return *this;}


    /**
     * <p>The description of an SdkType.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of an SdkType.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of an SdkType.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of an SdkType.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of an SdkType.</p>
     */
    inline GetSdkTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of an SdkType.</p>
     */
    inline GetSdkTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of an SdkType.</p>
     */
    inline GetSdkTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline const Aws::Vector<SdkConfigurationProperty>& GetConfigurationProperties() const{ return m_configurationProperties; }

    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline void SetConfigurationProperties(const Aws::Vector<SdkConfigurationProperty>& value) { m_configurationProperties = value; }

    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline void SetConfigurationProperties(Aws::Vector<SdkConfigurationProperty>&& value) { m_configurationProperties = std::move(value); }

    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline GetSdkTypeResult& WithConfigurationProperties(const Aws::Vector<SdkConfigurationProperty>& value) { SetConfigurationProperties(value); return *this;}

    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline GetSdkTypeResult& WithConfigurationProperties(Aws::Vector<SdkConfigurationProperty>&& value) { SetConfigurationProperties(std::move(value)); return *this;}

    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline GetSdkTypeResult& AddConfigurationProperties(const SdkConfigurationProperty& value) { m_configurationProperties.push_back(value); return *this; }

    /**
     * <p>A list of configuration properties of an SdkType.</p>
     */
    inline GetSdkTypeResult& AddConfigurationProperties(SdkConfigurationProperty&& value) { m_configurationProperties.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSdkTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSdkTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSdkTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_friendlyName;

    Aws::String m_description;

    Aws::Vector<SdkConfigurationProperty> m_configurationProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
