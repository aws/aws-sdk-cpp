/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkLink
{
namespace Model
{

  /**
   * <p>The summary of the certificate authority (CA).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/WebsiteCaSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WORKLINK_API WebsiteCaSummary
  {
  public:
    WebsiteCaSummary();
    WebsiteCaSummary(Aws::Utils::Json::JsonView jsonValue);
    WebsiteCaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline const Aws::String& GetWebsiteCaId() const{ return m_websiteCaId; }

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline bool WebsiteCaIdHasBeenSet() const { return m_websiteCaIdHasBeenSet; }

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline void SetWebsiteCaId(const Aws::String& value) { m_websiteCaIdHasBeenSet = true; m_websiteCaId = value; }

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline void SetWebsiteCaId(Aws::String&& value) { m_websiteCaIdHasBeenSet = true; m_websiteCaId = std::move(value); }

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline void SetWebsiteCaId(const char* value) { m_websiteCaIdHasBeenSet = true; m_websiteCaId.assign(value); }

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline WebsiteCaSummary& WithWebsiteCaId(const Aws::String& value) { SetWebsiteCaId(value); return *this;}

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline WebsiteCaSummary& WithWebsiteCaId(Aws::String&& value) { SetWebsiteCaId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline WebsiteCaSummary& WithWebsiteCaId(const char* value) { SetWebsiteCaId(value); return *this;}


    /**
     * <p>The time when the CA was added.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time when the CA was added.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time when the CA was added.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time when the CA was added.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time when the CA was added.</p>
     */
    inline WebsiteCaSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time when the CA was added.</p>
     */
    inline WebsiteCaSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name to display.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name to display.</p>
     */
    inline WebsiteCaSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name to display.</p>
     */
    inline WebsiteCaSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name to display.</p>
     */
    inline WebsiteCaSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:

    Aws::String m_websiteCaId;
    bool m_websiteCaIdHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
