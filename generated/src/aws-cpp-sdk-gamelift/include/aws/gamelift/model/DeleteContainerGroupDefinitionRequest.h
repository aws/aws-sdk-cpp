/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DeleteContainerGroupDefinitionRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DeleteContainerGroupDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteContainerGroupDefinition"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for the container group definition to delete. You can
     * use either the <code>Name</code> or <code>ARN</code> value.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DeleteContainerGroupDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeleteContainerGroupDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeleteContainerGroupDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific version to delete.</p>
     */
    inline int GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(int value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline DeleteContainerGroupDefinitionRequest& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of most recent versions to keep while deleting all older
     * versions.</p>
     */
    inline int GetVersionCountToRetain() const{ return m_versionCountToRetain; }
    inline bool VersionCountToRetainHasBeenSet() const { return m_versionCountToRetainHasBeenSet; }
    inline void SetVersionCountToRetain(int value) { m_versionCountToRetainHasBeenSet = true; m_versionCountToRetain = value; }
    inline DeleteContainerGroupDefinitionRequest& WithVersionCountToRetain(int value) { SetVersionCountToRetain(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    int m_versionCountToRetain;
    bool m_versionCountToRetainHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
