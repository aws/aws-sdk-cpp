/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>GetApplication</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetApplicationInput">AWS
   * API Reference</a></p>
   */
  class GetApplicationRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API GetApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApplication"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline GetApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline GetApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline GetApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
