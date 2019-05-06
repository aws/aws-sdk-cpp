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
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/VmServerAddress.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class AWS_SMS_API GetServersRequest : public SMSRequest
  {
  public:
    GetServersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetServers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline GetServersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline GetServersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline GetServersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. The default value
     * is 50. To retrieve the remaining results, make another call with the returned
     * <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. The default value
     * is 50. To retrieve the remaining results, make another call with the returned
     * <code>NextToken</code> value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. The default value
     * is 50. To retrieve the remaining results, make another call with the returned
     * <code>NextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. The default value
     * is 50. To retrieve the remaining results, make another call with the returned
     * <code>NextToken</code> value.</p>
     */
    inline GetServersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>List of <code>VmServerAddress</code> objects</p>
     */
    inline const Aws::Vector<VmServerAddress>& GetVmServerAddressList() const{ return m_vmServerAddressList; }

    /**
     * <p>List of <code>VmServerAddress</code> objects</p>
     */
    inline bool VmServerAddressListHasBeenSet() const { return m_vmServerAddressListHasBeenSet; }

    /**
     * <p>List of <code>VmServerAddress</code> objects</p>
     */
    inline void SetVmServerAddressList(const Aws::Vector<VmServerAddress>& value) { m_vmServerAddressListHasBeenSet = true; m_vmServerAddressList = value; }

    /**
     * <p>List of <code>VmServerAddress</code> objects</p>
     */
    inline void SetVmServerAddressList(Aws::Vector<VmServerAddress>&& value) { m_vmServerAddressListHasBeenSet = true; m_vmServerAddressList = std::move(value); }

    /**
     * <p>List of <code>VmServerAddress</code> objects</p>
     */
    inline GetServersRequest& WithVmServerAddressList(const Aws::Vector<VmServerAddress>& value) { SetVmServerAddressList(value); return *this;}

    /**
     * <p>List of <code>VmServerAddress</code> objects</p>
     */
    inline GetServersRequest& WithVmServerAddressList(Aws::Vector<VmServerAddress>&& value) { SetVmServerAddressList(std::move(value)); return *this;}

    /**
     * <p>List of <code>VmServerAddress</code> objects</p>
     */
    inline GetServersRequest& AddVmServerAddressList(const VmServerAddress& value) { m_vmServerAddressListHasBeenSet = true; m_vmServerAddressList.push_back(value); return *this; }

    /**
     * <p>List of <code>VmServerAddress</code> objects</p>
     */
    inline GetServersRequest& AddVmServerAddressList(VmServerAddress&& value) { m_vmServerAddressListHasBeenSet = true; m_vmServerAddressList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<VmServerAddress> m_vmServerAddressList;
    bool m_vmServerAddressListHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
