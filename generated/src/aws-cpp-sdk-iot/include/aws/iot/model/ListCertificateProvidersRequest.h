/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class ListCertificateProvidersRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListCertificateProvidersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCertificateProviders"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline ListCertificateProvidersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline ListCertificateProvidersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline ListCertificateProvidersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Returns the list of certificate providers in ascending alphabetical
     * order.</p>
     */
    inline bool GetAscendingOrder() const{ return m_ascendingOrder; }

    /**
     * <p>Returns the list of certificate providers in ascending alphabetical
     * order.</p>
     */
    inline bool AscendingOrderHasBeenSet() const { return m_ascendingOrderHasBeenSet; }

    /**
     * <p>Returns the list of certificate providers in ascending alphabetical
     * order.</p>
     */
    inline void SetAscendingOrder(bool value) { m_ascendingOrderHasBeenSet = true; m_ascendingOrder = value; }

    /**
     * <p>Returns the list of certificate providers in ascending alphabetical
     * order.</p>
     */
    inline ListCertificateProvidersRequest& WithAscendingOrder(bool value) { SetAscendingOrder(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_ascendingOrder;
    bool m_ascendingOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
