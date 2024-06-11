/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AuditManager
{
namespace Model
{

  /**
   * <p> Short for uniform resource locator. A URL is used as a unique identifier to
   * locate a resource on the internet. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/URL">AWS
   * API Reference</a></p>
   */
  class URL
  {
  public:
    AWS_AUDITMANAGER_API URL();
    AWS_AUDITMANAGER_API URL(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API URL& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name or word that's used as a hyperlink to the URL. </p>
     */
    inline const Aws::String& GetHyperlinkName() const{ return m_hyperlinkName; }
    inline bool HyperlinkNameHasBeenSet() const { return m_hyperlinkNameHasBeenSet; }
    inline void SetHyperlinkName(const Aws::String& value) { m_hyperlinkNameHasBeenSet = true; m_hyperlinkName = value; }
    inline void SetHyperlinkName(Aws::String&& value) { m_hyperlinkNameHasBeenSet = true; m_hyperlinkName = std::move(value); }
    inline void SetHyperlinkName(const char* value) { m_hyperlinkNameHasBeenSet = true; m_hyperlinkName.assign(value); }
    inline URL& WithHyperlinkName(const Aws::String& value) { SetHyperlinkName(value); return *this;}
    inline URL& WithHyperlinkName(Aws::String&& value) { SetHyperlinkName(std::move(value)); return *this;}
    inline URL& WithHyperlinkName(const char* value) { SetHyperlinkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the internet resource. </p>
     */
    inline const Aws::String& GetLink() const{ return m_link; }
    inline bool LinkHasBeenSet() const { return m_linkHasBeenSet; }
    inline void SetLink(const Aws::String& value) { m_linkHasBeenSet = true; m_link = value; }
    inline void SetLink(Aws::String&& value) { m_linkHasBeenSet = true; m_link = std::move(value); }
    inline void SetLink(const char* value) { m_linkHasBeenSet = true; m_link.assign(value); }
    inline URL& WithLink(const Aws::String& value) { SetLink(value); return *this;}
    inline URL& WithLink(Aws::String&& value) { SetLink(std::move(value)); return *this;}
    inline URL& WithLink(const char* value) { SetLink(value); return *this;}
    ///@}
  private:

    Aws::String m_hyperlinkName;
    bool m_hyperlinkNameHasBeenSet = false;

    Aws::String m_link;
    bool m_linkHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
