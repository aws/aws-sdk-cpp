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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/Framework.h>
#include <aws/managedblockchain/model/NetworkStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class AWS_MANAGEDBLOCKCHAIN_API ListNetworksRequest : public ManagedBlockchainRequest
  {
  public:
    ListNetworksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNetworks"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the network.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the network.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the network.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the network.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the network.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the network.</p>
     */
    inline ListNetworksRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the network.</p>
     */
    inline ListNetworksRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the network.</p>
     */
    inline ListNetworksRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional framework specifier. If provided, only networks of this framework
     * type are listed.</p>
     */
    inline const Framework& GetFramework() const{ return m_framework; }

    /**
     * <p>An optional framework specifier. If provided, only networks of this framework
     * type are listed.</p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p>An optional framework specifier. If provided, only networks of this framework
     * type are listed.</p>
     */
    inline void SetFramework(const Framework& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p>An optional framework specifier. If provided, only networks of this framework
     * type are listed.</p>
     */
    inline void SetFramework(Framework&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p>An optional framework specifier. If provided, only networks of this framework
     * type are listed.</p>
     */
    inline ListNetworksRequest& WithFramework(const Framework& value) { SetFramework(value); return *this;}

    /**
     * <p>An optional framework specifier. If provided, only networks of this framework
     * type are listed.</p>
     */
    inline ListNetworksRequest& WithFramework(Framework&& value) { SetFramework(std::move(value)); return *this;}


    /**
     * <p>An optional status specifier. If provided, only networks currently in this
     * status are listed.</p>
     */
    inline const NetworkStatus& GetStatus() const{ return m_status; }

    /**
     * <p>An optional status specifier. If provided, only networks currently in this
     * status are listed.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>An optional status specifier. If provided, only networks currently in this
     * status are listed.</p>
     */
    inline void SetStatus(const NetworkStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>An optional status specifier. If provided, only networks currently in this
     * status are listed.</p>
     */
    inline void SetStatus(NetworkStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>An optional status specifier. If provided, only networks currently in this
     * status are listed.</p>
     */
    inline ListNetworksRequest& WithStatus(const NetworkStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>An optional status specifier. If provided, only networks currently in this
     * status are listed.</p>
     */
    inline ListNetworksRequest& WithStatus(NetworkStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The maximum number of networks to list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of networks to list.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of networks to list.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of networks to list.</p>
     */
    inline ListNetworksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListNetworksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListNetworksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListNetworksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Framework m_framework;
    bool m_frameworkHasBeenSet;

    NetworkStatus m_status;
    bool m_statusHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
