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
    AWS_GLUE_API TestConnectionRequest() = default;

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
    inline const Aws::String& GetConnectionName() const { return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    template<typename ConnectionNameT = Aws::String>
    void SetConnectionName(ConnectionNameT&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::forward<ConnectionNameT>(value); }
    template<typename ConnectionNameT = Aws::String>
    TestConnectionRequest& WithConnectionName(ConnectionNameT&& value) { SetConnectionName(std::forward<ConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog ID where the connection resides.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    TestConnectionRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that is used to specify testing a connection to a service.</p>
     */
    inline const TestConnectionInput& GetTestConnectionInput() const { return m_testConnectionInput; }
    inline bool TestConnectionInputHasBeenSet() const { return m_testConnectionInputHasBeenSet; }
    template<typename TestConnectionInputT = TestConnectionInput>
    void SetTestConnectionInput(TestConnectionInputT&& value) { m_testConnectionInputHasBeenSet = true; m_testConnectionInput = std::forward<TestConnectionInputT>(value); }
    template<typename TestConnectionInputT = TestConnectionInput>
    TestConnectionRequest& WithTestConnectionInput(TestConnectionInputT&& value) { SetTestConnectionInput(std::forward<TestConnectionInputT>(value)); return *this;}
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
