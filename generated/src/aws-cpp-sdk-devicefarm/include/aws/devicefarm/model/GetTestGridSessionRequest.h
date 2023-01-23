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
  class GetTestGridSessionRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API GetTestGridSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTestGridSession"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN for the project that this session belongs to. See
     * <a>CreateTestGridProject</a> and <a>ListTestGridProjects</a>.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The ARN for the project that this session belongs to. See
     * <a>CreateTestGridProject</a> and <a>ListTestGridProjects</a>.</p>
     */
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }

    /**
     * <p>The ARN for the project that this session belongs to. See
     * <a>CreateTestGridProject</a> and <a>ListTestGridProjects</a>.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The ARN for the project that this session belongs to. See
     * <a>CreateTestGridProject</a> and <a>ListTestGridProjects</a>.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }

    /**
     * <p>The ARN for the project that this session belongs to. See
     * <a>CreateTestGridProject</a> and <a>ListTestGridProjects</a>.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }

    /**
     * <p>The ARN for the project that this session belongs to. See
     * <a>CreateTestGridProject</a> and <a>ListTestGridProjects</a>.</p>
     */
    inline GetTestGridSessionRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The ARN for the project that this session belongs to. See
     * <a>CreateTestGridProject</a> and <a>ListTestGridProjects</a>.</p>
     */
    inline GetTestGridSessionRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the project that this session belongs to. See
     * <a>CreateTestGridProject</a> and <a>ListTestGridProjects</a>.</p>
     */
    inline GetTestGridSessionRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}


    /**
     * <p>An ID associated with this session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>An ID associated with this session.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>An ID associated with this session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>An ID associated with this session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>An ID associated with this session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>An ID associated with this session.</p>
     */
    inline GetTestGridSessionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>An ID associated with this session.</p>
     */
    inline GetTestGridSessionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>An ID associated with this session.</p>
     */
    inline GetTestGridSessionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>An ARN that uniquely identifies a <a>TestGridSession</a>.</p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }

    /**
     * <p>An ARN that uniquely identifies a <a>TestGridSession</a>.</p>
     */
    inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies a <a>TestGridSession</a>.</p>
     */
    inline void SetSessionArn(const Aws::String& value) { m_sessionArnHasBeenSet = true; m_sessionArn = value; }

    /**
     * <p>An ARN that uniquely identifies a <a>TestGridSession</a>.</p>
     */
    inline void SetSessionArn(Aws::String&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a <a>TestGridSession</a>.</p>
     */
    inline void SetSessionArn(const char* value) { m_sessionArnHasBeenSet = true; m_sessionArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a <a>TestGridSession</a>.</p>
     */
    inline GetTestGridSessionRequest& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a <a>TestGridSession</a>.</p>
     */
    inline GetTestGridSessionRequest& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a <a>TestGridSession</a>.</p>
     */
    inline GetTestGridSessionRequest& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}

  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
