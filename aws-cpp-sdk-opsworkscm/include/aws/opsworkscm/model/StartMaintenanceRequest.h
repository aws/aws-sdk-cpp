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
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKSCM_API StartMaintenanceRequest : public OpsWorksCMRequest
  {
  public:
    StartMaintenanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMaintenance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the server on which to run maintenance. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the server on which to run maintenance. </p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name of the server on which to run maintenance. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server on which to run maintenance. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the server on which to run maintenance. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the server on which to run maintenance. </p>
     */
    inline StartMaintenanceRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server on which to run maintenance. </p>
     */
    inline StartMaintenanceRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the server on which to run maintenance. </p>
     */
    inline StartMaintenanceRequest& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>Engine attributes that are specific to the server on which you want to run
     * maintenance. </p>
     */
    inline const Aws::Vector<EngineAttribute>& GetEngineAttributes() const{ return m_engineAttributes; }

    /**
     * <p>Engine attributes that are specific to the server on which you want to run
     * maintenance. </p>
     */
    inline bool EngineAttributesHasBeenSet() const { return m_engineAttributesHasBeenSet; }

    /**
     * <p>Engine attributes that are specific to the server on which you want to run
     * maintenance. </p>
     */
    inline void SetEngineAttributes(const Aws::Vector<EngineAttribute>& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = value; }

    /**
     * <p>Engine attributes that are specific to the server on which you want to run
     * maintenance. </p>
     */
    inline void SetEngineAttributes(Aws::Vector<EngineAttribute>&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = std::move(value); }

    /**
     * <p>Engine attributes that are specific to the server on which you want to run
     * maintenance. </p>
     */
    inline StartMaintenanceRequest& WithEngineAttributes(const Aws::Vector<EngineAttribute>& value) { SetEngineAttributes(value); return *this;}

    /**
     * <p>Engine attributes that are specific to the server on which you want to run
     * maintenance. </p>
     */
    inline StartMaintenanceRequest& WithEngineAttributes(Aws::Vector<EngineAttribute>&& value) { SetEngineAttributes(std::move(value)); return *this;}

    /**
     * <p>Engine attributes that are specific to the server on which you want to run
     * maintenance. </p>
     */
    inline StartMaintenanceRequest& AddEngineAttributes(const EngineAttribute& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(value); return *this; }

    /**
     * <p>Engine attributes that are specific to the server on which you want to run
     * maintenance. </p>
     */
    inline StartMaintenanceRequest& AddEngineAttributes(EngineAttribute&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    Aws::Vector<EngineAttribute> m_engineAttributes;
    bool m_engineAttributesHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
