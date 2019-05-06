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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API BatchDeleteConnectionRequest : public GlueRequest
  {
  public:
    BatchDeleteConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteConnection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline BatchDeleteConnectionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline BatchDeleteConnectionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the AWS account ID is used by default.</p>
     */
    inline BatchDeleteConnectionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>A list of names of the connections to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionNameList() const{ return m_connectionNameList; }

    /**
     * <p>A list of names of the connections to delete.</p>
     */
    inline bool ConnectionNameListHasBeenSet() const { return m_connectionNameListHasBeenSet; }

    /**
     * <p>A list of names of the connections to delete.</p>
     */
    inline void SetConnectionNameList(const Aws::Vector<Aws::String>& value) { m_connectionNameListHasBeenSet = true; m_connectionNameList = value; }

    /**
     * <p>A list of names of the connections to delete.</p>
     */
    inline void SetConnectionNameList(Aws::Vector<Aws::String>&& value) { m_connectionNameListHasBeenSet = true; m_connectionNameList = std::move(value); }

    /**
     * <p>A list of names of the connections to delete.</p>
     */
    inline BatchDeleteConnectionRequest& WithConnectionNameList(const Aws::Vector<Aws::String>& value) { SetConnectionNameList(value); return *this;}

    /**
     * <p>A list of names of the connections to delete.</p>
     */
    inline BatchDeleteConnectionRequest& WithConnectionNameList(Aws::Vector<Aws::String>&& value) { SetConnectionNameList(std::move(value)); return *this;}

    /**
     * <p>A list of names of the connections to delete.</p>
     */
    inline BatchDeleteConnectionRequest& AddConnectionNameList(const Aws::String& value) { m_connectionNameListHasBeenSet = true; m_connectionNameList.push_back(value); return *this; }

    /**
     * <p>A list of names of the connections to delete.</p>
     */
    inline BatchDeleteConnectionRequest& AddConnectionNameList(Aws::String&& value) { m_connectionNameListHasBeenSet = true; m_connectionNameList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of the connections to delete.</p>
     */
    inline BatchDeleteConnectionRequest& AddConnectionNameList(const char* value) { m_connectionNameListHasBeenSet = true; m_connectionNameList.push_back(value); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    Aws::Vector<Aws::String> m_connectionNameList;
    bool m_connectionNameListHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
