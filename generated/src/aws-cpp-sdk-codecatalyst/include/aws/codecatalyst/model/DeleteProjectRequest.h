﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

  /**
   */
  class DeleteProjectRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API DeleteProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProject"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }
    inline DeleteProjectRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline DeleteProjectRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline DeleteProjectRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space. To retrieve a list of project names,
     * use <a>ListProjects</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DeleteProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeleteProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeleteProjectRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
