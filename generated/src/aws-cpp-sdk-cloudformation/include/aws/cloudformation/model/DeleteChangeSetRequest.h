/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for the <a>DeleteChangeSet</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteChangeSetInput">AWS
   * API Reference</a></p>
   */
  class DeleteChangeSetRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API DeleteChangeSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteChangeSet"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * delete.</p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::move(value); }
    inline void SetChangeSetName(const char* value) { m_changeSetNameHasBeenSet = true; m_changeSetName.assign(value); }
    inline DeleteChangeSetRequest& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}
    inline DeleteChangeSetRequest& WithChangeSetName(Aws::String&& value) { SetChangeSetName(std::move(value)); return *this;}
    inline DeleteChangeSetRequest& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specified the name of a change set to delete, specify the stack name
     * or Amazon Resource Name (ARN) that's associated with it.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline DeleteChangeSetRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline DeleteChangeSetRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline DeleteChangeSetRequest& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}
  private:

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
