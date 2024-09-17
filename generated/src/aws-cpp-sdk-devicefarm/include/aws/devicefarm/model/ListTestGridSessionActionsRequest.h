/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class ListTestGridSessionActionsRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API ListTestGridSessionActionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestGridSessionActions"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the session to retrieve.</p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }
    inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }
    inline void SetSessionArn(const Aws::String& value) { m_sessionArnHasBeenSet = true; m_sessionArn = value; }
    inline void SetSessionArn(Aws::String&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::move(value); }
    inline void SetSessionArn(const char* value) { m_sessionArnHasBeenSet = true; m_sessionArn.assign(value); }
    inline ListTestGridSessionActionsRequest& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}
    inline ListTestGridSessionActionsRequest& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}
    inline ListTestGridSessionActionsRequest& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of sessions to return per response.</p>
     */
    inline int GetMaxResult() const{ return m_maxResult; }
    inline bool MaxResultHasBeenSet() const { return m_maxResultHasBeenSet; }
    inline void SetMaxResult(int value) { m_maxResultHasBeenSet = true; m_maxResult = value; }
    inline ListTestGridSessionActionsRequest& WithMaxResult(int value) { SetMaxResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTestGridSessionActionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTestGridSessionActionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTestGridSessionActionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;

    int m_maxResult;
    bool m_maxResultHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
