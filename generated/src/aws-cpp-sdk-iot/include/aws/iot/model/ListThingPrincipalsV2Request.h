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
  class ListThingPrincipalsV2Request : public IoTRequest
  {
  public:
    AWS_IOT_API ListThingPrincipalsV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListThingPrincipalsV2"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListThingPrincipalsV2Request& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListThingPrincipalsV2Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    ListThingPrincipalsV2Request& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the relation you want to filter in the response. If no value is
     * provided in this field, the response will list all principals, including both
     * the <code>EXCLUSIVE_THING</code> and <code>NON_EXCLUSIVE_THING</code> attachment
     * types.</p> <ul> <li> <p> <code>EXCLUSIVE_THING</code> - Attaches the specified
     * principal to the specified thing, exclusively. The thing will be the only thing
     * that’s attached to the principal.</p> </li> </ul> <ul> <li> <p>
     * <code>NON_EXCLUSIVE_THING</code> - Attaches the specified principal to the
     * specified thing. Multiple things can be attached to the principal.</p> </li>
     * </ul>
     */
    inline ThingPrincipalType GetThingPrincipalType() const { return m_thingPrincipalType; }
    inline bool ThingPrincipalTypeHasBeenSet() const { return m_thingPrincipalTypeHasBeenSet; }
    inline void SetThingPrincipalType(ThingPrincipalType value) { m_thingPrincipalTypeHasBeenSet = true; m_thingPrincipalType = value; }
    inline ListThingPrincipalsV2Request& WithThingPrincipalType(ThingPrincipalType value) { SetThingPrincipalType(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    ThingPrincipalType m_thingPrincipalType{ThingPrincipalType::NOT_SET};
    bool m_thingPrincipalTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
