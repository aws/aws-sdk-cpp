/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/ReferenceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Connect
{
namespace Model
{

  /**
   */
  class ListContactReferencesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API ListContactReferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListContactReferences"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline ListContactReferencesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline ListContactReferencesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline ListContactReferencesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline ListContactReferencesRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline ListContactReferencesRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline ListContactReferencesRequest& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The type of reference.</p>
     */
    inline const Aws::Vector<ReferenceType>& GetReferenceTypes() const{ return m_referenceTypes; }

    /**
     * <p>The type of reference.</p>
     */
    inline bool ReferenceTypesHasBeenSet() const { return m_referenceTypesHasBeenSet; }

    /**
     * <p>The type of reference.</p>
     */
    inline void SetReferenceTypes(const Aws::Vector<ReferenceType>& value) { m_referenceTypesHasBeenSet = true; m_referenceTypes = value; }

    /**
     * <p>The type of reference.</p>
     */
    inline void SetReferenceTypes(Aws::Vector<ReferenceType>&& value) { m_referenceTypesHasBeenSet = true; m_referenceTypes = std::move(value); }

    /**
     * <p>The type of reference.</p>
     */
    inline ListContactReferencesRequest& WithReferenceTypes(const Aws::Vector<ReferenceType>& value) { SetReferenceTypes(value); return *this;}

    /**
     * <p>The type of reference.</p>
     */
    inline ListContactReferencesRequest& WithReferenceTypes(Aws::Vector<ReferenceType>&& value) { SetReferenceTypes(std::move(value)); return *this;}

    /**
     * <p>The type of reference.</p>
     */
    inline ListContactReferencesRequest& AddReferenceTypes(const ReferenceType& value) { m_referenceTypesHasBeenSet = true; m_referenceTypes.push_back(value); return *this; }

    /**
     * <p>The type of reference.</p>
     */
    inline ListContactReferencesRequest& AddReferenceTypes(ReferenceType&& value) { m_referenceTypesHasBeenSet = true; m_referenceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     *  <p>This is not expected to be set, because the value returned in the
     * previous response is always null.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     *  <p>This is not expected to be set, because the value returned in the
     * previous response is always null.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     *  <p>This is not expected to be set, because the value returned in the
     * previous response is always null.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     *  <p>This is not expected to be set, because the value returned in the
     * previous response is always null.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     *  <p>This is not expected to be set, because the value returned in the
     * previous response is always null.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     *  <p>This is not expected to be set, because the value returned in the
     * previous response is always null.</p> 
     */
    inline ListContactReferencesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     *  <p>This is not expected to be set, because the value returned in the
     * previous response is always null.</p> 
     */
    inline ListContactReferencesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     *  <p>This is not expected to be set, because the value returned in the
     * previous response is always null.</p> 
     */
    inline ListContactReferencesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::Vector<ReferenceType> m_referenceTypes;
    bool m_referenceTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
