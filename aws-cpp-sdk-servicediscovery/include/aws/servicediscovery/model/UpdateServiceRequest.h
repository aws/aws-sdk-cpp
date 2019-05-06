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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/ServiceChange.h>
#include <utility>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class AWS_SERVICEDISCOVERY_API UpdateServiceRequest : public ServiceDiscoveryRequest
  {
  public:
    UpdateServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateService"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the service that you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the service that you want to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the service that you want to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the service that you want to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the service that you want to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the service that you want to update.</p>
     */
    inline UpdateServiceRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the service that you want to update.</p>
     */
    inline UpdateServiceRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service that you want to update.</p>
     */
    inline UpdateServiceRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A complex type that contains the new settings for the service.</p>
     */
    inline const ServiceChange& GetService() const{ return m_service; }

    /**
     * <p>A complex type that contains the new settings for the service.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>A complex type that contains the new settings for the service.</p>
     */
    inline void SetService(const ServiceChange& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>A complex type that contains the new settings for the service.</p>
     */
    inline void SetService(ServiceChange&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>A complex type that contains the new settings for the service.</p>
     */
    inline UpdateServiceRequest& WithService(const ServiceChange& value) { SetService(value); return *this;}

    /**
     * <p>A complex type that contains the new settings for the service.</p>
     */
    inline UpdateServiceRequest& WithService(ServiceChange&& value) { SetService(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    ServiceChange m_service;
    bool m_serviceHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
