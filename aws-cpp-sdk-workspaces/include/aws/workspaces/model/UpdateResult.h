/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes whether a WorkSpace image needs to be updated with the latest
   * drivers and other components required by Amazon WorkSpaces.</p>  <p>Only
   * Windows 10 WorkSpace images can be programmatically updated at this time.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateResult">AWS
   * API Reference</a></p>
   */
  class UpdateResult
  {
  public:
    AWS_WORKSPACES_API UpdateResult();
    AWS_WORKSPACES_API UpdateResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API UpdateResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether updated drivers or other components are available for the
     * specified WorkSpace image.</p>
     */
    inline bool GetUpdateAvailable() const{ return m_updateAvailable; }

    /**
     * <p>Indicates whether updated drivers or other components are available for the
     * specified WorkSpace image.</p>
     */
    inline bool UpdateAvailableHasBeenSet() const { return m_updateAvailableHasBeenSet; }

    /**
     * <p>Indicates whether updated drivers or other components are available for the
     * specified WorkSpace image.</p>
     */
    inline void SetUpdateAvailable(bool value) { m_updateAvailableHasBeenSet = true; m_updateAvailable = value; }

    /**
     * <p>Indicates whether updated drivers or other components are available for the
     * specified WorkSpace image.</p>
     */
    inline UpdateResult& WithUpdateAvailable(bool value) { SetUpdateAvailable(value); return *this;}


    /**
     * <p>A description of whether updates for the WorkSpace image are pending or
     * available.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of whether updates for the WorkSpace image are pending or
     * available.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of whether updates for the WorkSpace image are pending or
     * available.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of whether updates for the WorkSpace image are pending or
     * available.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of whether updates for the WorkSpace image are pending or
     * available.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of whether updates for the WorkSpace image are pending or
     * available.</p>
     */
    inline UpdateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of whether updates for the WorkSpace image are pending or
     * available.</p>
     */
    inline UpdateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of whether updates for the WorkSpace image are pending or
     * available.</p>
     */
    inline UpdateResult& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    bool m_updateAvailable;
    bool m_updateAvailableHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
