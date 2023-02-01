/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class DeleteSessionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API DeleteSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSession"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the session to be deleted.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the session to be deleted.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the session to be deleted.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the session to be deleted.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the session to be deleted.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the session to be deleted.</p>
     */
    inline DeleteSessionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the session to be deleted.</p>
     */
    inline DeleteSessionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the session to be deleted.</p>
     */
    inline DeleteSessionRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the origin of the delete session request.</p>
     */
    inline const Aws::String& GetRequestOrigin() const{ return m_requestOrigin; }

    /**
     * <p>The name of the origin of the delete session request.</p>
     */
    inline bool RequestOriginHasBeenSet() const { return m_requestOriginHasBeenSet; }

    /**
     * <p>The name of the origin of the delete session request.</p>
     */
    inline void SetRequestOrigin(const Aws::String& value) { m_requestOriginHasBeenSet = true; m_requestOrigin = value; }

    /**
     * <p>The name of the origin of the delete session request.</p>
     */
    inline void SetRequestOrigin(Aws::String&& value) { m_requestOriginHasBeenSet = true; m_requestOrigin = std::move(value); }

    /**
     * <p>The name of the origin of the delete session request.</p>
     */
    inline void SetRequestOrigin(const char* value) { m_requestOriginHasBeenSet = true; m_requestOrigin.assign(value); }

    /**
     * <p>The name of the origin of the delete session request.</p>
     */
    inline DeleteSessionRequest& WithRequestOrigin(const Aws::String& value) { SetRequestOrigin(value); return *this;}

    /**
     * <p>The name of the origin of the delete session request.</p>
     */
    inline DeleteSessionRequest& WithRequestOrigin(Aws::String&& value) { SetRequestOrigin(std::move(value)); return *this;}

    /**
     * <p>The name of the origin of the delete session request.</p>
     */
    inline DeleteSessionRequest& WithRequestOrigin(const char* value) { SetRequestOrigin(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_requestOrigin;
    bool m_requestOriginHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
