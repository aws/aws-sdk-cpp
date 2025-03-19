/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p> The request structure for the create a new deployment request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDeploymentRequest">AWS
   * API Reference</a></p>
   */
  class CreateDeploymentRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API CreateDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    CreateDeploymentRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the branch to use for the job. </p>
     */
    inline const Aws::String& GetBranchName() const { return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    template<typename BranchNameT = Aws::String>
    void SetBranchName(BranchNameT&& value) { m_branchNameHasBeenSet = true; m_branchName = std::forward<BranchNameT>(value); }
    template<typename BranchNameT = Aws::String>
    CreateDeploymentRequest& WithBranchName(BranchNameT&& value) { SetBranchName(std::forward<BranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFileMap() const { return m_fileMap; }
    inline bool FileMapHasBeenSet() const { return m_fileMapHasBeenSet; }
    template<typename FileMapT = Aws::Map<Aws::String, Aws::String>>
    void SetFileMap(FileMapT&& value) { m_fileMapHasBeenSet = true; m_fileMap = std::forward<FileMapT>(value); }
    template<typename FileMapT = Aws::Map<Aws::String, Aws::String>>
    CreateDeploymentRequest& WithFileMap(FileMapT&& value) { SetFileMap(std::forward<FileMapT>(value)); return *this;}
    template<typename FileMapKeyT = Aws::String, typename FileMapValueT = Aws::String>
    CreateDeploymentRequest& AddFileMap(FileMapKeyT&& key, FileMapValueT&& value) {
      m_fileMapHasBeenSet = true; m_fileMap.emplace(std::forward<FileMapKeyT>(key), std::forward<FileMapValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_fileMap;
    bool m_fileMapHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
