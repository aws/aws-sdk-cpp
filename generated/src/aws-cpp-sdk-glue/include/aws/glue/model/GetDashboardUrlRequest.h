/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/GlueResourceType.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class GetDashboardUrlRequest : public GlueRequest {
 public:
  AWS_GLUE_API GetDashboardUrlRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDashboardUrl"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the resource for which to retrieve the dashboard
   * URL.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  GetDashboardUrlRequest& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the resource. Valid values are <code>SESSION</code> and
   * <code>JOB</code>.</p>
   */
  inline GlueResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(GlueResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline GetDashboardUrlRequest& WithResourceType(GlueResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The origin of the request. </p>
   */
  inline const Aws::String& GetRequestOrigin() const { return m_requestOrigin; }
  inline bool RequestOriginHasBeenSet() const { return m_requestOriginHasBeenSet; }
  template <typename RequestOriginT = Aws::String>
  void SetRequestOrigin(RequestOriginT&& value) {
    m_requestOriginHasBeenSet = true;
    m_requestOrigin = std::forward<RequestOriginT>(value);
  }
  template <typename RequestOriginT = Aws::String>
  GetDashboardUrlRequest& WithRequestOrigin(RequestOriginT&& value) {
    SetRequestOrigin(std::forward<RequestOriginT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceId;

  GlueResourceType m_resourceType{GlueResourceType::NOT_SET};

  Aws::String m_requestOrigin;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_requestOriginHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
