/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A request to get information about the current ApiKeys
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetApiKeysRequest">AWS
   * API Reference</a></p>
   */
  class GetApiKeysRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetApiKeysRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApiKeys"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline const Aws::String& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::String>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::String>
    GetApiKeysRequest& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetApiKeysRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of queried API keys.</p>
     */
    inline const Aws::String& GetNameQuery() const { return m_nameQuery; }
    inline bool NameQueryHasBeenSet() const { return m_nameQueryHasBeenSet; }
    template<typename NameQueryT = Aws::String>
    void SetNameQuery(NameQueryT&& value) { m_nameQueryHasBeenSet = true; m_nameQuery = std::forward<NameQueryT>(value); }
    template<typename NameQueryT = Aws::String>
    GetApiKeysRequest& WithNameQuery(NameQueryT&& value) { SetNameQuery(std::forward<NameQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a customer in Amazon Web Services Marketplace or an
     * external system, such as a developer portal.</p>
     */
    inline const Aws::String& GetCustomerId() const { return m_customerId; }
    inline bool CustomerIdHasBeenSet() const { return m_customerIdHasBeenSet; }
    template<typename CustomerIdT = Aws::String>
    void SetCustomerId(CustomerIdT&& value) { m_customerIdHasBeenSet = true; m_customerId = std::forward<CustomerIdT>(value); }
    template<typename CustomerIdT = Aws::String>
    GetApiKeysRequest& WithCustomerId(CustomerIdT&& value) { SetCustomerId(std::forward<CustomerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean flag to specify whether (<code>true</code>) or not
     * (<code>false</code>) the result contains key values.</p>
     */
    inline bool GetIncludeValues() const { return m_includeValues; }
    inline bool IncludeValuesHasBeenSet() const { return m_includeValuesHasBeenSet; }
    inline void SetIncludeValues(bool value) { m_includeValuesHasBeenSet = true; m_includeValues = value; }
    inline GetApiKeysRequest& WithIncludeValues(bool value) { SetIncludeValues(value); return *this;}
    ///@}
  private:

    Aws::String m_position;
    bool m_positionHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nameQuery;
    bool m_nameQueryHasBeenSet = false;

    Aws::String m_customerId;
    bool m_customerIdHasBeenSet = false;

    bool m_includeValues{false};
    bool m_includeValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
