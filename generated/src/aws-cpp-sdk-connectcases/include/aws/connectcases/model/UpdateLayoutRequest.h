/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/connectcases/model/LayoutContent.h>
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
  class UpdateLayoutRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API UpdateLayoutRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLayout"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Information about which fields will be present in the layout, the order of
     * the fields.</p>
     */
    inline const LayoutContent& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const LayoutContent& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(LayoutContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline UpdateLayoutRequest& WithContent(const LayoutContent& value) { SetContent(value); return *this;}
    inline UpdateLayoutRequest& WithContent(LayoutContent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline UpdateLayoutRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline UpdateLayoutRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline UpdateLayoutRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline const Aws::String& GetLayoutId() const{ return m_layoutId; }
    inline bool LayoutIdHasBeenSet() const { return m_layoutIdHasBeenSet; }
    inline void SetLayoutId(const Aws::String& value) { m_layoutIdHasBeenSet = true; m_layoutId = value; }
    inline void SetLayoutId(Aws::String&& value) { m_layoutIdHasBeenSet = true; m_layoutId = std::move(value); }
    inline void SetLayoutId(const char* value) { m_layoutIdHasBeenSet = true; m_layoutId.assign(value); }
    inline UpdateLayoutRequest& WithLayoutId(const Aws::String& value) { SetLayoutId(value); return *this;}
    inline UpdateLayoutRequest& WithLayoutId(Aws::String&& value) { SetLayoutId(std::move(value)); return *this;}
    inline UpdateLayoutRequest& WithLayoutId(const char* value) { SetLayoutId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the layout. It must be unique per domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateLayoutRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateLayoutRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateLayoutRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    LayoutContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_layoutId;
    bool m_layoutIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
