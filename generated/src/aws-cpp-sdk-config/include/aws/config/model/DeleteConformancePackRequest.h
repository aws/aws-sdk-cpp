/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class DeleteConformancePackRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DeleteConformancePackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConformancePack"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the conformance pack you want to delete.</p>
     */
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = value; }
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::move(value); }
    inline void SetConformancePackName(const char* value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName.assign(value); }
    inline DeleteConformancePackRequest& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}
    inline DeleteConformancePackRequest& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}
    inline DeleteConformancePackRequest& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}
    ///@}
  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
