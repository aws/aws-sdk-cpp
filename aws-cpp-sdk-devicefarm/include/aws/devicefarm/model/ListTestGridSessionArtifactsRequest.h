/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestGridSessionArtifactCategory.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class ListTestGridSessionArtifactsRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API ListTestGridSessionArtifactsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestGridSessionArtifacts"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of a <a>TestGridSession</a>. </p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }

    /**
     * <p>The ARN of a <a>TestGridSession</a>. </p>
     */
    inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }

    /**
     * <p>The ARN of a <a>TestGridSession</a>. </p>
     */
    inline void SetSessionArn(const Aws::String& value) { m_sessionArnHasBeenSet = true; m_sessionArn = value; }

    /**
     * <p>The ARN of a <a>TestGridSession</a>. </p>
     */
    inline void SetSessionArn(Aws::String&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::move(value); }

    /**
     * <p>The ARN of a <a>TestGridSession</a>. </p>
     */
    inline void SetSessionArn(const char* value) { m_sessionArnHasBeenSet = true; m_sessionArn.assign(value); }

    /**
     * <p>The ARN of a <a>TestGridSession</a>. </p>
     */
    inline ListTestGridSessionArtifactsRequest& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}

    /**
     * <p>The ARN of a <a>TestGridSession</a>. </p>
     */
    inline ListTestGridSessionArtifactsRequest& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a <a>TestGridSession</a>. </p>
     */
    inline ListTestGridSessionArtifactsRequest& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}


    /**
     * <p>Limit results to a specified type of artifact.</p>
     */
    inline const TestGridSessionArtifactCategory& GetType() const{ return m_type; }

    /**
     * <p>Limit results to a specified type of artifact.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Limit results to a specified type of artifact.</p>
     */
    inline void SetType(const TestGridSessionArtifactCategory& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Limit results to a specified type of artifact.</p>
     */
    inline void SetType(TestGridSessionArtifactCategory&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Limit results to a specified type of artifact.</p>
     */
    inline ListTestGridSessionArtifactsRequest& WithType(const TestGridSessionArtifactCategory& value) { SetType(value); return *this;}

    /**
     * <p>Limit results to a specified type of artifact.</p>
     */
    inline ListTestGridSessionArtifactsRequest& WithType(TestGridSessionArtifactCategory&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to be returned by a request.</p>
     */
    inline int GetMaxResult() const{ return m_maxResult; }

    /**
     * <p>The maximum number of results to be returned by a request.</p>
     */
    inline bool MaxResultHasBeenSet() const { return m_maxResultHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned by a request.</p>
     */
    inline void SetMaxResult(int value) { m_maxResultHasBeenSet = true; m_maxResult = value; }

    /**
     * <p>The maximum number of results to be returned by a request.</p>
     */
    inline ListTestGridSessionArtifactsRequest& WithMaxResult(int value) { SetMaxResult(value); return *this;}


    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline ListTestGridSessionArtifactsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline ListTestGridSessionArtifactsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline ListTestGridSessionArtifactsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;

    TestGridSessionArtifactCategory m_type;
    bool m_typeHasBeenSet = false;

    int m_maxResult;
    bool m_maxResultHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
