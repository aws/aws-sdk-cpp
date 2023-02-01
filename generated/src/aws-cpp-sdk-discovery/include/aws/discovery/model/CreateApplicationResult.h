/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class CreateApplicationResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API CreateApplicationResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Configuration ID of an application to be created.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * <p>Configuration ID of an application to be created.</p>
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationId = value; }

    /**
     * <p>Configuration ID of an application to be created.</p>
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationId = std::move(value); }

    /**
     * <p>Configuration ID of an application to be created.</p>
     */
    inline void SetConfigurationId(const char* value) { m_configurationId.assign(value); }

    /**
     * <p>Configuration ID of an application to be created.</p>
     */
    inline CreateApplicationResult& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * <p>Configuration ID of an application to be created.</p>
     */
    inline CreateApplicationResult& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * <p>Configuration ID of an application to be created.</p>
     */
    inline CreateApplicationResult& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}

  private:

    Aws::String m_configurationId;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
