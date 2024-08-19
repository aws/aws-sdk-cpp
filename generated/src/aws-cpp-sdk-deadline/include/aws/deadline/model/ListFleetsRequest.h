/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/FleetStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace deadline
{
namespace Model
{

  /**
   */
  class ListFleetsRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API ListFleetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFleets"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The farm ID of the fleets.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline ListFleetsRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline ListFleetsRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline ListFleetsRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal ID of the members to include in the fleet.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline ListFleetsRequest& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline ListFleetsRequest& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline ListFleetsRequest& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display names of a list of fleets.</p>  <p>This field can
     * store any content. Escape or encode this content before displaying it on a
     * webpage or any other system that might interpret the content of this field.</p>
     * 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline ListFleetsRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline ListFleetsRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline ListFleetsRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the fleet.</p>
     */
    inline const FleetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FleetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FleetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListFleetsRequest& WithStatus(const FleetStatus& value) { SetStatus(value); return *this;}
    inline ListFleetsRequest& WithStatus(FleetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListFleetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFleetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFleetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFleetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    FleetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
