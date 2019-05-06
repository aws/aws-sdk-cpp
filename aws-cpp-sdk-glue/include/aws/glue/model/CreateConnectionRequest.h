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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ConnectionInput.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API CreateConnectionRequest : public GlueRequest
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
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline CreateConnectionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline CreateConnectionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline CreateConnectionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>A <code>ConnectionInput</code> object defining the connection to create.</p>
     */
    inline const ConnectionInput& GetConnectionInput() const{ return m_connectionInput; }

    /**
     * <p>A <code>ConnectionInput</code> object defining the connection to create.</p>
     */
    inline bool ConnectionInputHasBeenSet() const { return m_connectionInputHasBeenSet; }

    /**
     * <p>A <code>ConnectionInput</code> object defining the connection to create.</p>
     */
    inline void SetConnectionInput(const ConnectionInput& value) { m_connectionInputHasBeenSet = true; m_connectionInput = value; }

    /**
     * <p>A <code>ConnectionInput</code> object defining the connection to create.</p>
     */
    inline void SetConnectionInput(ConnectionInput&& value) { m_connectionInputHasBeenSet = true; m_connectionInput = std::move(value); }

    /**
     * <p>A <code>ConnectionInput</code> object defining the connection to create.</p>
     */
    inline CreateConnectionRequest& WithConnectionInput(const ConnectionInput& value) { SetConnectionInput(value); return *this;}

    /**
     * <p>A <code>ConnectionInput</code> object defining the connection to create.</p>
     */
    inline CreateConnectionRequest& WithConnectionInput(ConnectionInput&& value) { SetConnectionInput(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    ConnectionInput m_connectionInput;
    bool m_connectionInputHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
