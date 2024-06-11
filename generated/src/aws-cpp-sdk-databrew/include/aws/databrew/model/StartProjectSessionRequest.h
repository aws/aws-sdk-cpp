﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class StartProjectSessionRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API StartProjectSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartProjectSession"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the project to act upon.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StartProjectSessionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartProjectSessionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartProjectSessionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that, if true, enables you to take control of a session, even if a
     * different client is currently accessing the project.</p>
     */
    inline bool GetAssumeControl() const{ return m_assumeControl; }
    inline bool AssumeControlHasBeenSet() const { return m_assumeControlHasBeenSet; }
    inline void SetAssumeControl(bool value) { m_assumeControlHasBeenSet = true; m_assumeControl = value; }
    inline StartProjectSessionRequest& WithAssumeControl(bool value) { SetAssumeControl(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_assumeControl;
    bool m_assumeControlHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
