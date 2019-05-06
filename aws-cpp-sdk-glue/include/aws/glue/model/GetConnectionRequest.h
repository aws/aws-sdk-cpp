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
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API GetConnectionRequest : public GlueRequest
  {
  public:
    GetConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline GetConnectionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline GetConnectionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline GetConnectionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the connection definition to retrieve.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the connection definition to retrieve.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the connection definition to retrieve.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the connection definition to retrieve.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the connection definition to retrieve.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the connection definition to retrieve.</p>
     */
    inline GetConnectionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the connection definition to retrieve.</p>
     */
    inline GetConnectionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection definition to retrieve.</p>
     */
    inline GetConnectionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Allows you to retrieve the connection metadata without returning the
     * password. For instance, the AWS Glue console uses this flag to retrieve the
     * connection, and does not display the password. Set this parameter when the
     * caller might not have permission to use the AWS KMS key to decrypt the password,
     * but does have permission to access the rest of the connection properties.</p>
     */
    inline bool GetHidePassword() const{ return m_hidePassword; }

    /**
     * <p>Allows you to retrieve the connection metadata without returning the
     * password. For instance, the AWS Glue console uses this flag to retrieve the
     * connection, and does not display the password. Set this parameter when the
     * caller might not have permission to use the AWS KMS key to decrypt the password,
     * but does have permission to access the rest of the connection properties.</p>
     */
    inline bool HidePasswordHasBeenSet() const { return m_hidePasswordHasBeenSet; }

    /**
     * <p>Allows you to retrieve the connection metadata without returning the
     * password. For instance, the AWS Glue console uses this flag to retrieve the
     * connection, and does not display the password. Set this parameter when the
     * caller might not have permission to use the AWS KMS key to decrypt the password,
     * but does have permission to access the rest of the connection properties.</p>
     */
    inline void SetHidePassword(bool value) { m_hidePasswordHasBeenSet = true; m_hidePassword = value; }

    /**
     * <p>Allows you to retrieve the connection metadata without returning the
     * password. For instance, the AWS Glue console uses this flag to retrieve the
     * connection, and does not display the password. Set this parameter when the
     * caller might not have permission to use the AWS KMS key to decrypt the password,
     * but does have permission to access the rest of the connection properties.</p>
     */
    inline GetConnectionRequest& WithHidePassword(bool value) { SetHidePassword(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_hidePassword;
    bool m_hidePasswordHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
