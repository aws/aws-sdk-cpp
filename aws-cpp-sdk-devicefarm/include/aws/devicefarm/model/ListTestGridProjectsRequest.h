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
  class ListTestGridProjectsRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API ListTestGridProjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestGridProjects"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Return no more than this number of results.</p>
     */
    inline int GetMaxResult() const{ return m_maxResult; }

    /**
     * <p>Return no more than this number of results.</p>
     */
    inline bool MaxResultHasBeenSet() const { return m_maxResultHasBeenSet; }

    /**
     * <p>Return no more than this number of results.</p>
     */
    inline void SetMaxResult(int value) { m_maxResultHasBeenSet = true; m_maxResult = value; }

    /**
     * <p>Return no more than this number of results.</p>
     */
    inline ListTestGridProjectsRequest& WithMaxResult(int value) { SetMaxResult(value); return *this;}


    /**
     * <p>From a response, used to continue a paginated listing. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>From a response, used to continue a paginated listing. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>From a response, used to continue a paginated listing. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>From a response, used to continue a paginated listing. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>From a response, used to continue a paginated listing. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>From a response, used to continue a paginated listing. </p>
     */
    inline ListTestGridProjectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>From a response, used to continue a paginated listing. </p>
     */
    inline ListTestGridProjectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>From a response, used to continue a paginated listing. </p>
     */
    inline ListTestGridProjectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResult;
    bool m_maxResultHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
