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
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/codestar-connections/model/ProviderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

  /**
   */
  class AWS_CODESTARCONNECTIONS_API CreateConnectionRequest : public CodeStarconnectionsRequest
  {
  public:
    CreateConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. Currently, the valid provider type is Bitbucket.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. Currently, the valid provider type is Bitbucket.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. Currently, the valid provider type is Bitbucket.</p>
     */
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. Currently, the valid provider type is Bitbucket.</p>
     */
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. Currently, the valid provider type is Bitbucket.</p>
     */
    inline CreateConnectionRequest& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. Currently, the valid provider type is Bitbucket.</p>
     */
    inline CreateConnectionRequest& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>The name of the connection to be created. The name must be unique in the
     * calling AWS account.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the connection to be created. The name must be unique in the
     * calling AWS account.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The name of the connection to be created. The name must be unique in the
     * calling AWS account.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the connection to be created. The name must be unique in the
     * calling AWS account.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The name of the connection to be created. The name must be unique in the
     * calling AWS account.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The name of the connection to be created. The name must be unique in the
     * calling AWS account.</p>
     */
    inline CreateConnectionRequest& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the connection to be created. The name must be unique in the
     * calling AWS account.</p>
     */
    inline CreateConnectionRequest& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection to be created. The name must be unique in the
     * calling AWS account.</p>
     */
    inline CreateConnectionRequest& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}

  private:

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
