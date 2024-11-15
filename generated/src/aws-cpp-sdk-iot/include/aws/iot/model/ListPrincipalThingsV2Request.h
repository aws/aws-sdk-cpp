/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingPrincipalType.h>
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
  class ListPrincipalThingsV2Request : public IoTRequest
  {
  public:
    AWS_IOT_API ListPrincipalThingsV2Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPrincipalThingsV2"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_IOT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListPrincipalThingsV2Request& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPrincipalThingsV2Request& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPrincipalThingsV2Request& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPrincipalThingsV2Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal. A principal can be an X.509 certificate or an Amazon Cognito
     * ID.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }
    inline ListPrincipalThingsV2Request& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}
    inline ListPrincipalThingsV2Request& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}
    inline ListPrincipalThingsV2Request& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the relation you want to filter in the response. If no value is
     * provided in this field, the response will list all things, including both the
     * <code>EXCLUSIVE_THING</code> and <code>NON_EXCLUSIVE_THING</code> attachment
     * types.</p> <ul> <li> <p> <code>EXCLUSIVE_THING</code> - Attaches the specified
     * principal to the specified thing, exclusively. The thing will be the only thing
     * that’s attached to the principal.</p> </li> </ul> <ul> <li> <p>
     * <code>NON_EXCLUSIVE_THING</code> - Attaches the specified principal to the
     * specified thing. Multiple things can be attached to the principal.</p> </li>
     * </ul>
     */
    inline const ThingPrincipalType& GetThingPrincipalType() const{ return m_thingPrincipalType; }
    inline bool ThingPrincipalTypeHasBeenSet() const { return m_thingPrincipalTypeHasBeenSet; }
    inline void SetThingPrincipalType(const ThingPrincipalType& value) { m_thingPrincipalTypeHasBeenSet = true; m_thingPrincipalType = value; }
    inline void SetThingPrincipalType(ThingPrincipalType&& value) { m_thingPrincipalTypeHasBeenSet = true; m_thingPrincipalType = std::move(value); }
    inline ListPrincipalThingsV2Request& WithThingPrincipalType(const ThingPrincipalType& value) { SetThingPrincipalType(value); return *this;}
    inline ListPrincipalThingsV2Request& WithThingPrincipalType(ThingPrincipalType&& value) { SetThingPrincipalType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    ThingPrincipalType m_thingPrincipalType;
    bool m_thingPrincipalTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
