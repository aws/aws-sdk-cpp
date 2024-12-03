/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TestConnectionInput.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class TestConnectionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API TestConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestConnection"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Optional. The name of the connection to test. If only name is provided, the
     * operation will get the connection and use that for testing.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline TestConnectionRequest& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline TestConnectionRequest& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline TestConnectionRequest& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog ID where the connection resides.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline TestConnectionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline TestConnectionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline TestConnectionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that is used to specify testing a connection to a service.</p>
     */
    inline const TestConnectionInput& GetTestConnectionInput() const{ return m_testConnectionInput; }
    inline bool TestConnectionInputHasBeenSet() const { return m_testConnectionInputHasBeenSet; }
    inline void SetTestConnectionInput(const TestConnectionInput& value) { m_testConnectionInputHasBeenSet = true; m_testConnectionInput = value; }
    inline void SetTestConnectionInput(TestConnectionInput&& value) { m_testConnectionInputHasBeenSet = true; m_testConnectionInput = std::move(value); }
    inline TestConnectionRequest& WithTestConnectionInput(const TestConnectionInput& value) { SetTestConnectionInput(value); return *this;}
    inline TestConnectionRequest& WithTestConnectionInput(TestConnectionInput&& value) { SetTestConnectionInput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    TestConnectionInput m_testConnectionInput;
    bool m_testConnectionInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
