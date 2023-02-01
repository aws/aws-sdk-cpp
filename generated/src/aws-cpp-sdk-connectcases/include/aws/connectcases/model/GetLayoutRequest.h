/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class GetLayoutRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API GetLayoutRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLayout"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline GetLayoutRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline GetLayoutRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline GetLayoutRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline const Aws::String& GetLayoutId() const{ return m_layoutId; }

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline bool LayoutIdHasBeenSet() const { return m_layoutIdHasBeenSet; }

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline void SetLayoutId(const Aws::String& value) { m_layoutIdHasBeenSet = true; m_layoutId = value; }

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline void SetLayoutId(Aws::String&& value) { m_layoutIdHasBeenSet = true; m_layoutId = std::move(value); }

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline void SetLayoutId(const char* value) { m_layoutIdHasBeenSet = true; m_layoutId.assign(value); }

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline GetLayoutRequest& WithLayoutId(const Aws::String& value) { SetLayoutId(value); return *this;}

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline GetLayoutRequest& WithLayoutId(Aws::String&& value) { SetLayoutId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline GetLayoutRequest& WithLayoutId(const char* value) { SetLayoutId(value); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_layoutId;
    bool m_layoutIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
